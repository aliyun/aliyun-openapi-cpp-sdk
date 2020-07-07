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

#ifndef ALIBABACLOUD_VCS_VCSCLIENT_H_
#define ALIBABACLOUD_VCS_VCSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "VcsExport.h"
#include "model/AddDataSourceRequest.h"
#include "model/AddDataSourceResult.h"
#include "model/AddDeviceRequest.h"
#include "model/AddDeviceResult.h"
#include "model/AddMonitorRequest.h"
#include "model/AddMonitorResult.h"
#include "model/CreateCorpRequest.h"
#include "model/CreateCorpResult.h"
#include "model/CreateVideoComposeTaskRequest.h"
#include "model/CreateVideoComposeTaskResult.h"
#include "model/CreateVideoSummaryTaskRequest.h"
#include "model/CreateVideoSummaryTaskResult.h"
#include "model/DeleteDataSourceRequest.h"
#include "model/DeleteDataSourceResult.h"
#include "model/DeleteDeviceRequest.h"
#include "model/DeleteDeviceResult.h"
#include "model/DeleteRecordsRequest.h"
#include "model/DeleteRecordsResult.h"
#include "model/DeleteVideoSummaryTaskRequest.h"
#include "model/DeleteVideoSummaryTaskResult.h"
#include "model/GetBodyOptionsRequest.h"
#include "model/GetBodyOptionsResult.h"
#include "model/GetDeviceLiveUrlRequest.h"
#include "model/GetDeviceLiveUrlResult.h"
#include "model/GetDeviceVideoUrlRequest.h"
#include "model/GetDeviceVideoUrlResult.h"
#include "model/GetFaceOptionsRequest.h"
#include "model/GetFaceOptionsResult.h"
#include "model/GetInventoryRequest.h"
#include "model/GetInventoryResult.h"
#include "model/GetMonitorResultRequest.h"
#include "model/GetMonitorResultResult.h"
#include "model/GetPersonDetailRequest.h"
#include "model/GetPersonDetailResult.h"
#include "model/GetVideoComposeResultRequest.h"
#include "model/GetVideoComposeResultResult.h"
#include "model/GetVideoSummaryTaskResultRequest.h"
#include "model/GetVideoSummaryTaskResultResult.h"
#include "model/ListCorpsRequest.h"
#include "model/ListCorpsResult.h"
#include "model/ListDevicesRequest.h"
#include "model/ListDevicesResult.h"
#include "model/ListEventAlgorithmResultsRequest.h"
#include "model/ListEventAlgorithmResultsResult.h"
#include "model/ListFaceAlgorithmResultsRequest.h"
#include "model/ListFaceAlgorithmResultsResult.h"
#include "model/ListMetricsRequest.h"
#include "model/ListMetricsResult.h"
#include "model/ListMotorAlgorithmResultsRequest.h"
#include "model/ListMotorAlgorithmResultsResult.h"
#include "model/ListPersonsRequest.h"
#include "model/ListPersonsResult.h"
#include "model/RecognizeFaceQualityRequest.h"
#include "model/RecognizeFaceQualityResult.h"
#include "model/RecognizeImageRequest.h"
#include "model/RecognizeImageResult.h"
#include "model/SearchBodyRequest.h"
#include "model/SearchBodyResult.h"
#include "model/SearchFaceRequest.h"
#include "model/SearchFaceResult.h"
#include "model/StopMonitorRequest.h"
#include "model/StopMonitorResult.h"
#include "model/UpdateCorpRequest.h"
#include "model/UpdateCorpResult.h"
#include "model/UpdateDeviceRequest.h"
#include "model/UpdateDeviceResult.h"
#include "model/UpdateMonitorRequest.h"
#include "model/UpdateMonitorResult.h"
#include "model/UploadFileRequest.h"
#include "model/UploadFileResult.h"


namespace AlibabaCloud
{
	namespace Vcs
	{
		class ALIBABACLOUD_VCS_EXPORT VcsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddDataSourceResult> AddDataSourceOutcome;
			typedef std::future<AddDataSourceOutcome> AddDataSourceOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::AddDataSourceRequest&, const AddDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDataSourceAsyncHandler;
			typedef Outcome<Error, Model::AddDeviceResult> AddDeviceOutcome;
			typedef std::future<AddDeviceOutcome> AddDeviceOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::AddDeviceRequest&, const AddDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDeviceAsyncHandler;
			typedef Outcome<Error, Model::AddMonitorResult> AddMonitorOutcome;
			typedef std::future<AddMonitorOutcome> AddMonitorOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::AddMonitorRequest&, const AddMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddMonitorAsyncHandler;
			typedef Outcome<Error, Model::CreateCorpResult> CreateCorpOutcome;
			typedef std::future<CreateCorpOutcome> CreateCorpOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::CreateCorpRequest&, const CreateCorpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCorpAsyncHandler;
			typedef Outcome<Error, Model::CreateVideoComposeTaskResult> CreateVideoComposeTaskOutcome;
			typedef std::future<CreateVideoComposeTaskOutcome> CreateVideoComposeTaskOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::CreateVideoComposeTaskRequest&, const CreateVideoComposeTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVideoComposeTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateVideoSummaryTaskResult> CreateVideoSummaryTaskOutcome;
			typedef std::future<CreateVideoSummaryTaskOutcome> CreateVideoSummaryTaskOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::CreateVideoSummaryTaskRequest&, const CreateVideoSummaryTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVideoSummaryTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteDataSourceResult> DeleteDataSourceOutcome;
			typedef std::future<DeleteDataSourceOutcome> DeleteDataSourceOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::DeleteDataSourceRequest&, const DeleteDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataSourceAsyncHandler;
			typedef Outcome<Error, Model::DeleteDeviceResult> DeleteDeviceOutcome;
			typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::DeleteDeviceRequest&, const DeleteDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceAsyncHandler;
			typedef Outcome<Error, Model::DeleteRecordsResult> DeleteRecordsOutcome;
			typedef std::future<DeleteRecordsOutcome> DeleteRecordsOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::DeleteRecordsRequest&, const DeleteRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRecordsAsyncHandler;
			typedef Outcome<Error, Model::DeleteVideoSummaryTaskResult> DeleteVideoSummaryTaskOutcome;
			typedef std::future<DeleteVideoSummaryTaskOutcome> DeleteVideoSummaryTaskOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::DeleteVideoSummaryTaskRequest&, const DeleteVideoSummaryTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVideoSummaryTaskAsyncHandler;
			typedef Outcome<Error, Model::GetBodyOptionsResult> GetBodyOptionsOutcome;
			typedef std::future<GetBodyOptionsOutcome> GetBodyOptionsOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::GetBodyOptionsRequest&, const GetBodyOptionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBodyOptionsAsyncHandler;
			typedef Outcome<Error, Model::GetDeviceLiveUrlResult> GetDeviceLiveUrlOutcome;
			typedef std::future<GetDeviceLiveUrlOutcome> GetDeviceLiveUrlOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::GetDeviceLiveUrlRequest&, const GetDeviceLiveUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceLiveUrlAsyncHandler;
			typedef Outcome<Error, Model::GetDeviceVideoUrlResult> GetDeviceVideoUrlOutcome;
			typedef std::future<GetDeviceVideoUrlOutcome> GetDeviceVideoUrlOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::GetDeviceVideoUrlRequest&, const GetDeviceVideoUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceVideoUrlAsyncHandler;
			typedef Outcome<Error, Model::GetFaceOptionsResult> GetFaceOptionsOutcome;
			typedef std::future<GetFaceOptionsOutcome> GetFaceOptionsOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::GetFaceOptionsRequest&, const GetFaceOptionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFaceOptionsAsyncHandler;
			typedef Outcome<Error, Model::GetInventoryResult> GetInventoryOutcome;
			typedef std::future<GetInventoryOutcome> GetInventoryOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::GetInventoryRequest&, const GetInventoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInventoryAsyncHandler;
			typedef Outcome<Error, Model::GetMonitorResultResult> GetMonitorResultOutcome;
			typedef std::future<GetMonitorResultOutcome> GetMonitorResultOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::GetMonitorResultRequest&, const GetMonitorResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMonitorResultAsyncHandler;
			typedef Outcome<Error, Model::GetPersonDetailResult> GetPersonDetailOutcome;
			typedef std::future<GetPersonDetailOutcome> GetPersonDetailOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::GetPersonDetailRequest&, const GetPersonDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPersonDetailAsyncHandler;
			typedef Outcome<Error, Model::GetVideoComposeResultResult> GetVideoComposeResultOutcome;
			typedef std::future<GetVideoComposeResultOutcome> GetVideoComposeResultOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::GetVideoComposeResultRequest&, const GetVideoComposeResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVideoComposeResultAsyncHandler;
			typedef Outcome<Error, Model::GetVideoSummaryTaskResultResult> GetVideoSummaryTaskResultOutcome;
			typedef std::future<GetVideoSummaryTaskResultOutcome> GetVideoSummaryTaskResultOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::GetVideoSummaryTaskResultRequest&, const GetVideoSummaryTaskResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVideoSummaryTaskResultAsyncHandler;
			typedef Outcome<Error, Model::ListCorpsResult> ListCorpsOutcome;
			typedef std::future<ListCorpsOutcome> ListCorpsOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ListCorpsRequest&, const ListCorpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCorpsAsyncHandler;
			typedef Outcome<Error, Model::ListDevicesResult> ListDevicesOutcome;
			typedef std::future<ListDevicesOutcome> ListDevicesOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ListDevicesRequest&, const ListDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDevicesAsyncHandler;
			typedef Outcome<Error, Model::ListEventAlgorithmResultsResult> ListEventAlgorithmResultsOutcome;
			typedef std::future<ListEventAlgorithmResultsOutcome> ListEventAlgorithmResultsOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ListEventAlgorithmResultsRequest&, const ListEventAlgorithmResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEventAlgorithmResultsAsyncHandler;
			typedef Outcome<Error, Model::ListFaceAlgorithmResultsResult> ListFaceAlgorithmResultsOutcome;
			typedef std::future<ListFaceAlgorithmResultsOutcome> ListFaceAlgorithmResultsOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ListFaceAlgorithmResultsRequest&, const ListFaceAlgorithmResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFaceAlgorithmResultsAsyncHandler;
			typedef Outcome<Error, Model::ListMetricsResult> ListMetricsOutcome;
			typedef std::future<ListMetricsOutcome> ListMetricsOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ListMetricsRequest&, const ListMetricsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMetricsAsyncHandler;
			typedef Outcome<Error, Model::ListMotorAlgorithmResultsResult> ListMotorAlgorithmResultsOutcome;
			typedef std::future<ListMotorAlgorithmResultsOutcome> ListMotorAlgorithmResultsOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ListMotorAlgorithmResultsRequest&, const ListMotorAlgorithmResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMotorAlgorithmResultsAsyncHandler;
			typedef Outcome<Error, Model::ListPersonsResult> ListPersonsOutcome;
			typedef std::future<ListPersonsOutcome> ListPersonsOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::ListPersonsRequest&, const ListPersonsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPersonsAsyncHandler;
			typedef Outcome<Error, Model::RecognizeFaceQualityResult> RecognizeFaceQualityOutcome;
			typedef std::future<RecognizeFaceQualityOutcome> RecognizeFaceQualityOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::RecognizeFaceQualityRequest&, const RecognizeFaceQualityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeFaceQualityAsyncHandler;
			typedef Outcome<Error, Model::RecognizeImageResult> RecognizeImageOutcome;
			typedef std::future<RecognizeImageOutcome> RecognizeImageOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::RecognizeImageRequest&, const RecognizeImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeImageAsyncHandler;
			typedef Outcome<Error, Model::SearchBodyResult> SearchBodyOutcome;
			typedef std::future<SearchBodyOutcome> SearchBodyOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::SearchBodyRequest&, const SearchBodyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchBodyAsyncHandler;
			typedef Outcome<Error, Model::SearchFaceResult> SearchFaceOutcome;
			typedef std::future<SearchFaceOutcome> SearchFaceOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::SearchFaceRequest&, const SearchFaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchFaceAsyncHandler;
			typedef Outcome<Error, Model::StopMonitorResult> StopMonitorOutcome;
			typedef std::future<StopMonitorOutcome> StopMonitorOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::StopMonitorRequest&, const StopMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopMonitorAsyncHandler;
			typedef Outcome<Error, Model::UpdateCorpResult> UpdateCorpOutcome;
			typedef std::future<UpdateCorpOutcome> UpdateCorpOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::UpdateCorpRequest&, const UpdateCorpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCorpAsyncHandler;
			typedef Outcome<Error, Model::UpdateDeviceResult> UpdateDeviceOutcome;
			typedef std::future<UpdateDeviceOutcome> UpdateDeviceOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::UpdateDeviceRequest&, const UpdateDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDeviceAsyncHandler;
			typedef Outcome<Error, Model::UpdateMonitorResult> UpdateMonitorOutcome;
			typedef std::future<UpdateMonitorOutcome> UpdateMonitorOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::UpdateMonitorRequest&, const UpdateMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMonitorAsyncHandler;
			typedef Outcome<Error, Model::UploadFileResult> UploadFileOutcome;
			typedef std::future<UploadFileOutcome> UploadFileOutcomeCallable;
			typedef std::function<void(const VcsClient*, const Model::UploadFileRequest&, const UploadFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadFileAsyncHandler;

			VcsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			VcsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			VcsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~VcsClient();
			AddDataSourceOutcome addDataSource(const Model::AddDataSourceRequest &request)const;
			void addDataSourceAsync(const Model::AddDataSourceRequest& request, const AddDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDataSourceOutcomeCallable addDataSourceCallable(const Model::AddDataSourceRequest& request) const;
			AddDeviceOutcome addDevice(const Model::AddDeviceRequest &request)const;
			void addDeviceAsync(const Model::AddDeviceRequest& request, const AddDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDeviceOutcomeCallable addDeviceCallable(const Model::AddDeviceRequest& request) const;
			AddMonitorOutcome addMonitor(const Model::AddMonitorRequest &request)const;
			void addMonitorAsync(const Model::AddMonitorRequest& request, const AddMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddMonitorOutcomeCallable addMonitorCallable(const Model::AddMonitorRequest& request) const;
			CreateCorpOutcome createCorp(const Model::CreateCorpRequest &request)const;
			void createCorpAsync(const Model::CreateCorpRequest& request, const CreateCorpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCorpOutcomeCallable createCorpCallable(const Model::CreateCorpRequest& request) const;
			CreateVideoComposeTaskOutcome createVideoComposeTask(const Model::CreateVideoComposeTaskRequest &request)const;
			void createVideoComposeTaskAsync(const Model::CreateVideoComposeTaskRequest& request, const CreateVideoComposeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVideoComposeTaskOutcomeCallable createVideoComposeTaskCallable(const Model::CreateVideoComposeTaskRequest& request) const;
			CreateVideoSummaryTaskOutcome createVideoSummaryTask(const Model::CreateVideoSummaryTaskRequest &request)const;
			void createVideoSummaryTaskAsync(const Model::CreateVideoSummaryTaskRequest& request, const CreateVideoSummaryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVideoSummaryTaskOutcomeCallable createVideoSummaryTaskCallable(const Model::CreateVideoSummaryTaskRequest& request) const;
			DeleteDataSourceOutcome deleteDataSource(const Model::DeleteDataSourceRequest &request)const;
			void deleteDataSourceAsync(const Model::DeleteDataSourceRequest& request, const DeleteDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDataSourceOutcomeCallable deleteDataSourceCallable(const Model::DeleteDataSourceRequest& request) const;
			DeleteDeviceOutcome deleteDevice(const Model::DeleteDeviceRequest &request)const;
			void deleteDeviceAsync(const Model::DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDeviceOutcomeCallable deleteDeviceCallable(const Model::DeleteDeviceRequest& request) const;
			DeleteRecordsOutcome deleteRecords(const Model::DeleteRecordsRequest &request)const;
			void deleteRecordsAsync(const Model::DeleteRecordsRequest& request, const DeleteRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRecordsOutcomeCallable deleteRecordsCallable(const Model::DeleteRecordsRequest& request) const;
			DeleteVideoSummaryTaskOutcome deleteVideoSummaryTask(const Model::DeleteVideoSummaryTaskRequest &request)const;
			void deleteVideoSummaryTaskAsync(const Model::DeleteVideoSummaryTaskRequest& request, const DeleteVideoSummaryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVideoSummaryTaskOutcomeCallable deleteVideoSummaryTaskCallable(const Model::DeleteVideoSummaryTaskRequest& request) const;
			GetBodyOptionsOutcome getBodyOptions(const Model::GetBodyOptionsRequest &request)const;
			void getBodyOptionsAsync(const Model::GetBodyOptionsRequest& request, const GetBodyOptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBodyOptionsOutcomeCallable getBodyOptionsCallable(const Model::GetBodyOptionsRequest& request) const;
			GetDeviceLiveUrlOutcome getDeviceLiveUrl(const Model::GetDeviceLiveUrlRequest &request)const;
			void getDeviceLiveUrlAsync(const Model::GetDeviceLiveUrlRequest& request, const GetDeviceLiveUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDeviceLiveUrlOutcomeCallable getDeviceLiveUrlCallable(const Model::GetDeviceLiveUrlRequest& request) const;
			GetDeviceVideoUrlOutcome getDeviceVideoUrl(const Model::GetDeviceVideoUrlRequest &request)const;
			void getDeviceVideoUrlAsync(const Model::GetDeviceVideoUrlRequest& request, const GetDeviceVideoUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDeviceVideoUrlOutcomeCallable getDeviceVideoUrlCallable(const Model::GetDeviceVideoUrlRequest& request) const;
			GetFaceOptionsOutcome getFaceOptions(const Model::GetFaceOptionsRequest &request)const;
			void getFaceOptionsAsync(const Model::GetFaceOptionsRequest& request, const GetFaceOptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFaceOptionsOutcomeCallable getFaceOptionsCallable(const Model::GetFaceOptionsRequest& request) const;
			GetInventoryOutcome getInventory(const Model::GetInventoryRequest &request)const;
			void getInventoryAsync(const Model::GetInventoryRequest& request, const GetInventoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInventoryOutcomeCallable getInventoryCallable(const Model::GetInventoryRequest& request) const;
			GetMonitorResultOutcome getMonitorResult(const Model::GetMonitorResultRequest &request)const;
			void getMonitorResultAsync(const Model::GetMonitorResultRequest& request, const GetMonitorResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMonitorResultOutcomeCallable getMonitorResultCallable(const Model::GetMonitorResultRequest& request) const;
			GetPersonDetailOutcome getPersonDetail(const Model::GetPersonDetailRequest &request)const;
			void getPersonDetailAsync(const Model::GetPersonDetailRequest& request, const GetPersonDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPersonDetailOutcomeCallable getPersonDetailCallable(const Model::GetPersonDetailRequest& request) const;
			GetVideoComposeResultOutcome getVideoComposeResult(const Model::GetVideoComposeResultRequest &request)const;
			void getVideoComposeResultAsync(const Model::GetVideoComposeResultRequest& request, const GetVideoComposeResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVideoComposeResultOutcomeCallable getVideoComposeResultCallable(const Model::GetVideoComposeResultRequest& request) const;
			GetVideoSummaryTaskResultOutcome getVideoSummaryTaskResult(const Model::GetVideoSummaryTaskResultRequest &request)const;
			void getVideoSummaryTaskResultAsync(const Model::GetVideoSummaryTaskResultRequest& request, const GetVideoSummaryTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVideoSummaryTaskResultOutcomeCallable getVideoSummaryTaskResultCallable(const Model::GetVideoSummaryTaskResultRequest& request) const;
			ListCorpsOutcome listCorps(const Model::ListCorpsRequest &request)const;
			void listCorpsAsync(const Model::ListCorpsRequest& request, const ListCorpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCorpsOutcomeCallable listCorpsCallable(const Model::ListCorpsRequest& request) const;
			ListDevicesOutcome listDevices(const Model::ListDevicesRequest &request)const;
			void listDevicesAsync(const Model::ListDevicesRequest& request, const ListDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDevicesOutcomeCallable listDevicesCallable(const Model::ListDevicesRequest& request) const;
			ListEventAlgorithmResultsOutcome listEventAlgorithmResults(const Model::ListEventAlgorithmResultsRequest &request)const;
			void listEventAlgorithmResultsAsync(const Model::ListEventAlgorithmResultsRequest& request, const ListEventAlgorithmResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEventAlgorithmResultsOutcomeCallable listEventAlgorithmResultsCallable(const Model::ListEventAlgorithmResultsRequest& request) const;
			ListFaceAlgorithmResultsOutcome listFaceAlgorithmResults(const Model::ListFaceAlgorithmResultsRequest &request)const;
			void listFaceAlgorithmResultsAsync(const Model::ListFaceAlgorithmResultsRequest& request, const ListFaceAlgorithmResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFaceAlgorithmResultsOutcomeCallable listFaceAlgorithmResultsCallable(const Model::ListFaceAlgorithmResultsRequest& request) const;
			ListMetricsOutcome listMetrics(const Model::ListMetricsRequest &request)const;
			void listMetricsAsync(const Model::ListMetricsRequest& request, const ListMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMetricsOutcomeCallable listMetricsCallable(const Model::ListMetricsRequest& request) const;
			ListMotorAlgorithmResultsOutcome listMotorAlgorithmResults(const Model::ListMotorAlgorithmResultsRequest &request)const;
			void listMotorAlgorithmResultsAsync(const Model::ListMotorAlgorithmResultsRequest& request, const ListMotorAlgorithmResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMotorAlgorithmResultsOutcomeCallable listMotorAlgorithmResultsCallable(const Model::ListMotorAlgorithmResultsRequest& request) const;
			ListPersonsOutcome listPersons(const Model::ListPersonsRequest &request)const;
			void listPersonsAsync(const Model::ListPersonsRequest& request, const ListPersonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPersonsOutcomeCallable listPersonsCallable(const Model::ListPersonsRequest& request) const;
			RecognizeFaceQualityOutcome recognizeFaceQuality(const Model::RecognizeFaceQualityRequest &request)const;
			void recognizeFaceQualityAsync(const Model::RecognizeFaceQualityRequest& request, const RecognizeFaceQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeFaceQualityOutcomeCallable recognizeFaceQualityCallable(const Model::RecognizeFaceQualityRequest& request) const;
			RecognizeImageOutcome recognizeImage(const Model::RecognizeImageRequest &request)const;
			void recognizeImageAsync(const Model::RecognizeImageRequest& request, const RecognizeImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeImageOutcomeCallable recognizeImageCallable(const Model::RecognizeImageRequest& request) const;
			SearchBodyOutcome searchBody(const Model::SearchBodyRequest &request)const;
			void searchBodyAsync(const Model::SearchBodyRequest& request, const SearchBodyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchBodyOutcomeCallable searchBodyCallable(const Model::SearchBodyRequest& request) const;
			SearchFaceOutcome searchFace(const Model::SearchFaceRequest &request)const;
			void searchFaceAsync(const Model::SearchFaceRequest& request, const SearchFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchFaceOutcomeCallable searchFaceCallable(const Model::SearchFaceRequest& request) const;
			StopMonitorOutcome stopMonitor(const Model::StopMonitorRequest &request)const;
			void stopMonitorAsync(const Model::StopMonitorRequest& request, const StopMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopMonitorOutcomeCallable stopMonitorCallable(const Model::StopMonitorRequest& request) const;
			UpdateCorpOutcome updateCorp(const Model::UpdateCorpRequest &request)const;
			void updateCorpAsync(const Model::UpdateCorpRequest& request, const UpdateCorpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCorpOutcomeCallable updateCorpCallable(const Model::UpdateCorpRequest& request) const;
			UpdateDeviceOutcome updateDevice(const Model::UpdateDeviceRequest &request)const;
			void updateDeviceAsync(const Model::UpdateDeviceRequest& request, const UpdateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDeviceOutcomeCallable updateDeviceCallable(const Model::UpdateDeviceRequest& request) const;
			UpdateMonitorOutcome updateMonitor(const Model::UpdateMonitorRequest &request)const;
			void updateMonitorAsync(const Model::UpdateMonitorRequest& request, const UpdateMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMonitorOutcomeCallable updateMonitorCallable(const Model::UpdateMonitorRequest& request) const;
			UploadFileOutcome uploadFile(const Model::UploadFileRequest &request)const;
			void uploadFileAsync(const Model::UploadFileRequest& request, const UploadFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadFileOutcomeCallable uploadFileCallable(const Model::UploadFileRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_VCS_VCSCLIENT_H_
