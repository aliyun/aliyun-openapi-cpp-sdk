/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_DATAWORKS_PUBLICCLIENT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_DATAWORKS_PUBLICCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Dataworks_publicExport.h"
#include "model/CheckCallbackRequest.h"
#include "model/CheckCallbackResult.h"
#include "model/CreateManualDagRequest.h"
#include "model/CreateManualDagResult.h"
#include "model/DeleteFileRequest.h"
#include "model/DeleteFileResult.h"
#include "model/DescribeEmrHiveTableRequest.h"
#include "model/DescribeEmrHiveTableResult.h"
#include "model/ListEmrHiveAuditLogsRequest.h"
#include "model/ListEmrHiveAuditLogsResult.h"
#include "model/ListEmrHiveDatabasesRequest.h"
#include "model/ListEmrHiveDatabasesResult.h"
#include "model/ListEmrHiveTablesRequest.h"
#include "model/ListEmrHiveTablesResult.h"
#include "model/ListHiveColumnLineagesRequest.h"
#include "model/ListHiveColumnLineagesResult.h"
#include "model/ListHiveTableLineagesRequest.h"
#include "model/ListHiveTableLineagesResult.h"
#include "model/ListTablePartitionsRequest.h"
#include "model/ListTablePartitionsResult.h"
#include "model/SearchManualDagNodeInstanceRequest.h"
#include "model/SearchManualDagNodeInstanceResult.h"


namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT Dataworks_publicClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CheckCallbackResult> CheckCallbackOutcome;
			typedef std::future<CheckCallbackOutcome> CheckCallbackOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CheckCallbackRequest&, const CheckCallbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckCallbackAsyncHandler;
			typedef Outcome<Error, Model::CreateManualDagResult> CreateManualDagOutcome;
			typedef std::future<CreateManualDagOutcome> CreateManualDagOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateManualDagRequest&, const CreateManualDagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateManualDagAsyncHandler;
			typedef Outcome<Error, Model::DeleteFileResult> DeleteFileOutcome;
			typedef std::future<DeleteFileOutcome> DeleteFileOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteFileRequest&, const DeleteFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFileAsyncHandler;
			typedef Outcome<Error, Model::DescribeEmrHiveTableResult> DescribeEmrHiveTableOutcome;
			typedef std::future<DescribeEmrHiveTableOutcome> DescribeEmrHiveTableOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DescribeEmrHiveTableRequest&, const DescribeEmrHiveTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEmrHiveTableAsyncHandler;
			typedef Outcome<Error, Model::ListEmrHiveAuditLogsResult> ListEmrHiveAuditLogsOutcome;
			typedef std::future<ListEmrHiveAuditLogsOutcome> ListEmrHiveAuditLogsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListEmrHiveAuditLogsRequest&, const ListEmrHiveAuditLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEmrHiveAuditLogsAsyncHandler;
			typedef Outcome<Error, Model::ListEmrHiveDatabasesResult> ListEmrHiveDatabasesOutcome;
			typedef std::future<ListEmrHiveDatabasesOutcome> ListEmrHiveDatabasesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListEmrHiveDatabasesRequest&, const ListEmrHiveDatabasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEmrHiveDatabasesAsyncHandler;
			typedef Outcome<Error, Model::ListEmrHiveTablesResult> ListEmrHiveTablesOutcome;
			typedef std::future<ListEmrHiveTablesOutcome> ListEmrHiveTablesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListEmrHiveTablesRequest&, const ListEmrHiveTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEmrHiveTablesAsyncHandler;
			typedef Outcome<Error, Model::ListHiveColumnLineagesResult> ListHiveColumnLineagesOutcome;
			typedef std::future<ListHiveColumnLineagesOutcome> ListHiveColumnLineagesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListHiveColumnLineagesRequest&, const ListHiveColumnLineagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListHiveColumnLineagesAsyncHandler;
			typedef Outcome<Error, Model::ListHiveTableLineagesResult> ListHiveTableLineagesOutcome;
			typedef std::future<ListHiveTableLineagesOutcome> ListHiveTableLineagesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListHiveTableLineagesRequest&, const ListHiveTableLineagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListHiveTableLineagesAsyncHandler;
			typedef Outcome<Error, Model::ListTablePartitionsResult> ListTablePartitionsOutcome;
			typedef std::future<ListTablePartitionsOutcome> ListTablePartitionsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListTablePartitionsRequest&, const ListTablePartitionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTablePartitionsAsyncHandler;
			typedef Outcome<Error, Model::SearchManualDagNodeInstanceResult> SearchManualDagNodeInstanceOutcome;
			typedef std::future<SearchManualDagNodeInstanceOutcome> SearchManualDagNodeInstanceOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::SearchManualDagNodeInstanceRequest&, const SearchManualDagNodeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchManualDagNodeInstanceAsyncHandler;

			Dataworks_publicClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Dataworks_publicClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Dataworks_publicClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Dataworks_publicClient();
			CheckCallbackOutcome checkCallback(const Model::CheckCallbackRequest &request)const;
			void checkCallbackAsync(const Model::CheckCallbackRequest& request, const CheckCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckCallbackOutcomeCallable checkCallbackCallable(const Model::CheckCallbackRequest& request) const;
			CreateManualDagOutcome createManualDag(const Model::CreateManualDagRequest &request)const;
			void createManualDagAsync(const Model::CreateManualDagRequest& request, const CreateManualDagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateManualDagOutcomeCallable createManualDagCallable(const Model::CreateManualDagRequest& request) const;
			DeleteFileOutcome deleteFile(const Model::DeleteFileRequest &request)const;
			void deleteFileAsync(const Model::DeleteFileRequest& request, const DeleteFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFileOutcomeCallable deleteFileCallable(const Model::DeleteFileRequest& request) const;
			DescribeEmrHiveTableOutcome describeEmrHiveTable(const Model::DescribeEmrHiveTableRequest &request)const;
			void describeEmrHiveTableAsync(const Model::DescribeEmrHiveTableRequest& request, const DescribeEmrHiveTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEmrHiveTableOutcomeCallable describeEmrHiveTableCallable(const Model::DescribeEmrHiveTableRequest& request) const;
			ListEmrHiveAuditLogsOutcome listEmrHiveAuditLogs(const Model::ListEmrHiveAuditLogsRequest &request)const;
			void listEmrHiveAuditLogsAsync(const Model::ListEmrHiveAuditLogsRequest& request, const ListEmrHiveAuditLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEmrHiveAuditLogsOutcomeCallable listEmrHiveAuditLogsCallable(const Model::ListEmrHiveAuditLogsRequest& request) const;
			ListEmrHiveDatabasesOutcome listEmrHiveDatabases(const Model::ListEmrHiveDatabasesRequest &request)const;
			void listEmrHiveDatabasesAsync(const Model::ListEmrHiveDatabasesRequest& request, const ListEmrHiveDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEmrHiveDatabasesOutcomeCallable listEmrHiveDatabasesCallable(const Model::ListEmrHiveDatabasesRequest& request) const;
			ListEmrHiveTablesOutcome listEmrHiveTables(const Model::ListEmrHiveTablesRequest &request)const;
			void listEmrHiveTablesAsync(const Model::ListEmrHiveTablesRequest& request, const ListEmrHiveTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEmrHiveTablesOutcomeCallable listEmrHiveTablesCallable(const Model::ListEmrHiveTablesRequest& request) const;
			ListHiveColumnLineagesOutcome listHiveColumnLineages(const Model::ListHiveColumnLineagesRequest &request)const;
			void listHiveColumnLineagesAsync(const Model::ListHiveColumnLineagesRequest& request, const ListHiveColumnLineagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListHiveColumnLineagesOutcomeCallable listHiveColumnLineagesCallable(const Model::ListHiveColumnLineagesRequest& request) const;
			ListHiveTableLineagesOutcome listHiveTableLineages(const Model::ListHiveTableLineagesRequest &request)const;
			void listHiveTableLineagesAsync(const Model::ListHiveTableLineagesRequest& request, const ListHiveTableLineagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListHiveTableLineagesOutcomeCallable listHiveTableLineagesCallable(const Model::ListHiveTableLineagesRequest& request) const;
			ListTablePartitionsOutcome listTablePartitions(const Model::ListTablePartitionsRequest &request)const;
			void listTablePartitionsAsync(const Model::ListTablePartitionsRequest& request, const ListTablePartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTablePartitionsOutcomeCallable listTablePartitionsCallable(const Model::ListTablePartitionsRequest& request) const;
			SearchManualDagNodeInstanceOutcome searchManualDagNodeInstance(const Model::SearchManualDagNodeInstanceRequest &request)const;
			void searchManualDagNodeInstanceAsync(const Model::SearchManualDagNodeInstanceRequest& request, const SearchManualDagNodeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchManualDagNodeInstanceOutcomeCallable searchManualDagNodeInstanceCallable(const Model::SearchManualDagNodeInstanceRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_DATAWORKS_PUBLICCLIENT_H_
