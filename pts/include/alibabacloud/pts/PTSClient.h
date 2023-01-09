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

#ifndef ALIBABACLOUD_PTS_PTSCLIENT_H_
#define ALIBABACLOUD_PTS_PTSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "PTSExport.h"
#include "model/AdjustJMeterSceneSpeedRequest.h"
#include "model/AdjustJMeterSceneSpeedResult.h"
#include "model/CreatePtsSceneRequest.h"
#include "model/CreatePtsSceneResult.h"
#include "model/CreatePtsSceneBaseLineFromReportRequest.h"
#include "model/CreatePtsSceneBaseLineFromReportResult.h"
#include "model/DeletePtsSceneRequest.h"
#include "model/DeletePtsSceneResult.h"
#include "model/DeletePtsSceneBaseLineRequest.h"
#include "model/DeletePtsSceneBaseLineResult.h"
#include "model/DeletePtsScenesRequest.h"
#include "model/DeletePtsScenesResult.h"
#include "model/GetAllRegionsRequest.h"
#include "model/GetAllRegionsResult.h"
#include "model/GetJMeterLogsRequest.h"
#include "model/GetJMeterLogsResult.h"
#include "model/GetJMeterSampleMetricsRequest.h"
#include "model/GetJMeterSampleMetricsResult.h"
#include "model/GetJMeterSamplingLogsRequest.h"
#include "model/GetJMeterSamplingLogsResult.h"
#include "model/GetJMeterSceneRunningDataRequest.h"
#include "model/GetJMeterSceneRunningDataResult.h"
#include "model/GetOpenJMeterSceneRequest.h"
#include "model/GetOpenJMeterSceneResult.h"
#include "model/GetPtsReportDetailsRequest.h"
#include "model/GetPtsReportDetailsResult.h"
#include "model/GetPtsReportsBySceneIdRequest.h"
#include "model/GetPtsReportsBySceneIdResult.h"
#include "model/GetPtsSceneRequest.h"
#include "model/GetPtsSceneResult.h"
#include "model/GetPtsSceneBaseLineRequest.h"
#include "model/GetPtsSceneBaseLineResult.h"
#include "model/GetPtsSceneRunningDataRequest.h"
#include "model/GetPtsSceneRunningDataResult.h"
#include "model/GetPtsSceneRunningStatusRequest.h"
#include "model/GetPtsSceneRunningStatusResult.h"
#include "model/GetUserVpcSecurityGroupRequest.h"
#include "model/GetUserVpcSecurityGroupResult.h"
#include "model/GetUserVpcVSwitchRequest.h"
#include "model/GetUserVpcVSwitchResult.h"
#include "model/GetUserVpcsRequest.h"
#include "model/GetUserVpcsResult.h"
#include "model/ListEnvsRequest.h"
#include "model/ListEnvsResult.h"
#include "model/ListJMeterReportsRequest.h"
#include "model/ListJMeterReportsResult.h"
#include "model/ListOpenJMeterScenesRequest.h"
#include "model/ListOpenJMeterScenesResult.h"
#include "model/ListPtsSceneRequest.h"
#include "model/ListPtsSceneResult.h"
#include "model/ModifyPtsSceneRequest.h"
#include "model/ModifyPtsSceneResult.h"
#include "model/RemoveEnvRequest.h"
#include "model/RemoveEnvResult.h"
#include "model/RemoveOpenJMeterSceneRequest.h"
#include "model/RemoveOpenJMeterSceneResult.h"
#include "model/SaveEnvRequest.h"
#include "model/SaveEnvResult.h"
#include "model/SaveOpenJMeterSceneRequest.h"
#include "model/SaveOpenJMeterSceneResult.h"
#include "model/SavePtsSceneRequest.h"
#include "model/SavePtsSceneResult.h"
#include "model/StartDebugPtsSceneRequest.h"
#include "model/StartDebugPtsSceneResult.h"
#include "model/StartDebuggingJMeterSceneRequest.h"
#include "model/StartDebuggingJMeterSceneResult.h"
#include "model/StartPtsSceneRequest.h"
#include "model/StartPtsSceneResult.h"
#include "model/StartTestingJMeterSceneRequest.h"
#include "model/StartTestingJMeterSceneResult.h"
#include "model/StopDebugPtsSceneRequest.h"
#include "model/StopDebugPtsSceneResult.h"
#include "model/StopDebuggingJMeterSceneRequest.h"
#include "model/StopDebuggingJMeterSceneResult.h"
#include "model/StopPtsSceneRequest.h"
#include "model/StopPtsSceneResult.h"
#include "model/StopTestingJMeterSceneRequest.h"
#include "model/StopTestingJMeterSceneResult.h"
#include "model/UpdatePtsSceneBaseLineRequest.h"
#include "model/UpdatePtsSceneBaseLineResult.h"


namespace AlibabaCloud
{
	namespace PTS
	{
		class ALIBABACLOUD_PTS_EXPORT PTSClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AdjustJMeterSceneSpeedResult> AdjustJMeterSceneSpeedOutcome;
			typedef std::future<AdjustJMeterSceneSpeedOutcome> AdjustJMeterSceneSpeedOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::AdjustJMeterSceneSpeedRequest&, const AdjustJMeterSceneSpeedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AdjustJMeterSceneSpeedAsyncHandler;
			typedef Outcome<Error, Model::CreatePtsSceneResult> CreatePtsSceneOutcome;
			typedef std::future<CreatePtsSceneOutcome> CreatePtsSceneOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::CreatePtsSceneRequest&, const CreatePtsSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePtsSceneAsyncHandler;
			typedef Outcome<Error, Model::CreatePtsSceneBaseLineFromReportResult> CreatePtsSceneBaseLineFromReportOutcome;
			typedef std::future<CreatePtsSceneBaseLineFromReportOutcome> CreatePtsSceneBaseLineFromReportOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::CreatePtsSceneBaseLineFromReportRequest&, const CreatePtsSceneBaseLineFromReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePtsSceneBaseLineFromReportAsyncHandler;
			typedef Outcome<Error, Model::DeletePtsSceneResult> DeletePtsSceneOutcome;
			typedef std::future<DeletePtsSceneOutcome> DeletePtsSceneOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::DeletePtsSceneRequest&, const DeletePtsSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePtsSceneAsyncHandler;
			typedef Outcome<Error, Model::DeletePtsSceneBaseLineResult> DeletePtsSceneBaseLineOutcome;
			typedef std::future<DeletePtsSceneBaseLineOutcome> DeletePtsSceneBaseLineOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::DeletePtsSceneBaseLineRequest&, const DeletePtsSceneBaseLineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePtsSceneBaseLineAsyncHandler;
			typedef Outcome<Error, Model::DeletePtsScenesResult> DeletePtsScenesOutcome;
			typedef std::future<DeletePtsScenesOutcome> DeletePtsScenesOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::DeletePtsScenesRequest&, const DeletePtsScenesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePtsScenesAsyncHandler;
			typedef Outcome<Error, Model::GetAllRegionsResult> GetAllRegionsOutcome;
			typedef std::future<GetAllRegionsOutcome> GetAllRegionsOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::GetAllRegionsRequest&, const GetAllRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAllRegionsAsyncHandler;
			typedef Outcome<Error, Model::GetJMeterLogsResult> GetJMeterLogsOutcome;
			typedef std::future<GetJMeterLogsOutcome> GetJMeterLogsOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::GetJMeterLogsRequest&, const GetJMeterLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJMeterLogsAsyncHandler;
			typedef Outcome<Error, Model::GetJMeterSampleMetricsResult> GetJMeterSampleMetricsOutcome;
			typedef std::future<GetJMeterSampleMetricsOutcome> GetJMeterSampleMetricsOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::GetJMeterSampleMetricsRequest&, const GetJMeterSampleMetricsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJMeterSampleMetricsAsyncHandler;
			typedef Outcome<Error, Model::GetJMeterSamplingLogsResult> GetJMeterSamplingLogsOutcome;
			typedef std::future<GetJMeterSamplingLogsOutcome> GetJMeterSamplingLogsOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::GetJMeterSamplingLogsRequest&, const GetJMeterSamplingLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJMeterSamplingLogsAsyncHandler;
			typedef Outcome<Error, Model::GetJMeterSceneRunningDataResult> GetJMeterSceneRunningDataOutcome;
			typedef std::future<GetJMeterSceneRunningDataOutcome> GetJMeterSceneRunningDataOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::GetJMeterSceneRunningDataRequest&, const GetJMeterSceneRunningDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJMeterSceneRunningDataAsyncHandler;
			typedef Outcome<Error, Model::GetOpenJMeterSceneResult> GetOpenJMeterSceneOutcome;
			typedef std::future<GetOpenJMeterSceneOutcome> GetOpenJMeterSceneOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::GetOpenJMeterSceneRequest&, const GetOpenJMeterSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOpenJMeterSceneAsyncHandler;
			typedef Outcome<Error, Model::GetPtsReportDetailsResult> GetPtsReportDetailsOutcome;
			typedef std::future<GetPtsReportDetailsOutcome> GetPtsReportDetailsOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::GetPtsReportDetailsRequest&, const GetPtsReportDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPtsReportDetailsAsyncHandler;
			typedef Outcome<Error, Model::GetPtsReportsBySceneIdResult> GetPtsReportsBySceneIdOutcome;
			typedef std::future<GetPtsReportsBySceneIdOutcome> GetPtsReportsBySceneIdOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::GetPtsReportsBySceneIdRequest&, const GetPtsReportsBySceneIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPtsReportsBySceneIdAsyncHandler;
			typedef Outcome<Error, Model::GetPtsSceneResult> GetPtsSceneOutcome;
			typedef std::future<GetPtsSceneOutcome> GetPtsSceneOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::GetPtsSceneRequest&, const GetPtsSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPtsSceneAsyncHandler;
			typedef Outcome<Error, Model::GetPtsSceneBaseLineResult> GetPtsSceneBaseLineOutcome;
			typedef std::future<GetPtsSceneBaseLineOutcome> GetPtsSceneBaseLineOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::GetPtsSceneBaseLineRequest&, const GetPtsSceneBaseLineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPtsSceneBaseLineAsyncHandler;
			typedef Outcome<Error, Model::GetPtsSceneRunningDataResult> GetPtsSceneRunningDataOutcome;
			typedef std::future<GetPtsSceneRunningDataOutcome> GetPtsSceneRunningDataOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::GetPtsSceneRunningDataRequest&, const GetPtsSceneRunningDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPtsSceneRunningDataAsyncHandler;
			typedef Outcome<Error, Model::GetPtsSceneRunningStatusResult> GetPtsSceneRunningStatusOutcome;
			typedef std::future<GetPtsSceneRunningStatusOutcome> GetPtsSceneRunningStatusOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::GetPtsSceneRunningStatusRequest&, const GetPtsSceneRunningStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPtsSceneRunningStatusAsyncHandler;
			typedef Outcome<Error, Model::GetUserVpcSecurityGroupResult> GetUserVpcSecurityGroupOutcome;
			typedef std::future<GetUserVpcSecurityGroupOutcome> GetUserVpcSecurityGroupOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::GetUserVpcSecurityGroupRequest&, const GetUserVpcSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserVpcSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::GetUserVpcVSwitchResult> GetUserVpcVSwitchOutcome;
			typedef std::future<GetUserVpcVSwitchOutcome> GetUserVpcVSwitchOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::GetUserVpcVSwitchRequest&, const GetUserVpcVSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserVpcVSwitchAsyncHandler;
			typedef Outcome<Error, Model::GetUserVpcsResult> GetUserVpcsOutcome;
			typedef std::future<GetUserVpcsOutcome> GetUserVpcsOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::GetUserVpcsRequest&, const GetUserVpcsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserVpcsAsyncHandler;
			typedef Outcome<Error, Model::ListEnvsResult> ListEnvsOutcome;
			typedef std::future<ListEnvsOutcome> ListEnvsOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::ListEnvsRequest&, const ListEnvsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEnvsAsyncHandler;
			typedef Outcome<Error, Model::ListJMeterReportsResult> ListJMeterReportsOutcome;
			typedef std::future<ListJMeterReportsOutcome> ListJMeterReportsOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::ListJMeterReportsRequest&, const ListJMeterReportsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJMeterReportsAsyncHandler;
			typedef Outcome<Error, Model::ListOpenJMeterScenesResult> ListOpenJMeterScenesOutcome;
			typedef std::future<ListOpenJMeterScenesOutcome> ListOpenJMeterScenesOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::ListOpenJMeterScenesRequest&, const ListOpenJMeterScenesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOpenJMeterScenesAsyncHandler;
			typedef Outcome<Error, Model::ListPtsSceneResult> ListPtsSceneOutcome;
			typedef std::future<ListPtsSceneOutcome> ListPtsSceneOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::ListPtsSceneRequest&, const ListPtsSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPtsSceneAsyncHandler;
			typedef Outcome<Error, Model::ModifyPtsSceneResult> ModifyPtsSceneOutcome;
			typedef std::future<ModifyPtsSceneOutcome> ModifyPtsSceneOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::ModifyPtsSceneRequest&, const ModifyPtsSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPtsSceneAsyncHandler;
			typedef Outcome<Error, Model::RemoveEnvResult> RemoveEnvOutcome;
			typedef std::future<RemoveEnvOutcome> RemoveEnvOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::RemoveEnvRequest&, const RemoveEnvOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveEnvAsyncHandler;
			typedef Outcome<Error, Model::RemoveOpenJMeterSceneResult> RemoveOpenJMeterSceneOutcome;
			typedef std::future<RemoveOpenJMeterSceneOutcome> RemoveOpenJMeterSceneOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::RemoveOpenJMeterSceneRequest&, const RemoveOpenJMeterSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveOpenJMeterSceneAsyncHandler;
			typedef Outcome<Error, Model::SaveEnvResult> SaveEnvOutcome;
			typedef std::future<SaveEnvOutcome> SaveEnvOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::SaveEnvRequest&, const SaveEnvOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveEnvAsyncHandler;
			typedef Outcome<Error, Model::SaveOpenJMeterSceneResult> SaveOpenJMeterSceneOutcome;
			typedef std::future<SaveOpenJMeterSceneOutcome> SaveOpenJMeterSceneOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::SaveOpenJMeterSceneRequest&, const SaveOpenJMeterSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveOpenJMeterSceneAsyncHandler;
			typedef Outcome<Error, Model::SavePtsSceneResult> SavePtsSceneOutcome;
			typedef std::future<SavePtsSceneOutcome> SavePtsSceneOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::SavePtsSceneRequest&, const SavePtsSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SavePtsSceneAsyncHandler;
			typedef Outcome<Error, Model::StartDebugPtsSceneResult> StartDebugPtsSceneOutcome;
			typedef std::future<StartDebugPtsSceneOutcome> StartDebugPtsSceneOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::StartDebugPtsSceneRequest&, const StartDebugPtsSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartDebugPtsSceneAsyncHandler;
			typedef Outcome<Error, Model::StartDebuggingJMeterSceneResult> StartDebuggingJMeterSceneOutcome;
			typedef std::future<StartDebuggingJMeterSceneOutcome> StartDebuggingJMeterSceneOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::StartDebuggingJMeterSceneRequest&, const StartDebuggingJMeterSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartDebuggingJMeterSceneAsyncHandler;
			typedef Outcome<Error, Model::StartPtsSceneResult> StartPtsSceneOutcome;
			typedef std::future<StartPtsSceneOutcome> StartPtsSceneOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::StartPtsSceneRequest&, const StartPtsSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartPtsSceneAsyncHandler;
			typedef Outcome<Error, Model::StartTestingJMeterSceneResult> StartTestingJMeterSceneOutcome;
			typedef std::future<StartTestingJMeterSceneOutcome> StartTestingJMeterSceneOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::StartTestingJMeterSceneRequest&, const StartTestingJMeterSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartTestingJMeterSceneAsyncHandler;
			typedef Outcome<Error, Model::StopDebugPtsSceneResult> StopDebugPtsSceneOutcome;
			typedef std::future<StopDebugPtsSceneOutcome> StopDebugPtsSceneOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::StopDebugPtsSceneRequest&, const StopDebugPtsSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopDebugPtsSceneAsyncHandler;
			typedef Outcome<Error, Model::StopDebuggingJMeterSceneResult> StopDebuggingJMeterSceneOutcome;
			typedef std::future<StopDebuggingJMeterSceneOutcome> StopDebuggingJMeterSceneOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::StopDebuggingJMeterSceneRequest&, const StopDebuggingJMeterSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopDebuggingJMeterSceneAsyncHandler;
			typedef Outcome<Error, Model::StopPtsSceneResult> StopPtsSceneOutcome;
			typedef std::future<StopPtsSceneOutcome> StopPtsSceneOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::StopPtsSceneRequest&, const StopPtsSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopPtsSceneAsyncHandler;
			typedef Outcome<Error, Model::StopTestingJMeterSceneResult> StopTestingJMeterSceneOutcome;
			typedef std::future<StopTestingJMeterSceneOutcome> StopTestingJMeterSceneOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::StopTestingJMeterSceneRequest&, const StopTestingJMeterSceneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopTestingJMeterSceneAsyncHandler;
			typedef Outcome<Error, Model::UpdatePtsSceneBaseLineResult> UpdatePtsSceneBaseLineOutcome;
			typedef std::future<UpdatePtsSceneBaseLineOutcome> UpdatePtsSceneBaseLineOutcomeCallable;
			typedef std::function<void(const PTSClient*, const Model::UpdatePtsSceneBaseLineRequest&, const UpdatePtsSceneBaseLineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePtsSceneBaseLineAsyncHandler;

			PTSClient(const Credentials &credentials, const ClientConfiguration &configuration);
			PTSClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			PTSClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~PTSClient();
			AdjustJMeterSceneSpeedOutcome adjustJMeterSceneSpeed(const Model::AdjustJMeterSceneSpeedRequest &request)const;
			void adjustJMeterSceneSpeedAsync(const Model::AdjustJMeterSceneSpeedRequest& request, const AdjustJMeterSceneSpeedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AdjustJMeterSceneSpeedOutcomeCallable adjustJMeterSceneSpeedCallable(const Model::AdjustJMeterSceneSpeedRequest& request) const;
			CreatePtsSceneOutcome createPtsScene(const Model::CreatePtsSceneRequest &request)const;
			void createPtsSceneAsync(const Model::CreatePtsSceneRequest& request, const CreatePtsSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePtsSceneOutcomeCallable createPtsSceneCallable(const Model::CreatePtsSceneRequest& request) const;
			CreatePtsSceneBaseLineFromReportOutcome createPtsSceneBaseLineFromReport(const Model::CreatePtsSceneBaseLineFromReportRequest &request)const;
			void createPtsSceneBaseLineFromReportAsync(const Model::CreatePtsSceneBaseLineFromReportRequest& request, const CreatePtsSceneBaseLineFromReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePtsSceneBaseLineFromReportOutcomeCallable createPtsSceneBaseLineFromReportCallable(const Model::CreatePtsSceneBaseLineFromReportRequest& request) const;
			DeletePtsSceneOutcome deletePtsScene(const Model::DeletePtsSceneRequest &request)const;
			void deletePtsSceneAsync(const Model::DeletePtsSceneRequest& request, const DeletePtsSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePtsSceneOutcomeCallable deletePtsSceneCallable(const Model::DeletePtsSceneRequest& request) const;
			DeletePtsSceneBaseLineOutcome deletePtsSceneBaseLine(const Model::DeletePtsSceneBaseLineRequest &request)const;
			void deletePtsSceneBaseLineAsync(const Model::DeletePtsSceneBaseLineRequest& request, const DeletePtsSceneBaseLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePtsSceneBaseLineOutcomeCallable deletePtsSceneBaseLineCallable(const Model::DeletePtsSceneBaseLineRequest& request) const;
			DeletePtsScenesOutcome deletePtsScenes(const Model::DeletePtsScenesRequest &request)const;
			void deletePtsScenesAsync(const Model::DeletePtsScenesRequest& request, const DeletePtsScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePtsScenesOutcomeCallable deletePtsScenesCallable(const Model::DeletePtsScenesRequest& request) const;
			GetAllRegionsOutcome getAllRegions(const Model::GetAllRegionsRequest &request)const;
			void getAllRegionsAsync(const Model::GetAllRegionsRequest& request, const GetAllRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAllRegionsOutcomeCallable getAllRegionsCallable(const Model::GetAllRegionsRequest& request) const;
			GetJMeterLogsOutcome getJMeterLogs(const Model::GetJMeterLogsRequest &request)const;
			void getJMeterLogsAsync(const Model::GetJMeterLogsRequest& request, const GetJMeterLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJMeterLogsOutcomeCallable getJMeterLogsCallable(const Model::GetJMeterLogsRequest& request) const;
			GetJMeterSampleMetricsOutcome getJMeterSampleMetrics(const Model::GetJMeterSampleMetricsRequest &request)const;
			void getJMeterSampleMetricsAsync(const Model::GetJMeterSampleMetricsRequest& request, const GetJMeterSampleMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJMeterSampleMetricsOutcomeCallable getJMeterSampleMetricsCallable(const Model::GetJMeterSampleMetricsRequest& request) const;
			GetJMeterSamplingLogsOutcome getJMeterSamplingLogs(const Model::GetJMeterSamplingLogsRequest &request)const;
			void getJMeterSamplingLogsAsync(const Model::GetJMeterSamplingLogsRequest& request, const GetJMeterSamplingLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJMeterSamplingLogsOutcomeCallable getJMeterSamplingLogsCallable(const Model::GetJMeterSamplingLogsRequest& request) const;
			GetJMeterSceneRunningDataOutcome getJMeterSceneRunningData(const Model::GetJMeterSceneRunningDataRequest &request)const;
			void getJMeterSceneRunningDataAsync(const Model::GetJMeterSceneRunningDataRequest& request, const GetJMeterSceneRunningDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJMeterSceneRunningDataOutcomeCallable getJMeterSceneRunningDataCallable(const Model::GetJMeterSceneRunningDataRequest& request) const;
			GetOpenJMeterSceneOutcome getOpenJMeterScene(const Model::GetOpenJMeterSceneRequest &request)const;
			void getOpenJMeterSceneAsync(const Model::GetOpenJMeterSceneRequest& request, const GetOpenJMeterSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOpenJMeterSceneOutcomeCallable getOpenJMeterSceneCallable(const Model::GetOpenJMeterSceneRequest& request) const;
			GetPtsReportDetailsOutcome getPtsReportDetails(const Model::GetPtsReportDetailsRequest &request)const;
			void getPtsReportDetailsAsync(const Model::GetPtsReportDetailsRequest& request, const GetPtsReportDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPtsReportDetailsOutcomeCallable getPtsReportDetailsCallable(const Model::GetPtsReportDetailsRequest& request) const;
			GetPtsReportsBySceneIdOutcome getPtsReportsBySceneId(const Model::GetPtsReportsBySceneIdRequest &request)const;
			void getPtsReportsBySceneIdAsync(const Model::GetPtsReportsBySceneIdRequest& request, const GetPtsReportsBySceneIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPtsReportsBySceneIdOutcomeCallable getPtsReportsBySceneIdCallable(const Model::GetPtsReportsBySceneIdRequest& request) const;
			GetPtsSceneOutcome getPtsScene(const Model::GetPtsSceneRequest &request)const;
			void getPtsSceneAsync(const Model::GetPtsSceneRequest& request, const GetPtsSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPtsSceneOutcomeCallable getPtsSceneCallable(const Model::GetPtsSceneRequest& request) const;
			GetPtsSceneBaseLineOutcome getPtsSceneBaseLine(const Model::GetPtsSceneBaseLineRequest &request)const;
			void getPtsSceneBaseLineAsync(const Model::GetPtsSceneBaseLineRequest& request, const GetPtsSceneBaseLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPtsSceneBaseLineOutcomeCallable getPtsSceneBaseLineCallable(const Model::GetPtsSceneBaseLineRequest& request) const;
			GetPtsSceneRunningDataOutcome getPtsSceneRunningData(const Model::GetPtsSceneRunningDataRequest &request)const;
			void getPtsSceneRunningDataAsync(const Model::GetPtsSceneRunningDataRequest& request, const GetPtsSceneRunningDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPtsSceneRunningDataOutcomeCallable getPtsSceneRunningDataCallable(const Model::GetPtsSceneRunningDataRequest& request) const;
			GetPtsSceneRunningStatusOutcome getPtsSceneRunningStatus(const Model::GetPtsSceneRunningStatusRequest &request)const;
			void getPtsSceneRunningStatusAsync(const Model::GetPtsSceneRunningStatusRequest& request, const GetPtsSceneRunningStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPtsSceneRunningStatusOutcomeCallable getPtsSceneRunningStatusCallable(const Model::GetPtsSceneRunningStatusRequest& request) const;
			GetUserVpcSecurityGroupOutcome getUserVpcSecurityGroup(const Model::GetUserVpcSecurityGroupRequest &request)const;
			void getUserVpcSecurityGroupAsync(const Model::GetUserVpcSecurityGroupRequest& request, const GetUserVpcSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserVpcSecurityGroupOutcomeCallable getUserVpcSecurityGroupCallable(const Model::GetUserVpcSecurityGroupRequest& request) const;
			GetUserVpcVSwitchOutcome getUserVpcVSwitch(const Model::GetUserVpcVSwitchRequest &request)const;
			void getUserVpcVSwitchAsync(const Model::GetUserVpcVSwitchRequest& request, const GetUserVpcVSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserVpcVSwitchOutcomeCallable getUserVpcVSwitchCallable(const Model::GetUserVpcVSwitchRequest& request) const;
			GetUserVpcsOutcome getUserVpcs(const Model::GetUserVpcsRequest &request)const;
			void getUserVpcsAsync(const Model::GetUserVpcsRequest& request, const GetUserVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserVpcsOutcomeCallable getUserVpcsCallable(const Model::GetUserVpcsRequest& request) const;
			ListEnvsOutcome listEnvs(const Model::ListEnvsRequest &request)const;
			void listEnvsAsync(const Model::ListEnvsRequest& request, const ListEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEnvsOutcomeCallable listEnvsCallable(const Model::ListEnvsRequest& request) const;
			ListJMeterReportsOutcome listJMeterReports(const Model::ListJMeterReportsRequest &request)const;
			void listJMeterReportsAsync(const Model::ListJMeterReportsRequest& request, const ListJMeterReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJMeterReportsOutcomeCallable listJMeterReportsCallable(const Model::ListJMeterReportsRequest& request) const;
			ListOpenJMeterScenesOutcome listOpenJMeterScenes(const Model::ListOpenJMeterScenesRequest &request)const;
			void listOpenJMeterScenesAsync(const Model::ListOpenJMeterScenesRequest& request, const ListOpenJMeterScenesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOpenJMeterScenesOutcomeCallable listOpenJMeterScenesCallable(const Model::ListOpenJMeterScenesRequest& request) const;
			ListPtsSceneOutcome listPtsScene(const Model::ListPtsSceneRequest &request)const;
			void listPtsSceneAsync(const Model::ListPtsSceneRequest& request, const ListPtsSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPtsSceneOutcomeCallable listPtsSceneCallable(const Model::ListPtsSceneRequest& request) const;
			ModifyPtsSceneOutcome modifyPtsScene(const Model::ModifyPtsSceneRequest &request)const;
			void modifyPtsSceneAsync(const Model::ModifyPtsSceneRequest& request, const ModifyPtsSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPtsSceneOutcomeCallable modifyPtsSceneCallable(const Model::ModifyPtsSceneRequest& request) const;
			RemoveEnvOutcome removeEnv(const Model::RemoveEnvRequest &request)const;
			void removeEnvAsync(const Model::RemoveEnvRequest& request, const RemoveEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveEnvOutcomeCallable removeEnvCallable(const Model::RemoveEnvRequest& request) const;
			RemoveOpenJMeterSceneOutcome removeOpenJMeterScene(const Model::RemoveOpenJMeterSceneRequest &request)const;
			void removeOpenJMeterSceneAsync(const Model::RemoveOpenJMeterSceneRequest& request, const RemoveOpenJMeterSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveOpenJMeterSceneOutcomeCallable removeOpenJMeterSceneCallable(const Model::RemoveOpenJMeterSceneRequest& request) const;
			SaveEnvOutcome saveEnv(const Model::SaveEnvRequest &request)const;
			void saveEnvAsync(const Model::SaveEnvRequest& request, const SaveEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveEnvOutcomeCallable saveEnvCallable(const Model::SaveEnvRequest& request) const;
			SaveOpenJMeterSceneOutcome saveOpenJMeterScene(const Model::SaveOpenJMeterSceneRequest &request)const;
			void saveOpenJMeterSceneAsync(const Model::SaveOpenJMeterSceneRequest& request, const SaveOpenJMeterSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveOpenJMeterSceneOutcomeCallable saveOpenJMeterSceneCallable(const Model::SaveOpenJMeterSceneRequest& request) const;
			SavePtsSceneOutcome savePtsScene(const Model::SavePtsSceneRequest &request)const;
			void savePtsSceneAsync(const Model::SavePtsSceneRequest& request, const SavePtsSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SavePtsSceneOutcomeCallable savePtsSceneCallable(const Model::SavePtsSceneRequest& request) const;
			StartDebugPtsSceneOutcome startDebugPtsScene(const Model::StartDebugPtsSceneRequest &request)const;
			void startDebugPtsSceneAsync(const Model::StartDebugPtsSceneRequest& request, const StartDebugPtsSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartDebugPtsSceneOutcomeCallable startDebugPtsSceneCallable(const Model::StartDebugPtsSceneRequest& request) const;
			StartDebuggingJMeterSceneOutcome startDebuggingJMeterScene(const Model::StartDebuggingJMeterSceneRequest &request)const;
			void startDebuggingJMeterSceneAsync(const Model::StartDebuggingJMeterSceneRequest& request, const StartDebuggingJMeterSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartDebuggingJMeterSceneOutcomeCallable startDebuggingJMeterSceneCallable(const Model::StartDebuggingJMeterSceneRequest& request) const;
			StartPtsSceneOutcome startPtsScene(const Model::StartPtsSceneRequest &request)const;
			void startPtsSceneAsync(const Model::StartPtsSceneRequest& request, const StartPtsSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartPtsSceneOutcomeCallable startPtsSceneCallable(const Model::StartPtsSceneRequest& request) const;
			StartTestingJMeterSceneOutcome startTestingJMeterScene(const Model::StartTestingJMeterSceneRequest &request)const;
			void startTestingJMeterSceneAsync(const Model::StartTestingJMeterSceneRequest& request, const StartTestingJMeterSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartTestingJMeterSceneOutcomeCallable startTestingJMeterSceneCallable(const Model::StartTestingJMeterSceneRequest& request) const;
			StopDebugPtsSceneOutcome stopDebugPtsScene(const Model::StopDebugPtsSceneRequest &request)const;
			void stopDebugPtsSceneAsync(const Model::StopDebugPtsSceneRequest& request, const StopDebugPtsSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopDebugPtsSceneOutcomeCallable stopDebugPtsSceneCallable(const Model::StopDebugPtsSceneRequest& request) const;
			StopDebuggingJMeterSceneOutcome stopDebuggingJMeterScene(const Model::StopDebuggingJMeterSceneRequest &request)const;
			void stopDebuggingJMeterSceneAsync(const Model::StopDebuggingJMeterSceneRequest& request, const StopDebuggingJMeterSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopDebuggingJMeterSceneOutcomeCallable stopDebuggingJMeterSceneCallable(const Model::StopDebuggingJMeterSceneRequest& request) const;
			StopPtsSceneOutcome stopPtsScene(const Model::StopPtsSceneRequest &request)const;
			void stopPtsSceneAsync(const Model::StopPtsSceneRequest& request, const StopPtsSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopPtsSceneOutcomeCallable stopPtsSceneCallable(const Model::StopPtsSceneRequest& request) const;
			StopTestingJMeterSceneOutcome stopTestingJMeterScene(const Model::StopTestingJMeterSceneRequest &request)const;
			void stopTestingJMeterSceneAsync(const Model::StopTestingJMeterSceneRequest& request, const StopTestingJMeterSceneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopTestingJMeterSceneOutcomeCallable stopTestingJMeterSceneCallable(const Model::StopTestingJMeterSceneRequest& request) const;
			UpdatePtsSceneBaseLineOutcome updatePtsSceneBaseLine(const Model::UpdatePtsSceneBaseLineRequest &request)const;
			void updatePtsSceneBaseLineAsync(const Model::UpdatePtsSceneBaseLineRequest& request, const UpdatePtsSceneBaseLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePtsSceneBaseLineOutcomeCallable updatePtsSceneBaseLineCallable(const Model::UpdatePtsSceneBaseLineRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_PTS_PTSCLIENT_H_
