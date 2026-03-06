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
#include "model/CreateManualDagRequest.h"
#include "model/CreateManualDagResult.h"
#include "model/DeleteFileRequest.h"
#include "model/DeleteFileResult.h"
#include "model/DescribeEmrHiveTableRequest.h"
#include "model/DescribeEmrHiveTableResult.h"
#include "model/GetDataServiceApiAuthMapContextRequest.h"
#include "model/GetDataServiceApiAuthMapContextResult.h"
#include "model/GetDataServiceApiContextRequest.h"
#include "model/GetDataServiceApiContextResult.h"
#include "model/GetDataServiceConfigRequest.h"
#include "model/GetDataServiceConfigResult.h"
#include "model/GetDataServiceConnectionRequest.h"
#include "model/GetDataServiceConnectionResult.h"
#include "model/GetDataServiceContextUpdateEventRequest.h"
#include "model/GetDataServiceContextUpdateEventResult.h"
#include "model/GetDataServiceFunctionRequest.h"
#include "model/GetDataServiceFunctionResult.h"
#include "model/GetSwitchValueRequest.h"
#include "model/GetSwitchValueResult.h"
#include "model/GetTimeMachineTaskRequest.h"
#include "model/GetTimeMachineTaskResult.h"
#include "model/ListEmrHiveAuditLogsRequest.h"
#include "model/ListEmrHiveAuditLogsResult.h"
#include "model/ListEmrHiveDatabasesRequest.h"
#include "model/ListEmrHiveDatabasesResult.h"
#include "model/ListEmrHiveTablesRequest.h"
#include "model/ListEmrHiveTablesResult.h"
#include "model/ListGovernanceIssueDataServiceAPIsRequest.h"
#include "model/ListGovernanceIssueDataServiceAPIsResult.h"
#include "model/ListGovernanceIssueTablesRequest.h"
#include "model/ListGovernanceIssueTablesResult.h"
#include "model/ListGovernanceIssueTasksRequest.h"
#include "model/ListGovernanceIssueTasksResult.h"
#include "model/ListGovernanceRulesRequest.h"
#include "model/ListGovernanceRulesResult.h"
#include "model/ListHiveColumnLineagesRequest.h"
#include "model/ListHiveColumnLineagesResult.h"
#include "model/ListHiveTableLineagesRequest.h"
#include "model/ListHiveTableLineagesResult.h"
#include "model/ListTablePartitionsRequest.h"
#include "model/ListTablePartitionsResult.h"
#include "model/OpenDataWorksStandardServiceRequest.h"
#include "model/OpenDataWorksStandardServiceResult.h"
#include "model/SearchManualDagNodeInstanceRequest.h"
#include "model/SearchManualDagNodeInstanceResult.h"
#include "model/SendTaskMetaCallbackRequest.h"
#include "model/SendTaskMetaCallbackResult.h"
#include "model/SetSwitchValueRequest.h"
#include "model/SetSwitchValueResult.h"
#include "model/TriggerDataLoaderRequest.h"
#include "model/TriggerDataLoaderResult.h"
#include "model/TriggerTimeMachineTaskRequest.h"
#include "model/TriggerTimeMachineTaskResult.h"


namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT Dataworks_publicClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateManualDagResult> CreateManualDagOutcome;
			typedef std::future<CreateManualDagOutcome> CreateManualDagOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateManualDagRequest&, const CreateManualDagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateManualDagAsyncHandler;
			typedef Outcome<Error, Model::DeleteFileResult> DeleteFileOutcome;
			typedef std::future<DeleteFileOutcome> DeleteFileOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteFileRequest&, const DeleteFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFileAsyncHandler;
			typedef Outcome<Error, Model::DescribeEmrHiveTableResult> DescribeEmrHiveTableOutcome;
			typedef std::future<DescribeEmrHiveTableOutcome> DescribeEmrHiveTableOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DescribeEmrHiveTableRequest&, const DescribeEmrHiveTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEmrHiveTableAsyncHandler;
			typedef Outcome<Error, Model::GetDataServiceApiAuthMapContextResult> GetDataServiceApiAuthMapContextOutcome;
			typedef std::future<GetDataServiceApiAuthMapContextOutcome> GetDataServiceApiAuthMapContextOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDataServiceApiAuthMapContextRequest&, const GetDataServiceApiAuthMapContextOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataServiceApiAuthMapContextAsyncHandler;
			typedef Outcome<Error, Model::GetDataServiceApiContextResult> GetDataServiceApiContextOutcome;
			typedef std::future<GetDataServiceApiContextOutcome> GetDataServiceApiContextOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDataServiceApiContextRequest&, const GetDataServiceApiContextOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataServiceApiContextAsyncHandler;
			typedef Outcome<Error, Model::GetDataServiceConfigResult> GetDataServiceConfigOutcome;
			typedef std::future<GetDataServiceConfigOutcome> GetDataServiceConfigOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDataServiceConfigRequest&, const GetDataServiceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataServiceConfigAsyncHandler;
			typedef Outcome<Error, Model::GetDataServiceConnectionResult> GetDataServiceConnectionOutcome;
			typedef std::future<GetDataServiceConnectionOutcome> GetDataServiceConnectionOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDataServiceConnectionRequest&, const GetDataServiceConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataServiceConnectionAsyncHandler;
			typedef Outcome<Error, Model::GetDataServiceContextUpdateEventResult> GetDataServiceContextUpdateEventOutcome;
			typedef std::future<GetDataServiceContextUpdateEventOutcome> GetDataServiceContextUpdateEventOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDataServiceContextUpdateEventRequest&, const GetDataServiceContextUpdateEventOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataServiceContextUpdateEventAsyncHandler;
			typedef Outcome<Error, Model::GetDataServiceFunctionResult> GetDataServiceFunctionOutcome;
			typedef std::future<GetDataServiceFunctionOutcome> GetDataServiceFunctionOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDataServiceFunctionRequest&, const GetDataServiceFunctionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataServiceFunctionAsyncHandler;
			typedef Outcome<Error, Model::GetSwitchValueResult> GetSwitchValueOutcome;
			typedef std::future<GetSwitchValueOutcome> GetSwitchValueOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetSwitchValueRequest&, const GetSwitchValueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSwitchValueAsyncHandler;
			typedef Outcome<Error, Model::GetTimeMachineTaskResult> GetTimeMachineTaskOutcome;
			typedef std::future<GetTimeMachineTaskOutcome> GetTimeMachineTaskOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetTimeMachineTaskRequest&, const GetTimeMachineTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTimeMachineTaskAsyncHandler;
			typedef Outcome<Error, Model::ListEmrHiveAuditLogsResult> ListEmrHiveAuditLogsOutcome;
			typedef std::future<ListEmrHiveAuditLogsOutcome> ListEmrHiveAuditLogsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListEmrHiveAuditLogsRequest&, const ListEmrHiveAuditLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEmrHiveAuditLogsAsyncHandler;
			typedef Outcome<Error, Model::ListEmrHiveDatabasesResult> ListEmrHiveDatabasesOutcome;
			typedef std::future<ListEmrHiveDatabasesOutcome> ListEmrHiveDatabasesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListEmrHiveDatabasesRequest&, const ListEmrHiveDatabasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEmrHiveDatabasesAsyncHandler;
			typedef Outcome<Error, Model::ListEmrHiveTablesResult> ListEmrHiveTablesOutcome;
			typedef std::future<ListEmrHiveTablesOutcome> ListEmrHiveTablesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListEmrHiveTablesRequest&, const ListEmrHiveTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEmrHiveTablesAsyncHandler;
			typedef Outcome<Error, Model::ListGovernanceIssueDataServiceAPIsResult> ListGovernanceIssueDataServiceAPIsOutcome;
			typedef std::future<ListGovernanceIssueDataServiceAPIsOutcome> ListGovernanceIssueDataServiceAPIsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListGovernanceIssueDataServiceAPIsRequest&, const ListGovernanceIssueDataServiceAPIsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGovernanceIssueDataServiceAPIsAsyncHandler;
			typedef Outcome<Error, Model::ListGovernanceIssueTablesResult> ListGovernanceIssueTablesOutcome;
			typedef std::future<ListGovernanceIssueTablesOutcome> ListGovernanceIssueTablesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListGovernanceIssueTablesRequest&, const ListGovernanceIssueTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGovernanceIssueTablesAsyncHandler;
			typedef Outcome<Error, Model::ListGovernanceIssueTasksResult> ListGovernanceIssueTasksOutcome;
			typedef std::future<ListGovernanceIssueTasksOutcome> ListGovernanceIssueTasksOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListGovernanceIssueTasksRequest&, const ListGovernanceIssueTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGovernanceIssueTasksAsyncHandler;
			typedef Outcome<Error, Model::ListGovernanceRulesResult> ListGovernanceRulesOutcome;
			typedef std::future<ListGovernanceRulesOutcome> ListGovernanceRulesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListGovernanceRulesRequest&, const ListGovernanceRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGovernanceRulesAsyncHandler;
			typedef Outcome<Error, Model::ListHiveColumnLineagesResult> ListHiveColumnLineagesOutcome;
			typedef std::future<ListHiveColumnLineagesOutcome> ListHiveColumnLineagesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListHiveColumnLineagesRequest&, const ListHiveColumnLineagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListHiveColumnLineagesAsyncHandler;
			typedef Outcome<Error, Model::ListHiveTableLineagesResult> ListHiveTableLineagesOutcome;
			typedef std::future<ListHiveTableLineagesOutcome> ListHiveTableLineagesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListHiveTableLineagesRequest&, const ListHiveTableLineagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListHiveTableLineagesAsyncHandler;
			typedef Outcome<Error, Model::ListTablePartitionsResult> ListTablePartitionsOutcome;
			typedef std::future<ListTablePartitionsOutcome> ListTablePartitionsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListTablePartitionsRequest&, const ListTablePartitionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTablePartitionsAsyncHandler;
			typedef Outcome<Error, Model::OpenDataWorksStandardServiceResult> OpenDataWorksStandardServiceOutcome;
			typedef std::future<OpenDataWorksStandardServiceOutcome> OpenDataWorksStandardServiceOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::OpenDataWorksStandardServiceRequest&, const OpenDataWorksStandardServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenDataWorksStandardServiceAsyncHandler;
			typedef Outcome<Error, Model::SearchManualDagNodeInstanceResult> SearchManualDagNodeInstanceOutcome;
			typedef std::future<SearchManualDagNodeInstanceOutcome> SearchManualDagNodeInstanceOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::SearchManualDagNodeInstanceRequest&, const SearchManualDagNodeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchManualDagNodeInstanceAsyncHandler;
			typedef Outcome<Error, Model::SendTaskMetaCallbackResult> SendTaskMetaCallbackOutcome;
			typedef std::future<SendTaskMetaCallbackOutcome> SendTaskMetaCallbackOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::SendTaskMetaCallbackRequest&, const SendTaskMetaCallbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendTaskMetaCallbackAsyncHandler;
			typedef Outcome<Error, Model::SetSwitchValueResult> SetSwitchValueOutcome;
			typedef std::future<SetSwitchValueOutcome> SetSwitchValueOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::SetSwitchValueRequest&, const SetSwitchValueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetSwitchValueAsyncHandler;
			typedef Outcome<Error, Model::TriggerDataLoaderResult> TriggerDataLoaderOutcome;
			typedef std::future<TriggerDataLoaderOutcome> TriggerDataLoaderOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::TriggerDataLoaderRequest&, const TriggerDataLoaderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TriggerDataLoaderAsyncHandler;
			typedef Outcome<Error, Model::TriggerTimeMachineTaskResult> TriggerTimeMachineTaskOutcome;
			typedef std::future<TriggerTimeMachineTaskOutcome> TriggerTimeMachineTaskOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::TriggerTimeMachineTaskRequest&, const TriggerTimeMachineTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TriggerTimeMachineTaskAsyncHandler;

			Dataworks_publicClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Dataworks_publicClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Dataworks_publicClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Dataworks_publicClient();
			CreateManualDagOutcome createManualDag(const Model::CreateManualDagRequest &request)const;
			void createManualDagAsync(const Model::CreateManualDagRequest& request, const CreateManualDagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateManualDagOutcomeCallable createManualDagCallable(const Model::CreateManualDagRequest& request) const;
			DeleteFileOutcome deleteFile(const Model::DeleteFileRequest &request)const;
			void deleteFileAsync(const Model::DeleteFileRequest& request, const DeleteFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFileOutcomeCallable deleteFileCallable(const Model::DeleteFileRequest& request) const;
			DescribeEmrHiveTableOutcome describeEmrHiveTable(const Model::DescribeEmrHiveTableRequest &request)const;
			void describeEmrHiveTableAsync(const Model::DescribeEmrHiveTableRequest& request, const DescribeEmrHiveTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEmrHiveTableOutcomeCallable describeEmrHiveTableCallable(const Model::DescribeEmrHiveTableRequest& request) const;
			GetDataServiceApiAuthMapContextOutcome getDataServiceApiAuthMapContext(const Model::GetDataServiceApiAuthMapContextRequest &request)const;
			void getDataServiceApiAuthMapContextAsync(const Model::GetDataServiceApiAuthMapContextRequest& request, const GetDataServiceApiAuthMapContextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataServiceApiAuthMapContextOutcomeCallable getDataServiceApiAuthMapContextCallable(const Model::GetDataServiceApiAuthMapContextRequest& request) const;
			GetDataServiceApiContextOutcome getDataServiceApiContext(const Model::GetDataServiceApiContextRequest &request)const;
			void getDataServiceApiContextAsync(const Model::GetDataServiceApiContextRequest& request, const GetDataServiceApiContextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataServiceApiContextOutcomeCallable getDataServiceApiContextCallable(const Model::GetDataServiceApiContextRequest& request) const;
			GetDataServiceConfigOutcome getDataServiceConfig(const Model::GetDataServiceConfigRequest &request)const;
			void getDataServiceConfigAsync(const Model::GetDataServiceConfigRequest& request, const GetDataServiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataServiceConfigOutcomeCallable getDataServiceConfigCallable(const Model::GetDataServiceConfigRequest& request) const;
			GetDataServiceConnectionOutcome getDataServiceConnection(const Model::GetDataServiceConnectionRequest &request)const;
			void getDataServiceConnectionAsync(const Model::GetDataServiceConnectionRequest& request, const GetDataServiceConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataServiceConnectionOutcomeCallable getDataServiceConnectionCallable(const Model::GetDataServiceConnectionRequest& request) const;
			GetDataServiceContextUpdateEventOutcome getDataServiceContextUpdateEvent(const Model::GetDataServiceContextUpdateEventRequest &request)const;
			void getDataServiceContextUpdateEventAsync(const Model::GetDataServiceContextUpdateEventRequest& request, const GetDataServiceContextUpdateEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataServiceContextUpdateEventOutcomeCallable getDataServiceContextUpdateEventCallable(const Model::GetDataServiceContextUpdateEventRequest& request) const;
			GetDataServiceFunctionOutcome getDataServiceFunction(const Model::GetDataServiceFunctionRequest &request)const;
			void getDataServiceFunctionAsync(const Model::GetDataServiceFunctionRequest& request, const GetDataServiceFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataServiceFunctionOutcomeCallable getDataServiceFunctionCallable(const Model::GetDataServiceFunctionRequest& request) const;
			GetSwitchValueOutcome getSwitchValue(const Model::GetSwitchValueRequest &request)const;
			void getSwitchValueAsync(const Model::GetSwitchValueRequest& request, const GetSwitchValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSwitchValueOutcomeCallable getSwitchValueCallable(const Model::GetSwitchValueRequest& request) const;
			GetTimeMachineTaskOutcome getTimeMachineTask(const Model::GetTimeMachineTaskRequest &request)const;
			void getTimeMachineTaskAsync(const Model::GetTimeMachineTaskRequest& request, const GetTimeMachineTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTimeMachineTaskOutcomeCallable getTimeMachineTaskCallable(const Model::GetTimeMachineTaskRequest& request) const;
			ListEmrHiveAuditLogsOutcome listEmrHiveAuditLogs(const Model::ListEmrHiveAuditLogsRequest &request)const;
			void listEmrHiveAuditLogsAsync(const Model::ListEmrHiveAuditLogsRequest& request, const ListEmrHiveAuditLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEmrHiveAuditLogsOutcomeCallable listEmrHiveAuditLogsCallable(const Model::ListEmrHiveAuditLogsRequest& request) const;
			ListEmrHiveDatabasesOutcome listEmrHiveDatabases(const Model::ListEmrHiveDatabasesRequest &request)const;
			void listEmrHiveDatabasesAsync(const Model::ListEmrHiveDatabasesRequest& request, const ListEmrHiveDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEmrHiveDatabasesOutcomeCallable listEmrHiveDatabasesCallable(const Model::ListEmrHiveDatabasesRequest& request) const;
			ListEmrHiveTablesOutcome listEmrHiveTables(const Model::ListEmrHiveTablesRequest &request)const;
			void listEmrHiveTablesAsync(const Model::ListEmrHiveTablesRequest& request, const ListEmrHiveTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEmrHiveTablesOutcomeCallable listEmrHiveTablesCallable(const Model::ListEmrHiveTablesRequest& request) const;
			ListGovernanceIssueDataServiceAPIsOutcome listGovernanceIssueDataServiceAPIs(const Model::ListGovernanceIssueDataServiceAPIsRequest &request)const;
			void listGovernanceIssueDataServiceAPIsAsync(const Model::ListGovernanceIssueDataServiceAPIsRequest& request, const ListGovernanceIssueDataServiceAPIsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGovernanceIssueDataServiceAPIsOutcomeCallable listGovernanceIssueDataServiceAPIsCallable(const Model::ListGovernanceIssueDataServiceAPIsRequest& request) const;
			ListGovernanceIssueTablesOutcome listGovernanceIssueTables(const Model::ListGovernanceIssueTablesRequest &request)const;
			void listGovernanceIssueTablesAsync(const Model::ListGovernanceIssueTablesRequest& request, const ListGovernanceIssueTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGovernanceIssueTablesOutcomeCallable listGovernanceIssueTablesCallable(const Model::ListGovernanceIssueTablesRequest& request) const;
			ListGovernanceIssueTasksOutcome listGovernanceIssueTasks(const Model::ListGovernanceIssueTasksRequest &request)const;
			void listGovernanceIssueTasksAsync(const Model::ListGovernanceIssueTasksRequest& request, const ListGovernanceIssueTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGovernanceIssueTasksOutcomeCallable listGovernanceIssueTasksCallable(const Model::ListGovernanceIssueTasksRequest& request) const;
			ListGovernanceRulesOutcome listGovernanceRules(const Model::ListGovernanceRulesRequest &request)const;
			void listGovernanceRulesAsync(const Model::ListGovernanceRulesRequest& request, const ListGovernanceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGovernanceRulesOutcomeCallable listGovernanceRulesCallable(const Model::ListGovernanceRulesRequest& request) const;
			ListHiveColumnLineagesOutcome listHiveColumnLineages(const Model::ListHiveColumnLineagesRequest &request)const;
			void listHiveColumnLineagesAsync(const Model::ListHiveColumnLineagesRequest& request, const ListHiveColumnLineagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListHiveColumnLineagesOutcomeCallable listHiveColumnLineagesCallable(const Model::ListHiveColumnLineagesRequest& request) const;
			ListHiveTableLineagesOutcome listHiveTableLineages(const Model::ListHiveTableLineagesRequest &request)const;
			void listHiveTableLineagesAsync(const Model::ListHiveTableLineagesRequest& request, const ListHiveTableLineagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListHiveTableLineagesOutcomeCallable listHiveTableLineagesCallable(const Model::ListHiveTableLineagesRequest& request) const;
			ListTablePartitionsOutcome listTablePartitions(const Model::ListTablePartitionsRequest &request)const;
			void listTablePartitionsAsync(const Model::ListTablePartitionsRequest& request, const ListTablePartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTablePartitionsOutcomeCallable listTablePartitionsCallable(const Model::ListTablePartitionsRequest& request) const;
			OpenDataWorksStandardServiceOutcome openDataWorksStandardService(const Model::OpenDataWorksStandardServiceRequest &request)const;
			void openDataWorksStandardServiceAsync(const Model::OpenDataWorksStandardServiceRequest& request, const OpenDataWorksStandardServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenDataWorksStandardServiceOutcomeCallable openDataWorksStandardServiceCallable(const Model::OpenDataWorksStandardServiceRequest& request) const;
			SearchManualDagNodeInstanceOutcome searchManualDagNodeInstance(const Model::SearchManualDagNodeInstanceRequest &request)const;
			void searchManualDagNodeInstanceAsync(const Model::SearchManualDagNodeInstanceRequest& request, const SearchManualDagNodeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchManualDagNodeInstanceOutcomeCallable searchManualDagNodeInstanceCallable(const Model::SearchManualDagNodeInstanceRequest& request) const;
			SendTaskMetaCallbackOutcome sendTaskMetaCallback(const Model::SendTaskMetaCallbackRequest &request)const;
			void sendTaskMetaCallbackAsync(const Model::SendTaskMetaCallbackRequest& request, const SendTaskMetaCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendTaskMetaCallbackOutcomeCallable sendTaskMetaCallbackCallable(const Model::SendTaskMetaCallbackRequest& request) const;
			SetSwitchValueOutcome setSwitchValue(const Model::SetSwitchValueRequest &request)const;
			void setSwitchValueAsync(const Model::SetSwitchValueRequest& request, const SetSwitchValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetSwitchValueOutcomeCallable setSwitchValueCallable(const Model::SetSwitchValueRequest& request) const;
			TriggerDataLoaderOutcome triggerDataLoader(const Model::TriggerDataLoaderRequest &request)const;
			void triggerDataLoaderAsync(const Model::TriggerDataLoaderRequest& request, const TriggerDataLoaderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TriggerDataLoaderOutcomeCallable triggerDataLoaderCallable(const Model::TriggerDataLoaderRequest& request) const;
			TriggerTimeMachineTaskOutcome triggerTimeMachineTask(const Model::TriggerTimeMachineTaskRequest &request)const;
			void triggerTimeMachineTaskAsync(const Model::TriggerTimeMachineTaskRequest& request, const TriggerTimeMachineTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TriggerTimeMachineTaskOutcomeCallable triggerTimeMachineTaskCallable(const Model::TriggerTimeMachineTaskRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_DATAWORKS_PUBLICCLIENT_H_
