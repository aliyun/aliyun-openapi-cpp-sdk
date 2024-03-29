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

#ifndef ALIBABACLOUD_REID_CLOUD_REID_CLOUDCLIENT_H_
#define ALIBABACLOUD_REID_CLOUD_REID_CLOUDCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Reid_cloudExport.h"
#include "model/DescribeBaseStatisticsRequest.h"
#include "model/DescribeBaseStatisticsResult.h"
#include "model/DescribeCameraStatisticsRequest.h"
#include "model/DescribeCameraStatisticsResult.h"
#include "model/DescribeCursorRequest.h"
#include "model/DescribeCursorResult.h"
#include "model/DescribeCustomerFlowByLocationRequest.h"
#include "model/DescribeCustomerFlowByLocationResult.h"
#include "model/DescribeCustomerFlowByLocationOfflineRequest.h"
#include "model/DescribeCustomerFlowByLocationOfflineResult.h"
#include "model/DescribeDevicesRequest.h"
#include "model/DescribeDevicesResult.h"
#include "model/DescribeHeatMapRequest.h"
#include "model/DescribeHeatMapResult.h"
#include "model/DescribeImageUrlsRequest.h"
#include "model/DescribeImageUrlsResult.h"
#include "model/DescribeIpcLiveAddressRequest.h"
#include "model/DescribeIpcLiveAddressResult.h"
#include "model/DescribeOverviewDataRequest.h"
#include "model/DescribeOverviewDataResult.h"
#include "model/ImportSpecialPersonnelRequest.h"
#include "model/ImportSpecialPersonnelResult.h"
#include "model/ListActionDataRequest.h"
#include "model/ListActionDataResult.h"
#include "model/ListDevicesImagesRequest.h"
#include "model/ListDevicesImagesResult.h"
#include "model/ListEmapRequest.h"
#include "model/ListEmapResult.h"
#include "model/ListLocationRequest.h"
#include "model/ListLocationResult.h"
#include "model/ListMaskDetectionResultsRequest.h"
#include "model/ListMaskDetectionResultsResult.h"
#include "model/ListPersonByImageRequest.h"
#include "model/ListPersonByImageResult.h"
#include "model/ListSpecialPersonnelByImageRequest.h"
#include "model/ListSpecialPersonnelByImageResult.h"
#include "model/ListStoreRequest.h"
#include "model/ListStoreResult.h"
#include "model/PullActionDataRequest.h"
#include "model/PullActionDataResult.h"


namespace AlibabaCloud
{
	namespace Reid_cloud
	{
		class ALIBABACLOUD_REID_CLOUD_EXPORT Reid_cloudClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribeBaseStatisticsResult> DescribeBaseStatisticsOutcome;
			typedef std::future<DescribeBaseStatisticsOutcome> DescribeBaseStatisticsOutcomeCallable;
			typedef std::function<void(const Reid_cloudClient*, const Model::DescribeBaseStatisticsRequest&, const DescribeBaseStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaseStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCameraStatisticsResult> DescribeCameraStatisticsOutcome;
			typedef std::future<DescribeCameraStatisticsOutcome> DescribeCameraStatisticsOutcomeCallable;
			typedef std::function<void(const Reid_cloudClient*, const Model::DescribeCameraStatisticsRequest&, const DescribeCameraStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCameraStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCursorResult> DescribeCursorOutcome;
			typedef std::future<DescribeCursorOutcome> DescribeCursorOutcomeCallable;
			typedef std::function<void(const Reid_cloudClient*, const Model::DescribeCursorRequest&, const DescribeCursorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCursorAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomerFlowByLocationResult> DescribeCustomerFlowByLocationOutcome;
			typedef std::future<DescribeCustomerFlowByLocationOutcome> DescribeCustomerFlowByLocationOutcomeCallable;
			typedef std::function<void(const Reid_cloudClient*, const Model::DescribeCustomerFlowByLocationRequest&, const DescribeCustomerFlowByLocationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomerFlowByLocationAsyncHandler;
			typedef Outcome<Error, Model::DescribeCustomerFlowByLocationOfflineResult> DescribeCustomerFlowByLocationOfflineOutcome;
			typedef std::future<DescribeCustomerFlowByLocationOfflineOutcome> DescribeCustomerFlowByLocationOfflineOutcomeCallable;
			typedef std::function<void(const Reid_cloudClient*, const Model::DescribeCustomerFlowByLocationOfflineRequest&, const DescribeCustomerFlowByLocationOfflineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomerFlowByLocationOfflineAsyncHandler;
			typedef Outcome<Error, Model::DescribeDevicesResult> DescribeDevicesOutcome;
			typedef std::future<DescribeDevicesOutcome> DescribeDevicesOutcomeCallable;
			typedef std::function<void(const Reid_cloudClient*, const Model::DescribeDevicesRequest&, const DescribeDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevicesAsyncHandler;
			typedef Outcome<Error, Model::DescribeHeatMapResult> DescribeHeatMapOutcome;
			typedef std::future<DescribeHeatMapOutcome> DescribeHeatMapOutcomeCallable;
			typedef std::function<void(const Reid_cloudClient*, const Model::DescribeHeatMapRequest&, const DescribeHeatMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHeatMapAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageUrlsResult> DescribeImageUrlsOutcome;
			typedef std::future<DescribeImageUrlsOutcome> DescribeImageUrlsOutcomeCallable;
			typedef std::function<void(const Reid_cloudClient*, const Model::DescribeImageUrlsRequest&, const DescribeImageUrlsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageUrlsAsyncHandler;
			typedef Outcome<Error, Model::DescribeIpcLiveAddressResult> DescribeIpcLiveAddressOutcome;
			typedef std::future<DescribeIpcLiveAddressOutcome> DescribeIpcLiveAddressOutcomeCallable;
			typedef std::function<void(const Reid_cloudClient*, const Model::DescribeIpcLiveAddressRequest&, const DescribeIpcLiveAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpcLiveAddressAsyncHandler;
			typedef Outcome<Error, Model::DescribeOverviewDataResult> DescribeOverviewDataOutcome;
			typedef std::future<DescribeOverviewDataOutcome> DescribeOverviewDataOutcomeCallable;
			typedef std::function<void(const Reid_cloudClient*, const Model::DescribeOverviewDataRequest&, const DescribeOverviewDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOverviewDataAsyncHandler;
			typedef Outcome<Error, Model::ImportSpecialPersonnelResult> ImportSpecialPersonnelOutcome;
			typedef std::future<ImportSpecialPersonnelOutcome> ImportSpecialPersonnelOutcomeCallable;
			typedef std::function<void(const Reid_cloudClient*, const Model::ImportSpecialPersonnelRequest&, const ImportSpecialPersonnelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportSpecialPersonnelAsyncHandler;
			typedef Outcome<Error, Model::ListActionDataResult> ListActionDataOutcome;
			typedef std::future<ListActionDataOutcome> ListActionDataOutcomeCallable;
			typedef std::function<void(const Reid_cloudClient*, const Model::ListActionDataRequest&, const ListActionDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListActionDataAsyncHandler;
			typedef Outcome<Error, Model::ListDevicesImagesResult> ListDevicesImagesOutcome;
			typedef std::future<ListDevicesImagesOutcome> ListDevicesImagesOutcomeCallable;
			typedef std::function<void(const Reid_cloudClient*, const Model::ListDevicesImagesRequest&, const ListDevicesImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDevicesImagesAsyncHandler;
			typedef Outcome<Error, Model::ListEmapResult> ListEmapOutcome;
			typedef std::future<ListEmapOutcome> ListEmapOutcomeCallable;
			typedef std::function<void(const Reid_cloudClient*, const Model::ListEmapRequest&, const ListEmapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEmapAsyncHandler;
			typedef Outcome<Error, Model::ListLocationResult> ListLocationOutcome;
			typedef std::future<ListLocationOutcome> ListLocationOutcomeCallable;
			typedef std::function<void(const Reid_cloudClient*, const Model::ListLocationRequest&, const ListLocationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLocationAsyncHandler;
			typedef Outcome<Error, Model::ListMaskDetectionResultsResult> ListMaskDetectionResultsOutcome;
			typedef std::future<ListMaskDetectionResultsOutcome> ListMaskDetectionResultsOutcomeCallable;
			typedef std::function<void(const Reid_cloudClient*, const Model::ListMaskDetectionResultsRequest&, const ListMaskDetectionResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMaskDetectionResultsAsyncHandler;
			typedef Outcome<Error, Model::ListPersonByImageResult> ListPersonByImageOutcome;
			typedef std::future<ListPersonByImageOutcome> ListPersonByImageOutcomeCallable;
			typedef std::function<void(const Reid_cloudClient*, const Model::ListPersonByImageRequest&, const ListPersonByImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPersonByImageAsyncHandler;
			typedef Outcome<Error, Model::ListSpecialPersonnelByImageResult> ListSpecialPersonnelByImageOutcome;
			typedef std::future<ListSpecialPersonnelByImageOutcome> ListSpecialPersonnelByImageOutcomeCallable;
			typedef std::function<void(const Reid_cloudClient*, const Model::ListSpecialPersonnelByImageRequest&, const ListSpecialPersonnelByImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSpecialPersonnelByImageAsyncHandler;
			typedef Outcome<Error, Model::ListStoreResult> ListStoreOutcome;
			typedef std::future<ListStoreOutcome> ListStoreOutcomeCallable;
			typedef std::function<void(const Reid_cloudClient*, const Model::ListStoreRequest&, const ListStoreOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListStoreAsyncHandler;
			typedef Outcome<Error, Model::PullActionDataResult> PullActionDataOutcome;
			typedef std::future<PullActionDataOutcome> PullActionDataOutcomeCallable;
			typedef std::function<void(const Reid_cloudClient*, const Model::PullActionDataRequest&, const PullActionDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PullActionDataAsyncHandler;

			Reid_cloudClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Reid_cloudClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Reid_cloudClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Reid_cloudClient();
			DescribeBaseStatisticsOutcome describeBaseStatistics(const Model::DescribeBaseStatisticsRequest &request)const;
			void describeBaseStatisticsAsync(const Model::DescribeBaseStatisticsRequest& request, const DescribeBaseStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBaseStatisticsOutcomeCallable describeBaseStatisticsCallable(const Model::DescribeBaseStatisticsRequest& request) const;
			DescribeCameraStatisticsOutcome describeCameraStatistics(const Model::DescribeCameraStatisticsRequest &request)const;
			void describeCameraStatisticsAsync(const Model::DescribeCameraStatisticsRequest& request, const DescribeCameraStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCameraStatisticsOutcomeCallable describeCameraStatisticsCallable(const Model::DescribeCameraStatisticsRequest& request) const;
			DescribeCursorOutcome describeCursor(const Model::DescribeCursorRequest &request)const;
			void describeCursorAsync(const Model::DescribeCursorRequest& request, const DescribeCursorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCursorOutcomeCallable describeCursorCallable(const Model::DescribeCursorRequest& request) const;
			DescribeCustomerFlowByLocationOutcome describeCustomerFlowByLocation(const Model::DescribeCustomerFlowByLocationRequest &request)const;
			void describeCustomerFlowByLocationAsync(const Model::DescribeCustomerFlowByLocationRequest& request, const DescribeCustomerFlowByLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomerFlowByLocationOutcomeCallable describeCustomerFlowByLocationCallable(const Model::DescribeCustomerFlowByLocationRequest& request) const;
			DescribeCustomerFlowByLocationOfflineOutcome describeCustomerFlowByLocationOffline(const Model::DescribeCustomerFlowByLocationOfflineRequest &request)const;
			void describeCustomerFlowByLocationOfflineAsync(const Model::DescribeCustomerFlowByLocationOfflineRequest& request, const DescribeCustomerFlowByLocationOfflineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCustomerFlowByLocationOfflineOutcomeCallable describeCustomerFlowByLocationOfflineCallable(const Model::DescribeCustomerFlowByLocationOfflineRequest& request) const;
			DescribeDevicesOutcome describeDevices(const Model::DescribeDevicesRequest &request)const;
			void describeDevicesAsync(const Model::DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDevicesOutcomeCallable describeDevicesCallable(const Model::DescribeDevicesRequest& request) const;
			DescribeHeatMapOutcome describeHeatMap(const Model::DescribeHeatMapRequest &request)const;
			void describeHeatMapAsync(const Model::DescribeHeatMapRequest& request, const DescribeHeatMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHeatMapOutcomeCallable describeHeatMapCallable(const Model::DescribeHeatMapRequest& request) const;
			DescribeImageUrlsOutcome describeImageUrls(const Model::DescribeImageUrlsRequest &request)const;
			void describeImageUrlsAsync(const Model::DescribeImageUrlsRequest& request, const DescribeImageUrlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageUrlsOutcomeCallable describeImageUrlsCallable(const Model::DescribeImageUrlsRequest& request) const;
			DescribeIpcLiveAddressOutcome describeIpcLiveAddress(const Model::DescribeIpcLiveAddressRequest &request)const;
			void describeIpcLiveAddressAsync(const Model::DescribeIpcLiveAddressRequest& request, const DescribeIpcLiveAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIpcLiveAddressOutcomeCallable describeIpcLiveAddressCallable(const Model::DescribeIpcLiveAddressRequest& request) const;
			DescribeOverviewDataOutcome describeOverviewData(const Model::DescribeOverviewDataRequest &request)const;
			void describeOverviewDataAsync(const Model::DescribeOverviewDataRequest& request, const DescribeOverviewDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOverviewDataOutcomeCallable describeOverviewDataCallable(const Model::DescribeOverviewDataRequest& request) const;
			ImportSpecialPersonnelOutcome importSpecialPersonnel(const Model::ImportSpecialPersonnelRequest &request)const;
			void importSpecialPersonnelAsync(const Model::ImportSpecialPersonnelRequest& request, const ImportSpecialPersonnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportSpecialPersonnelOutcomeCallable importSpecialPersonnelCallable(const Model::ImportSpecialPersonnelRequest& request) const;
			ListActionDataOutcome listActionData(const Model::ListActionDataRequest &request)const;
			void listActionDataAsync(const Model::ListActionDataRequest& request, const ListActionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListActionDataOutcomeCallable listActionDataCallable(const Model::ListActionDataRequest& request) const;
			ListDevicesImagesOutcome listDevicesImages(const Model::ListDevicesImagesRequest &request)const;
			void listDevicesImagesAsync(const Model::ListDevicesImagesRequest& request, const ListDevicesImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDevicesImagesOutcomeCallable listDevicesImagesCallable(const Model::ListDevicesImagesRequest& request) const;
			ListEmapOutcome listEmap(const Model::ListEmapRequest &request)const;
			void listEmapAsync(const Model::ListEmapRequest& request, const ListEmapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEmapOutcomeCallable listEmapCallable(const Model::ListEmapRequest& request) const;
			ListLocationOutcome listLocation(const Model::ListLocationRequest &request)const;
			void listLocationAsync(const Model::ListLocationRequest& request, const ListLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLocationOutcomeCallable listLocationCallable(const Model::ListLocationRequest& request) const;
			ListMaskDetectionResultsOutcome listMaskDetectionResults(const Model::ListMaskDetectionResultsRequest &request)const;
			void listMaskDetectionResultsAsync(const Model::ListMaskDetectionResultsRequest& request, const ListMaskDetectionResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMaskDetectionResultsOutcomeCallable listMaskDetectionResultsCallable(const Model::ListMaskDetectionResultsRequest& request) const;
			ListPersonByImageOutcome listPersonByImage(const Model::ListPersonByImageRequest &request)const;
			void listPersonByImageAsync(const Model::ListPersonByImageRequest& request, const ListPersonByImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPersonByImageOutcomeCallable listPersonByImageCallable(const Model::ListPersonByImageRequest& request) const;
			ListSpecialPersonnelByImageOutcome listSpecialPersonnelByImage(const Model::ListSpecialPersonnelByImageRequest &request)const;
			void listSpecialPersonnelByImageAsync(const Model::ListSpecialPersonnelByImageRequest& request, const ListSpecialPersonnelByImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSpecialPersonnelByImageOutcomeCallable listSpecialPersonnelByImageCallable(const Model::ListSpecialPersonnelByImageRequest& request) const;
			ListStoreOutcome listStore(const Model::ListStoreRequest &request)const;
			void listStoreAsync(const Model::ListStoreRequest& request, const ListStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListStoreOutcomeCallable listStoreCallable(const Model::ListStoreRequest& request) const;
			PullActionDataOutcome pullActionData(const Model::PullActionDataRequest &request)const;
			void pullActionDataAsync(const Model::PullActionDataRequest& request, const PullActionDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PullActionDataOutcomeCallable pullActionDataCallable(const Model::PullActionDataRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_REID_CLOUD_REID_CLOUDCLIENT_H_
