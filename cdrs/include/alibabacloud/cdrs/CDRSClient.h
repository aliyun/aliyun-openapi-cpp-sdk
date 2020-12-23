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

#ifndef ALIBABACLOUD_CDRS_CDRSCLIENT_H_
#define ALIBABACLOUD_CDRS_CDRSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CDRSExport.h"
#include "model/BindDeviceRequest.h"
#include "model/BindDeviceResult.h"
#include "model/CreateProjectRequest.h"
#include "model/CreateProjectResult.h"
#include "model/ListCityMapAoisRequest.h"
#include "model/ListCityMapAoisResult.h"
#include "model/ListCityMapCameraResultsRequest.h"
#include "model/ListCityMapCameraResultsResult.h"
#include "model/ListCityMapCameraStatisticsRequest.h"
#include "model/ListCityMapCameraStatisticsResult.h"
#include "model/ListCityMapImageDetailsRequest.h"
#include "model/ListCityMapImageDetailsResult.h"
#include "model/ListCityMapPersonFlowRequest.h"
#include "model/ListCityMapPersonFlowResult.h"
#include "model/ListCityMapRangeStatisticRequest.h"
#include "model/ListCityMapRangeStatisticResult.h"
#include "model/ListDataStatisticsRequest.h"
#include "model/ListDataStatisticsResult.h"
#include "model/ListDataStatisticsByDayRequest.h"
#include "model/ListDataStatisticsByDayResult.h"
#include "model/ListDeviceDetailRequest.h"
#include "model/ListDeviceDetailResult.h"
#include "model/ListDeviceGenderStatisticsRequest.h"
#include "model/ListDeviceGenderStatisticsResult.h"
#include "model/ListDevicePersonRequest.h"
#include "model/ListDevicePersonResult.h"
#include "model/ListDevicePersonStatisticsRequest.h"
#include "model/ListDevicePersonStatisticsResult.h"
#include "model/ListMapRouteDetailsRequest.h"
#include "model/ListMapRouteDetailsResult.h"
#include "model/ListPersonDetailsRequest.h"
#include "model/ListPersonDetailsResult.h"
#include "model/ListPersonResultRequest.h"
#include "model/ListPersonResultResult.h"
#include "model/ListPersonTagRequest.h"
#include "model/ListPersonTagResult.h"
#include "model/ListPersonTopRequest.h"
#include "model/ListPersonTopResult.h"
#include "model/ListPersonTrackRequest.h"
#include "model/ListPersonTrackResult.h"
#include "model/ListRangeDeviceRequest.h"
#include "model/ListRangeDeviceResult.h"
#include "model/ListStorageStatisticsRequest.h"
#include "model/ListStorageStatisticsResult.h"
#include "model/ListStructureStatisticsRequest.h"
#include "model/ListStructureStatisticsResult.h"
#include "model/ListVehicleDetailsRequest.h"
#include "model/ListVehicleDetailsResult.h"
#include "model/ListVehicleResultsRequest.h"
#include "model/ListVehicleResultsResult.h"
#include "model/ListVehicleTagDistributeRequest.h"
#include "model/ListVehicleTagDistributeResult.h"
#include "model/ListVehicleTopRequest.h"
#include "model/ListVehicleTopResult.h"
#include "model/ListVehicleTrackRequest.h"
#include "model/ListVehicleTrackResult.h"
#include "model/RecognizeImageRequest.h"
#include "model/RecognizeImageResult.h"
#include "model/SearchObjectRequest.h"
#include "model/SearchObjectResult.h"
#include "model/UnbindDeviceRequest.h"
#include "model/UnbindDeviceResult.h"
#include "model/UpdateProjectRequest.h"
#include "model/UpdateProjectResult.h"


namespace AlibabaCloud
{
	namespace CDRS
	{
		class ALIBABACLOUD_CDRS_EXPORT CDRSClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::BindDeviceResult> BindDeviceOutcome;
			typedef std::future<BindDeviceOutcome> BindDeviceOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::BindDeviceRequest&, const BindDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindDeviceAsyncHandler;
			typedef Outcome<Error, Model::CreateProjectResult> CreateProjectOutcome;
			typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::CreateProjectRequest&, const CreateProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
			typedef Outcome<Error, Model::ListCityMapAoisResult> ListCityMapAoisOutcome;
			typedef std::future<ListCityMapAoisOutcome> ListCityMapAoisOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::ListCityMapAoisRequest&, const ListCityMapAoisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCityMapAoisAsyncHandler;
			typedef Outcome<Error, Model::ListCityMapCameraResultsResult> ListCityMapCameraResultsOutcome;
			typedef std::future<ListCityMapCameraResultsOutcome> ListCityMapCameraResultsOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::ListCityMapCameraResultsRequest&, const ListCityMapCameraResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCityMapCameraResultsAsyncHandler;
			typedef Outcome<Error, Model::ListCityMapCameraStatisticsResult> ListCityMapCameraStatisticsOutcome;
			typedef std::future<ListCityMapCameraStatisticsOutcome> ListCityMapCameraStatisticsOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::ListCityMapCameraStatisticsRequest&, const ListCityMapCameraStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCityMapCameraStatisticsAsyncHandler;
			typedef Outcome<Error, Model::ListCityMapImageDetailsResult> ListCityMapImageDetailsOutcome;
			typedef std::future<ListCityMapImageDetailsOutcome> ListCityMapImageDetailsOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::ListCityMapImageDetailsRequest&, const ListCityMapImageDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCityMapImageDetailsAsyncHandler;
			typedef Outcome<Error, Model::ListCityMapPersonFlowResult> ListCityMapPersonFlowOutcome;
			typedef std::future<ListCityMapPersonFlowOutcome> ListCityMapPersonFlowOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::ListCityMapPersonFlowRequest&, const ListCityMapPersonFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCityMapPersonFlowAsyncHandler;
			typedef Outcome<Error, Model::ListCityMapRangeStatisticResult> ListCityMapRangeStatisticOutcome;
			typedef std::future<ListCityMapRangeStatisticOutcome> ListCityMapRangeStatisticOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::ListCityMapRangeStatisticRequest&, const ListCityMapRangeStatisticOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCityMapRangeStatisticAsyncHandler;
			typedef Outcome<Error, Model::ListDataStatisticsResult> ListDataStatisticsOutcome;
			typedef std::future<ListDataStatisticsOutcome> ListDataStatisticsOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::ListDataStatisticsRequest&, const ListDataStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataStatisticsAsyncHandler;
			typedef Outcome<Error, Model::ListDataStatisticsByDayResult> ListDataStatisticsByDayOutcome;
			typedef std::future<ListDataStatisticsByDayOutcome> ListDataStatisticsByDayOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::ListDataStatisticsByDayRequest&, const ListDataStatisticsByDayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataStatisticsByDayAsyncHandler;
			typedef Outcome<Error, Model::ListDeviceDetailResult> ListDeviceDetailOutcome;
			typedef std::future<ListDeviceDetailOutcome> ListDeviceDetailOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::ListDeviceDetailRequest&, const ListDeviceDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDeviceDetailAsyncHandler;
			typedef Outcome<Error, Model::ListDeviceGenderStatisticsResult> ListDeviceGenderStatisticsOutcome;
			typedef std::future<ListDeviceGenderStatisticsOutcome> ListDeviceGenderStatisticsOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::ListDeviceGenderStatisticsRequest&, const ListDeviceGenderStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDeviceGenderStatisticsAsyncHandler;
			typedef Outcome<Error, Model::ListDevicePersonResult> ListDevicePersonOutcome;
			typedef std::future<ListDevicePersonOutcome> ListDevicePersonOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::ListDevicePersonRequest&, const ListDevicePersonOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDevicePersonAsyncHandler;
			typedef Outcome<Error, Model::ListDevicePersonStatisticsResult> ListDevicePersonStatisticsOutcome;
			typedef std::future<ListDevicePersonStatisticsOutcome> ListDevicePersonStatisticsOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::ListDevicePersonStatisticsRequest&, const ListDevicePersonStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDevicePersonStatisticsAsyncHandler;
			typedef Outcome<Error, Model::ListMapRouteDetailsResult> ListMapRouteDetailsOutcome;
			typedef std::future<ListMapRouteDetailsOutcome> ListMapRouteDetailsOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::ListMapRouteDetailsRequest&, const ListMapRouteDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMapRouteDetailsAsyncHandler;
			typedef Outcome<Error, Model::ListPersonDetailsResult> ListPersonDetailsOutcome;
			typedef std::future<ListPersonDetailsOutcome> ListPersonDetailsOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::ListPersonDetailsRequest&, const ListPersonDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPersonDetailsAsyncHandler;
			typedef Outcome<Error, Model::ListPersonResultResult> ListPersonResultOutcome;
			typedef std::future<ListPersonResultOutcome> ListPersonResultOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::ListPersonResultRequest&, const ListPersonResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPersonResultAsyncHandler;
			typedef Outcome<Error, Model::ListPersonTagResult> ListPersonTagOutcome;
			typedef std::future<ListPersonTagOutcome> ListPersonTagOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::ListPersonTagRequest&, const ListPersonTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPersonTagAsyncHandler;
			typedef Outcome<Error, Model::ListPersonTopResult> ListPersonTopOutcome;
			typedef std::future<ListPersonTopOutcome> ListPersonTopOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::ListPersonTopRequest&, const ListPersonTopOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPersonTopAsyncHandler;
			typedef Outcome<Error, Model::ListPersonTrackResult> ListPersonTrackOutcome;
			typedef std::future<ListPersonTrackOutcome> ListPersonTrackOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::ListPersonTrackRequest&, const ListPersonTrackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPersonTrackAsyncHandler;
			typedef Outcome<Error, Model::ListRangeDeviceResult> ListRangeDeviceOutcome;
			typedef std::future<ListRangeDeviceOutcome> ListRangeDeviceOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::ListRangeDeviceRequest&, const ListRangeDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRangeDeviceAsyncHandler;
			typedef Outcome<Error, Model::ListStorageStatisticsResult> ListStorageStatisticsOutcome;
			typedef std::future<ListStorageStatisticsOutcome> ListStorageStatisticsOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::ListStorageStatisticsRequest&, const ListStorageStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListStorageStatisticsAsyncHandler;
			typedef Outcome<Error, Model::ListStructureStatisticsResult> ListStructureStatisticsOutcome;
			typedef std::future<ListStructureStatisticsOutcome> ListStructureStatisticsOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::ListStructureStatisticsRequest&, const ListStructureStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListStructureStatisticsAsyncHandler;
			typedef Outcome<Error, Model::ListVehicleDetailsResult> ListVehicleDetailsOutcome;
			typedef std::future<ListVehicleDetailsOutcome> ListVehicleDetailsOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::ListVehicleDetailsRequest&, const ListVehicleDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVehicleDetailsAsyncHandler;
			typedef Outcome<Error, Model::ListVehicleResultsResult> ListVehicleResultsOutcome;
			typedef std::future<ListVehicleResultsOutcome> ListVehicleResultsOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::ListVehicleResultsRequest&, const ListVehicleResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVehicleResultsAsyncHandler;
			typedef Outcome<Error, Model::ListVehicleTagDistributeResult> ListVehicleTagDistributeOutcome;
			typedef std::future<ListVehicleTagDistributeOutcome> ListVehicleTagDistributeOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::ListVehicleTagDistributeRequest&, const ListVehicleTagDistributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVehicleTagDistributeAsyncHandler;
			typedef Outcome<Error, Model::ListVehicleTopResult> ListVehicleTopOutcome;
			typedef std::future<ListVehicleTopOutcome> ListVehicleTopOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::ListVehicleTopRequest&, const ListVehicleTopOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVehicleTopAsyncHandler;
			typedef Outcome<Error, Model::ListVehicleTrackResult> ListVehicleTrackOutcome;
			typedef std::future<ListVehicleTrackOutcome> ListVehicleTrackOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::ListVehicleTrackRequest&, const ListVehicleTrackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVehicleTrackAsyncHandler;
			typedef Outcome<Error, Model::RecognizeImageResult> RecognizeImageOutcome;
			typedef std::future<RecognizeImageOutcome> RecognizeImageOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::RecognizeImageRequest&, const RecognizeImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeImageAsyncHandler;
			typedef Outcome<Error, Model::SearchObjectResult> SearchObjectOutcome;
			typedef std::future<SearchObjectOutcome> SearchObjectOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::SearchObjectRequest&, const SearchObjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchObjectAsyncHandler;
			typedef Outcome<Error, Model::UnbindDeviceResult> UnbindDeviceOutcome;
			typedef std::future<UnbindDeviceOutcome> UnbindDeviceOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::UnbindDeviceRequest&, const UnbindDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindDeviceAsyncHandler;
			typedef Outcome<Error, Model::UpdateProjectResult> UpdateProjectOutcome;
			typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
			typedef std::function<void(const CDRSClient*, const Model::UpdateProjectRequest&, const UpdateProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProjectAsyncHandler;

			CDRSClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CDRSClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CDRSClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CDRSClient();
			BindDeviceOutcome bindDevice(const Model::BindDeviceRequest &request)const;
			void bindDeviceAsync(const Model::BindDeviceRequest& request, const BindDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindDeviceOutcomeCallable bindDeviceCallable(const Model::BindDeviceRequest& request) const;
			CreateProjectOutcome createProject(const Model::CreateProjectRequest &request)const;
			void createProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProjectOutcomeCallable createProjectCallable(const Model::CreateProjectRequest& request) const;
			ListCityMapAoisOutcome listCityMapAois(const Model::ListCityMapAoisRequest &request)const;
			void listCityMapAoisAsync(const Model::ListCityMapAoisRequest& request, const ListCityMapAoisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCityMapAoisOutcomeCallable listCityMapAoisCallable(const Model::ListCityMapAoisRequest& request) const;
			ListCityMapCameraResultsOutcome listCityMapCameraResults(const Model::ListCityMapCameraResultsRequest &request)const;
			void listCityMapCameraResultsAsync(const Model::ListCityMapCameraResultsRequest& request, const ListCityMapCameraResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCityMapCameraResultsOutcomeCallable listCityMapCameraResultsCallable(const Model::ListCityMapCameraResultsRequest& request) const;
			ListCityMapCameraStatisticsOutcome listCityMapCameraStatistics(const Model::ListCityMapCameraStatisticsRequest &request)const;
			void listCityMapCameraStatisticsAsync(const Model::ListCityMapCameraStatisticsRequest& request, const ListCityMapCameraStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCityMapCameraStatisticsOutcomeCallable listCityMapCameraStatisticsCallable(const Model::ListCityMapCameraStatisticsRequest& request) const;
			ListCityMapImageDetailsOutcome listCityMapImageDetails(const Model::ListCityMapImageDetailsRequest &request)const;
			void listCityMapImageDetailsAsync(const Model::ListCityMapImageDetailsRequest& request, const ListCityMapImageDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCityMapImageDetailsOutcomeCallable listCityMapImageDetailsCallable(const Model::ListCityMapImageDetailsRequest& request) const;
			ListCityMapPersonFlowOutcome listCityMapPersonFlow(const Model::ListCityMapPersonFlowRequest &request)const;
			void listCityMapPersonFlowAsync(const Model::ListCityMapPersonFlowRequest& request, const ListCityMapPersonFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCityMapPersonFlowOutcomeCallable listCityMapPersonFlowCallable(const Model::ListCityMapPersonFlowRequest& request) const;
			ListCityMapRangeStatisticOutcome listCityMapRangeStatistic(const Model::ListCityMapRangeStatisticRequest &request)const;
			void listCityMapRangeStatisticAsync(const Model::ListCityMapRangeStatisticRequest& request, const ListCityMapRangeStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCityMapRangeStatisticOutcomeCallable listCityMapRangeStatisticCallable(const Model::ListCityMapRangeStatisticRequest& request) const;
			ListDataStatisticsOutcome listDataStatistics(const Model::ListDataStatisticsRequest &request)const;
			void listDataStatisticsAsync(const Model::ListDataStatisticsRequest& request, const ListDataStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataStatisticsOutcomeCallable listDataStatisticsCallable(const Model::ListDataStatisticsRequest& request) const;
			ListDataStatisticsByDayOutcome listDataStatisticsByDay(const Model::ListDataStatisticsByDayRequest &request)const;
			void listDataStatisticsByDayAsync(const Model::ListDataStatisticsByDayRequest& request, const ListDataStatisticsByDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataStatisticsByDayOutcomeCallable listDataStatisticsByDayCallable(const Model::ListDataStatisticsByDayRequest& request) const;
			ListDeviceDetailOutcome listDeviceDetail(const Model::ListDeviceDetailRequest &request)const;
			void listDeviceDetailAsync(const Model::ListDeviceDetailRequest& request, const ListDeviceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDeviceDetailOutcomeCallable listDeviceDetailCallable(const Model::ListDeviceDetailRequest& request) const;
			ListDeviceGenderStatisticsOutcome listDeviceGenderStatistics(const Model::ListDeviceGenderStatisticsRequest &request)const;
			void listDeviceGenderStatisticsAsync(const Model::ListDeviceGenderStatisticsRequest& request, const ListDeviceGenderStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDeviceGenderStatisticsOutcomeCallable listDeviceGenderStatisticsCallable(const Model::ListDeviceGenderStatisticsRequest& request) const;
			ListDevicePersonOutcome listDevicePerson(const Model::ListDevicePersonRequest &request)const;
			void listDevicePersonAsync(const Model::ListDevicePersonRequest& request, const ListDevicePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDevicePersonOutcomeCallable listDevicePersonCallable(const Model::ListDevicePersonRequest& request) const;
			ListDevicePersonStatisticsOutcome listDevicePersonStatistics(const Model::ListDevicePersonStatisticsRequest &request)const;
			void listDevicePersonStatisticsAsync(const Model::ListDevicePersonStatisticsRequest& request, const ListDevicePersonStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDevicePersonStatisticsOutcomeCallable listDevicePersonStatisticsCallable(const Model::ListDevicePersonStatisticsRequest& request) const;
			ListMapRouteDetailsOutcome listMapRouteDetails(const Model::ListMapRouteDetailsRequest &request)const;
			void listMapRouteDetailsAsync(const Model::ListMapRouteDetailsRequest& request, const ListMapRouteDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMapRouteDetailsOutcomeCallable listMapRouteDetailsCallable(const Model::ListMapRouteDetailsRequest& request) const;
			ListPersonDetailsOutcome listPersonDetails(const Model::ListPersonDetailsRequest &request)const;
			void listPersonDetailsAsync(const Model::ListPersonDetailsRequest& request, const ListPersonDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPersonDetailsOutcomeCallable listPersonDetailsCallable(const Model::ListPersonDetailsRequest& request) const;
			ListPersonResultOutcome listPersonResult(const Model::ListPersonResultRequest &request)const;
			void listPersonResultAsync(const Model::ListPersonResultRequest& request, const ListPersonResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPersonResultOutcomeCallable listPersonResultCallable(const Model::ListPersonResultRequest& request) const;
			ListPersonTagOutcome listPersonTag(const Model::ListPersonTagRequest &request)const;
			void listPersonTagAsync(const Model::ListPersonTagRequest& request, const ListPersonTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPersonTagOutcomeCallable listPersonTagCallable(const Model::ListPersonTagRequest& request) const;
			ListPersonTopOutcome listPersonTop(const Model::ListPersonTopRequest &request)const;
			void listPersonTopAsync(const Model::ListPersonTopRequest& request, const ListPersonTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPersonTopOutcomeCallable listPersonTopCallable(const Model::ListPersonTopRequest& request) const;
			ListPersonTrackOutcome listPersonTrack(const Model::ListPersonTrackRequest &request)const;
			void listPersonTrackAsync(const Model::ListPersonTrackRequest& request, const ListPersonTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPersonTrackOutcomeCallable listPersonTrackCallable(const Model::ListPersonTrackRequest& request) const;
			ListRangeDeviceOutcome listRangeDevice(const Model::ListRangeDeviceRequest &request)const;
			void listRangeDeviceAsync(const Model::ListRangeDeviceRequest& request, const ListRangeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRangeDeviceOutcomeCallable listRangeDeviceCallable(const Model::ListRangeDeviceRequest& request) const;
			ListStorageStatisticsOutcome listStorageStatistics(const Model::ListStorageStatisticsRequest &request)const;
			void listStorageStatisticsAsync(const Model::ListStorageStatisticsRequest& request, const ListStorageStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListStorageStatisticsOutcomeCallable listStorageStatisticsCallable(const Model::ListStorageStatisticsRequest& request) const;
			ListStructureStatisticsOutcome listStructureStatistics(const Model::ListStructureStatisticsRequest &request)const;
			void listStructureStatisticsAsync(const Model::ListStructureStatisticsRequest& request, const ListStructureStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListStructureStatisticsOutcomeCallable listStructureStatisticsCallable(const Model::ListStructureStatisticsRequest& request) const;
			ListVehicleDetailsOutcome listVehicleDetails(const Model::ListVehicleDetailsRequest &request)const;
			void listVehicleDetailsAsync(const Model::ListVehicleDetailsRequest& request, const ListVehicleDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVehicleDetailsOutcomeCallable listVehicleDetailsCallable(const Model::ListVehicleDetailsRequest& request) const;
			ListVehicleResultsOutcome listVehicleResults(const Model::ListVehicleResultsRequest &request)const;
			void listVehicleResultsAsync(const Model::ListVehicleResultsRequest& request, const ListVehicleResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVehicleResultsOutcomeCallable listVehicleResultsCallable(const Model::ListVehicleResultsRequest& request) const;
			ListVehicleTagDistributeOutcome listVehicleTagDistribute(const Model::ListVehicleTagDistributeRequest &request)const;
			void listVehicleTagDistributeAsync(const Model::ListVehicleTagDistributeRequest& request, const ListVehicleTagDistributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVehicleTagDistributeOutcomeCallable listVehicleTagDistributeCallable(const Model::ListVehicleTagDistributeRequest& request) const;
			ListVehicleTopOutcome listVehicleTop(const Model::ListVehicleTopRequest &request)const;
			void listVehicleTopAsync(const Model::ListVehicleTopRequest& request, const ListVehicleTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVehicleTopOutcomeCallable listVehicleTopCallable(const Model::ListVehicleTopRequest& request) const;
			ListVehicleTrackOutcome listVehicleTrack(const Model::ListVehicleTrackRequest &request)const;
			void listVehicleTrackAsync(const Model::ListVehicleTrackRequest& request, const ListVehicleTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVehicleTrackOutcomeCallable listVehicleTrackCallable(const Model::ListVehicleTrackRequest& request) const;
			RecognizeImageOutcome recognizeImage(const Model::RecognizeImageRequest &request)const;
			void recognizeImageAsync(const Model::RecognizeImageRequest& request, const RecognizeImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecognizeImageOutcomeCallable recognizeImageCallable(const Model::RecognizeImageRequest& request) const;
			SearchObjectOutcome searchObject(const Model::SearchObjectRequest &request)const;
			void searchObjectAsync(const Model::SearchObjectRequest& request, const SearchObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchObjectOutcomeCallable searchObjectCallable(const Model::SearchObjectRequest& request) const;
			UnbindDeviceOutcome unbindDevice(const Model::UnbindDeviceRequest &request)const;
			void unbindDeviceAsync(const Model::UnbindDeviceRequest& request, const UnbindDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindDeviceOutcomeCallable unbindDeviceCallable(const Model::UnbindDeviceRequest& request) const;
			UpdateProjectOutcome updateProject(const Model::UpdateProjectRequest &request)const;
			void updateProjectAsync(const Model::UpdateProjectRequest& request, const UpdateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProjectOutcomeCallable updateProjectCallable(const Model::UpdateProjectRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CDRS_CDRSCLIENT_H_
