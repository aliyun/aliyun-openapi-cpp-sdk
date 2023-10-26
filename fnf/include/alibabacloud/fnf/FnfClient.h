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

#ifndef ALIBABACLOUD_FNF_FNFCLIENT_H_
#define ALIBABACLOUD_FNF_FNFCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "FnfExport.h"
#include "model/CreateFlowRequest.h"
#include "model/CreateFlowResult.h"
#include "model/CreateScheduleRequest.h"
#include "model/CreateScheduleResult.h"
#include "model/DeleteFlowRequest.h"
#include "model/DeleteFlowResult.h"
#include "model/DeleteScheduleRequest.h"
#include "model/DeleteScheduleResult.h"
#include "model/DescribeExecutionRequest.h"
#include "model/DescribeExecutionResult.h"
#include "model/DescribeFlowRequest.h"
#include "model/DescribeFlowResult.h"
#include "model/DescribeScheduleRequest.h"
#include "model/DescribeScheduleResult.h"
#include "model/GetExecutionHistoryRequest.h"
#include "model/GetExecutionHistoryResult.h"
#include "model/ListExecutionsRequest.h"
#include "model/ListExecutionsResult.h"
#include "model/ListFlowsRequest.h"
#include "model/ListFlowsResult.h"
#include "model/ListSchedulesRequest.h"
#include "model/ListSchedulesResult.h"
#include "model/ReportTaskFailedRequest.h"
#include "model/ReportTaskFailedResult.h"
#include "model/ReportTaskSucceededRequest.h"
#include "model/ReportTaskSucceededResult.h"
#include "model/StartExecutionRequest.h"
#include "model/StartExecutionResult.h"
#include "model/StartSyncExecutionRequest.h"
#include "model/StartSyncExecutionResult.h"
#include "model/StopExecutionRequest.h"
#include "model/StopExecutionResult.h"
#include "model/UpdateFlowRequest.h"
#include "model/UpdateFlowResult.h"
#include "model/UpdateScheduleRequest.h"
#include "model/UpdateScheduleResult.h"


namespace AlibabaCloud
{
	namespace Fnf
	{
		class ALIBABACLOUD_FNF_EXPORT FnfClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateFlowResult> CreateFlowOutcome;
			typedef std::future<CreateFlowOutcome> CreateFlowOutcomeCallable;
			typedef std::function<void(const FnfClient*, const Model::CreateFlowRequest&, const CreateFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowAsyncHandler;
			typedef Outcome<Error, Model::CreateScheduleResult> CreateScheduleOutcome;
			typedef std::future<CreateScheduleOutcome> CreateScheduleOutcomeCallable;
			typedef std::function<void(const FnfClient*, const Model::CreateScheduleRequest&, const CreateScheduleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateScheduleAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowResult> DeleteFlowOutcome;
			typedef std::future<DeleteFlowOutcome> DeleteFlowOutcomeCallable;
			typedef std::function<void(const FnfClient*, const Model::DeleteFlowRequest&, const DeleteFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowAsyncHandler;
			typedef Outcome<Error, Model::DeleteScheduleResult> DeleteScheduleOutcome;
			typedef std::future<DeleteScheduleOutcome> DeleteScheduleOutcomeCallable;
			typedef std::function<void(const FnfClient*, const Model::DeleteScheduleRequest&, const DeleteScheduleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScheduleAsyncHandler;
			typedef Outcome<Error, Model::DescribeExecutionResult> DescribeExecutionOutcome;
			typedef std::future<DescribeExecutionOutcome> DescribeExecutionOutcomeCallable;
			typedef std::function<void(const FnfClient*, const Model::DescribeExecutionRequest&, const DescribeExecutionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExecutionAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowResult> DescribeFlowOutcome;
			typedef std::future<DescribeFlowOutcome> DescribeFlowOutcomeCallable;
			typedef std::function<void(const FnfClient*, const Model::DescribeFlowRequest&, const DescribeFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowAsyncHandler;
			typedef Outcome<Error, Model::DescribeScheduleResult> DescribeScheduleOutcome;
			typedef std::future<DescribeScheduleOutcome> DescribeScheduleOutcomeCallable;
			typedef std::function<void(const FnfClient*, const Model::DescribeScheduleRequest&, const DescribeScheduleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeScheduleAsyncHandler;
			typedef Outcome<Error, Model::GetExecutionHistoryResult> GetExecutionHistoryOutcome;
			typedef std::future<GetExecutionHistoryOutcome> GetExecutionHistoryOutcomeCallable;
			typedef std::function<void(const FnfClient*, const Model::GetExecutionHistoryRequest&, const GetExecutionHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetExecutionHistoryAsyncHandler;
			typedef Outcome<Error, Model::ListExecutionsResult> ListExecutionsOutcome;
			typedef std::future<ListExecutionsOutcome> ListExecutionsOutcomeCallable;
			typedef std::function<void(const FnfClient*, const Model::ListExecutionsRequest&, const ListExecutionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListExecutionsAsyncHandler;
			typedef Outcome<Error, Model::ListFlowsResult> ListFlowsOutcome;
			typedef std::future<ListFlowsOutcome> ListFlowsOutcomeCallable;
			typedef std::function<void(const FnfClient*, const Model::ListFlowsRequest&, const ListFlowsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowsAsyncHandler;
			typedef Outcome<Error, Model::ListSchedulesResult> ListSchedulesOutcome;
			typedef std::future<ListSchedulesOutcome> ListSchedulesOutcomeCallable;
			typedef std::function<void(const FnfClient*, const Model::ListSchedulesRequest&, const ListSchedulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSchedulesAsyncHandler;
			typedef Outcome<Error, Model::ReportTaskFailedResult> ReportTaskFailedOutcome;
			typedef std::future<ReportTaskFailedOutcome> ReportTaskFailedOutcomeCallable;
			typedef std::function<void(const FnfClient*, const Model::ReportTaskFailedRequest&, const ReportTaskFailedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportTaskFailedAsyncHandler;
			typedef Outcome<Error, Model::ReportTaskSucceededResult> ReportTaskSucceededOutcome;
			typedef std::future<ReportTaskSucceededOutcome> ReportTaskSucceededOutcomeCallable;
			typedef std::function<void(const FnfClient*, const Model::ReportTaskSucceededRequest&, const ReportTaskSucceededOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportTaskSucceededAsyncHandler;
			typedef Outcome<Error, Model::StartExecutionResult> StartExecutionOutcome;
			typedef std::future<StartExecutionOutcome> StartExecutionOutcomeCallable;
			typedef std::function<void(const FnfClient*, const Model::StartExecutionRequest&, const StartExecutionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartExecutionAsyncHandler;
			typedef Outcome<Error, Model::StartSyncExecutionResult> StartSyncExecutionOutcome;
			typedef std::future<StartSyncExecutionOutcome> StartSyncExecutionOutcomeCallable;
			typedef std::function<void(const FnfClient*, const Model::StartSyncExecutionRequest&, const StartSyncExecutionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartSyncExecutionAsyncHandler;
			typedef Outcome<Error, Model::StopExecutionResult> StopExecutionOutcome;
			typedef std::future<StopExecutionOutcome> StopExecutionOutcomeCallable;
			typedef std::function<void(const FnfClient*, const Model::StopExecutionRequest&, const StopExecutionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopExecutionAsyncHandler;
			typedef Outcome<Error, Model::UpdateFlowResult> UpdateFlowOutcome;
			typedef std::future<UpdateFlowOutcome> UpdateFlowOutcomeCallable;
			typedef std::function<void(const FnfClient*, const Model::UpdateFlowRequest&, const UpdateFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFlowAsyncHandler;
			typedef Outcome<Error, Model::UpdateScheduleResult> UpdateScheduleOutcome;
			typedef std::future<UpdateScheduleOutcome> UpdateScheduleOutcomeCallable;
			typedef std::function<void(const FnfClient*, const Model::UpdateScheduleRequest&, const UpdateScheduleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateScheduleAsyncHandler;

			FnfClient(const Credentials &credentials, const ClientConfiguration &configuration);
			FnfClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			FnfClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~FnfClient();
			CreateFlowOutcome createFlow(const Model::CreateFlowRequest &request)const;
			void createFlowAsync(const Model::CreateFlowRequest& request, const CreateFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowOutcomeCallable createFlowCallable(const Model::CreateFlowRequest& request) const;
			CreateScheduleOutcome createSchedule(const Model::CreateScheduleRequest &request)const;
			void createScheduleAsync(const Model::CreateScheduleRequest& request, const CreateScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateScheduleOutcomeCallable createScheduleCallable(const Model::CreateScheduleRequest& request) const;
			DeleteFlowOutcome deleteFlow(const Model::DeleteFlowRequest &request)const;
			void deleteFlowAsync(const Model::DeleteFlowRequest& request, const DeleteFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowOutcomeCallable deleteFlowCallable(const Model::DeleteFlowRequest& request) const;
			DeleteScheduleOutcome deleteSchedule(const Model::DeleteScheduleRequest &request)const;
			void deleteScheduleAsync(const Model::DeleteScheduleRequest& request, const DeleteScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteScheduleOutcomeCallable deleteScheduleCallable(const Model::DeleteScheduleRequest& request) const;
			DescribeExecutionOutcome describeExecution(const Model::DescribeExecutionRequest &request)const;
			void describeExecutionAsync(const Model::DescribeExecutionRequest& request, const DescribeExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExecutionOutcomeCallable describeExecutionCallable(const Model::DescribeExecutionRequest& request) const;
			DescribeFlowOutcome describeFlow(const Model::DescribeFlowRequest &request)const;
			void describeFlowAsync(const Model::DescribeFlowRequest& request, const DescribeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowOutcomeCallable describeFlowCallable(const Model::DescribeFlowRequest& request) const;
			DescribeScheduleOutcome describeSchedule(const Model::DescribeScheduleRequest &request)const;
			void describeScheduleAsync(const Model::DescribeScheduleRequest& request, const DescribeScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeScheduleOutcomeCallable describeScheduleCallable(const Model::DescribeScheduleRequest& request) const;
			GetExecutionHistoryOutcome getExecutionHistory(const Model::GetExecutionHistoryRequest &request)const;
			void getExecutionHistoryAsync(const Model::GetExecutionHistoryRequest& request, const GetExecutionHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetExecutionHistoryOutcomeCallable getExecutionHistoryCallable(const Model::GetExecutionHistoryRequest& request) const;
			ListExecutionsOutcome listExecutions(const Model::ListExecutionsRequest &request)const;
			void listExecutionsAsync(const Model::ListExecutionsRequest& request, const ListExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListExecutionsOutcomeCallable listExecutionsCallable(const Model::ListExecutionsRequest& request) const;
			ListFlowsOutcome listFlows(const Model::ListFlowsRequest &request)const;
			void listFlowsAsync(const Model::ListFlowsRequest& request, const ListFlowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowsOutcomeCallable listFlowsCallable(const Model::ListFlowsRequest& request) const;
			ListSchedulesOutcome listSchedules(const Model::ListSchedulesRequest &request)const;
			void listSchedulesAsync(const Model::ListSchedulesRequest& request, const ListSchedulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSchedulesOutcomeCallable listSchedulesCallable(const Model::ListSchedulesRequest& request) const;
			ReportTaskFailedOutcome reportTaskFailed(const Model::ReportTaskFailedRequest &request)const;
			void reportTaskFailedAsync(const Model::ReportTaskFailedRequest& request, const ReportTaskFailedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportTaskFailedOutcomeCallable reportTaskFailedCallable(const Model::ReportTaskFailedRequest& request) const;
			ReportTaskSucceededOutcome reportTaskSucceeded(const Model::ReportTaskSucceededRequest &request)const;
			void reportTaskSucceededAsync(const Model::ReportTaskSucceededRequest& request, const ReportTaskSucceededAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportTaskSucceededOutcomeCallable reportTaskSucceededCallable(const Model::ReportTaskSucceededRequest& request) const;
			StartExecutionOutcome startExecution(const Model::StartExecutionRequest &request)const;
			void startExecutionAsync(const Model::StartExecutionRequest& request, const StartExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartExecutionOutcomeCallable startExecutionCallable(const Model::StartExecutionRequest& request) const;
			StartSyncExecutionOutcome startSyncExecution(const Model::StartSyncExecutionRequest &request)const;
			void startSyncExecutionAsync(const Model::StartSyncExecutionRequest& request, const StartSyncExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartSyncExecutionOutcomeCallable startSyncExecutionCallable(const Model::StartSyncExecutionRequest& request) const;
			StopExecutionOutcome stopExecution(const Model::StopExecutionRequest &request)const;
			void stopExecutionAsync(const Model::StopExecutionRequest& request, const StopExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopExecutionOutcomeCallable stopExecutionCallable(const Model::StopExecutionRequest& request) const;
			UpdateFlowOutcome updateFlow(const Model::UpdateFlowRequest &request)const;
			void updateFlowAsync(const Model::UpdateFlowRequest& request, const UpdateFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFlowOutcomeCallable updateFlowCallable(const Model::UpdateFlowRequest& request) const;
			UpdateScheduleOutcome updateSchedule(const Model::UpdateScheduleRequest &request)const;
			void updateScheduleAsync(const Model::UpdateScheduleRequest& request, const UpdateScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateScheduleOutcomeCallable updateScheduleCallable(const Model::UpdateScheduleRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_FNF_FNFCLIENT_H_
