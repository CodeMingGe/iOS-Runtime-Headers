/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3SqliteDatabaseContext, NSString, MLSQLiteConnectionQueue;

@interface ML3SqliteDatabase : NSObject {
    MLSQLiteConnectionQueue *_backgroundConnectionQueue;
    ML3SqliteDatabaseContext *_backgroundDatabaseContext;
    NSString *_backgroundQueueIdentifier;
    BOOL _enableWrites;
    NSString *_identifier;
    ML3SqliteDatabaseContext *_mainDatabaseContext;
    NSString *_path;
}

@property(readonly) NSString * path;

+ (id)allSchemaSQL;
+ (BOOL)attachAuxiliaryDatabases:(struct sqlite3 { }*)arg1;
+ (BOOL)buildDatabaseTablesUsingHandle:(struct sqlite3 { }*)arg1 usingTransaction:(BOOL)arg2;
+ (void)closeDatabaseHandle:(struct sqlite3 { }*)arg1;
+ (int)currentUserVersion;
+ (id)databasePath;
+ (BOOL)executeSQL:(id)arg1 usingHandle:(struct sqlite3 { }*)arg2;
+ (void)limitCacheSize:(struct sqlite3 { }*)arg1;
+ (BOOL)migrateFromVersion:(int)arg1 outUserVersion:(int*)arg2 usingHandle:(struct sqlite3 { }*)arg3;
+ (BOOL)migrateToCurrentUserVersionUsingHandle:(struct sqlite3 { }*)arg1;
+ (BOOL)orderingLanguageMatchesSystemUsingHandle:(struct sqlite3 { }*)arg1;
+ (void)registerCustomCallbacksOnHandle:(struct sqlite3 { }*)arg1;
+ (void)registerFunctionsOnHandle:(struct sqlite3 { }*)arg1;
+ (BOOL)statementDidFinishAfterStepping:(struct sqlite3_stmt { }*)arg1;
+ (BOOL)statementHasRowAfterStepping:(struct sqlite3_stmt { }*)arg1;
+ (void)stepStatement:(struct sqlite3_stmt { }*)arg1 hasRow:(BOOL*)arg2 didFinish:(BOOL*)arg3;
+ (id)systemCurrentLanguage;
+ (BOOL)userVersionMatchesSystemUsingHandle:(struct sqlite3 { }*)arg1;
+ (int)userVersionUsingHandle:(struct sqlite3 { }*)arg1;

- (void).cxx_destruct;
- (void)_accessDatabaseContextUsingBlock:(id)arg1;
- (void)_debugLoggingOptionsDidChangeNotification:(id)arg1;
- (void)_enumerateDatabaseContextsUsingBlock:(id)arg1;
- (id)_onBackgroundQueueDatabaseContext;
- (id)_onMainQueueDatabaseContext;
- (BOOL)_openDatabaseWithOpenHandler:(id)arg1;
- (void)accessDatabaseContextUsingBlock:(id)arg1;
- (void)accessDatabaseUsingBlock:(id)arg1;
- (BOOL)buildDatabaseTables;
- (BOOL)canWriteToDatabase;
- (BOOL)coerceValidDatabase;
- (void)dealloc;
- (BOOL)deleteAndRecreateDatabaseUsingHandle:(struct sqlite3 {}**)arg1;
- (id)description;
- (void)didCommitInDatabaseContext:(id)arg1;
- (void)didRollbackInDatabaseContext:(id)arg1;
- (BOOL)executeSQL:(id)arg1;
- (id)initWithIdentifier:(id)arg1 path:(id)arg2 backgroundConnectionQueue:(id)arg3 enableWrites:(BOOL)arg4;
- (id)newDatabaseContext;
- (BOOL)openDatabaseHandle:(struct sqlite3 {}**)arg1;
- (struct sqlite3 { }*)openedDatabaseHandle;
- (id)path;
- (void)performOperationInBackground:(id)arg1;
- (void)performTransactionWithBlock:(id)arg1;
- (void)prepareStatementForSQL:(id)arg1 usingBlock:(id)arg2;
- (void)reconnectBackgroundDatabaseContext;
- (void)reconnectMainDatabaseContext;
- (void)reconnectToDatabaseWithCompletionHandler:(id)arg1;
- (BOOL)requiresPostProcessing;

@end
