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
#include "model/CreateRealTimeProcessRequest.h"
#include "model/CreateRealTimeProcessResult.h"
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
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/QueryRealTimeProcessStatusRequest.h"
#include "model/QueryRealTimeProcessStatusResult.h"
#include "model/SearchManualDagNodeInstanceRequest.h"
#include "model/SearchManualDagNodeInstanceResult.h"
#include "model/SendTaskMetaCallbackRequest.h"
#include "model/SendTaskMetaCallbackResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UnTagResourcesRequest.h"
#include "model/UnTagResourcesResult.h"


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
			typedef Outcome<Error, Model::CreateRealTimeProcessResult> CreateRealTimeProcessOutcome;
			typedef std::future<CreateRealTimeProcessOutcome> CreateRealTimeProcessOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateRealTimeProcessRequest&, const CreateRealTimeProcessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRealTimeProcessAsyncHandler;
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
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::QueryRealTimeProcessStatusResult> QueryRealTimeProcessStatusOutcome;
			typedef std::future<QueryRealTimeProcessStatusOutcome> QueryRealTimeProcessStatusOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::QueryRealTimeProcessStatusRequest&, const QueryRealTimeProcessStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRealTimeProcessStatusAsyncHandler;
			typedef Outcome<Error, Model::SearchManualDagNodeInstanceResult> SearchManualDagNodeInstanceOutcome;
			typedef std::future<SearchManualDagNodeInstanceOutcome> SearchManualDagNodeInstanceOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::SearchManualDagNodeInstanceRequest&, const SearchManualDagNodeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchManualDagNodeInstanceAsyncHandler;
			typedef Outcome<Error, Model::SendTaskMetaCallbackResult> SendTaskMetaCallbackOutcome;
			typedef std::future<SendTaskMetaCallbackOutcome> SendTaskMetaCallbackOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::SendTaskMetaCallbackRequest&, const SendTaskMetaCallbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendTaskMetaCallbackAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UnTagResourcesResult> UnTagResourcesOutcome;
			typedef std::future<UnTagResourcesOutcome> UnTagResourcesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UnTagResourcesRequest&, const UnTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnTagResourcesAsyncHandler;

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
			CreateRealTimeProcessOutcome createRealTimeProcess(const Model::CreateRealTimeProcessRequest &request)const;
			void createRealTimeProcessAsync(const Model::CreateRealTimeProcessRequest& request, const CreateRealTimeProcessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRealTimeProcessOutcomeCallable createRealTimeProcessCallable(const Model::CreateRealTimeProcessRequest& request) const;
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
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			QueryRealTimeProcessStatusOutcome queryRealTimeProcessStatus(const Model::QueryRealTimeProcessStatusRequest &request)const;
			void queryRealTimeProcessStatusAsync(const Model::QueryRealTimeProcessStatusRequest& request, const QueryRealTimeProcessStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRealTimeProcessStatusOutcomeCallable queryRealTimeProcessStatusCallable(const Model::QueryRealTimeProcessStatusRequest& request) const;
			SearchManualDagNodeInstanceOutcome searchManualDagNodeInstance(const Model::SearchManualDagNodeInstanceRequest &request)const;
			void searchManualDagNodeInstanceAsync(const Model::SearchManualDagNodeInstanceRequest& request, const SearchManualDagNodeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchManualDagNodeInstanceOutcomeCallable searchManualDagNodeInstanceCallable(const Model::SearchManualDagNodeInstanceRequest& request) const;
			SendTaskMetaCallbackOutcome sendTaskMetaCallback(const Model::SendTaskMetaCallbackRequest &request)const;
			void sendTaskMetaCallbackAsync(const Model::SendTaskMetaCallbackRequest& request, const SendTaskMetaCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendTaskMetaCallbackOutcomeCallable sendTaskMetaCallbackCallable(const Model::SendTaskMetaCallbackRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UnTagResourcesOutcome unTagResources(const Model::UnTagResourcesRequest &request)const;
			void unTagResourcesAsync(const Model::UnTagResourcesRequest& request, const UnTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnTagResourcesOutcomeCallable unTagResourcesCallable(const Model::UnTagResourcesRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_DATAWORKS_PUBLICCLIENT_H_
