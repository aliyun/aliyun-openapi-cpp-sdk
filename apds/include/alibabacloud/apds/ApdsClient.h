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

#ifndef ALIBABACLOUD_APDS_APDSCLIENT_H_
#define ALIBABACLOUD_APDS_APDSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "ApdsExport.h"
#include "model/CreateFileJobRequest.h"
#include "model/CreateFileJobResult.h"
#include "model/CreateMigrationGroupRequest.h"
#include "model/CreateMigrationGroupResult.h"
#include "model/CreateMigrationJobRequest.h"
#include "model/CreateMigrationJobResult.h"
#include "model/CreateSurveyJobRequest.h"
#include "model/CreateSurveyJobResult.h"
#include "model/CreateSurveyJobOfflineRequest.h"
#include "model/CreateSurveyJobOfflineResult.h"
#include "model/DeleteMigrationGroupRequest.h"
#include "model/DeleteMigrationGroupResult.h"
#include "model/DeleteMigrationJobRequest.h"
#include "model/DeleteMigrationJobResult.h"
#include "model/DeleteOssFileRequest.h"
#include "model/DeleteOssFileResult.h"
#include "model/DeleteSurveyJobRequest.h"
#include "model/DeleteSurveyJobResult.h"
#include "model/DeleteSurveyResourcesRequest.h"
#include "model/DeleteSurveyResourcesResult.h"
#include "model/DescribeMigrationJobConfigRequest.h"
#include "model/DescribeMigrationJobConfigResult.h"
#include "model/DescribeMigrationJobCountRequest.h"
#include "model/DescribeMigrationJobCountResult.h"
#include "model/DescribeOssStsRequest.h"
#include "model/DescribeOssStsResult.h"
#include "model/DescribeSummaryByStatusRequest.h"
#include "model/DescribeSummaryByStatusResult.h"
#include "model/DescribeSummaryByStatusAndGroupRequest.h"
#include "model/DescribeSummaryByStatusAndGroupResult.h"
#include "model/DescribeSurveyJobRequest.h"
#include "model/DescribeSurveyJobResult.h"
#include "model/DescribeSurveyJobCountRequest.h"
#include "model/DescribeSurveyJobCountResult.h"
#include "model/DescribeSurveyResourceTagRequest.h"
#include "model/DescribeSurveyResourceTagResult.h"
#include "model/DescribeSurveyTemplateRequest.h"
#include "model/DescribeSurveyTemplateResult.h"
#include "model/ListMigrationJobsRequest.h"
#include "model/ListMigrationJobsResult.h"
#include "model/ListRegionsRequest.h"
#include "model/ListRegionsResult.h"
#include "model/ListSurveyJobDownLoadJobsRequest.h"
#include "model/ListSurveyJobDownLoadJobsResult.h"
#include "model/ListSurveyJobsRequest.h"
#include "model/ListSurveyJobsResult.h"
#include "model/ListSurveyResourceByMigrationGroupsRequest.h"
#include "model/ListSurveyResourceByMigrationGroupsResult.h"
#include "model/ListSurveyResourceConnectionsRequest.h"
#include "model/ListSurveyResourceConnectionsResult.h"
#include "model/ListSurveyResourceTypesRequest.h"
#include "model/ListSurveyResourceTypesResult.h"
#include "model/ListSurveyResourcesDetailRequest.h"
#include "model/ListSurveyResourcesDetailResult.h"
#include "model/RecoverMigrationJobRequest.h"
#include "model/RecoverMigrationJobResult.h"
#include "model/StopSyncMigrationJobRequest.h"
#include "model/StopSyncMigrationJobResult.h"
#include "model/SyncMigrationJobRequest.h"
#include "model/SyncMigrationJobResult.h"


namespace AlibabaCloud
{
	namespace Apds
	{
		class ALIBABACLOUD_APDS_EXPORT ApdsClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateFileJobResult> CreateFileJobOutcome;
			typedef std::future<CreateFileJobOutcome> CreateFileJobOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::CreateFileJobRequest&, const CreateFileJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileJobAsyncHandler;
			typedef Outcome<Error, Model::CreateMigrationGroupResult> CreateMigrationGroupOutcome;
			typedef std::future<CreateMigrationGroupOutcome> CreateMigrationGroupOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::CreateMigrationGroupRequest&, const CreateMigrationGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrationGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateMigrationJobResult> CreateMigrationJobOutcome;
			typedef std::future<CreateMigrationJobOutcome> CreateMigrationJobOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::CreateMigrationJobRequest&, const CreateMigrationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMigrationJobAsyncHandler;
			typedef Outcome<Error, Model::CreateSurveyJobResult> CreateSurveyJobOutcome;
			typedef std::future<CreateSurveyJobOutcome> CreateSurveyJobOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::CreateSurveyJobRequest&, const CreateSurveyJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSurveyJobAsyncHandler;
			typedef Outcome<Error, Model::CreateSurveyJobOfflineResult> CreateSurveyJobOfflineOutcome;
			typedef std::future<CreateSurveyJobOfflineOutcome> CreateSurveyJobOfflineOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::CreateSurveyJobOfflineRequest&, const CreateSurveyJobOfflineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSurveyJobOfflineAsyncHandler;
			typedef Outcome<Error, Model::DeleteMigrationGroupResult> DeleteMigrationGroupOutcome;
			typedef std::future<DeleteMigrationGroupOutcome> DeleteMigrationGroupOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::DeleteMigrationGroupRequest&, const DeleteMigrationGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMigrationGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteMigrationJobResult> DeleteMigrationJobOutcome;
			typedef std::future<DeleteMigrationJobOutcome> DeleteMigrationJobOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::DeleteMigrationJobRequest&, const DeleteMigrationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMigrationJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteOssFileResult> DeleteOssFileOutcome;
			typedef std::future<DeleteOssFileOutcome> DeleteOssFileOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::DeleteOssFileRequest&, const DeleteOssFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOssFileAsyncHandler;
			typedef Outcome<Error, Model::DeleteSurveyJobResult> DeleteSurveyJobOutcome;
			typedef std::future<DeleteSurveyJobOutcome> DeleteSurveyJobOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::DeleteSurveyJobRequest&, const DeleteSurveyJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSurveyJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteSurveyResourcesResult> DeleteSurveyResourcesOutcome;
			typedef std::future<DeleteSurveyResourcesOutcome> DeleteSurveyResourcesOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::DeleteSurveyResourcesRequest&, const DeleteSurveyResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSurveyResourcesAsyncHandler;
			typedef Outcome<Error, Model::DescribeMigrationJobConfigResult> DescribeMigrationJobConfigOutcome;
			typedef std::future<DescribeMigrationJobConfigOutcome> DescribeMigrationJobConfigOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::DescribeMigrationJobConfigRequest&, const DescribeMigrationJobConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationJobConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeMigrationJobCountResult> DescribeMigrationJobCountOutcome;
			typedef std::future<DescribeMigrationJobCountOutcome> DescribeMigrationJobCountOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::DescribeMigrationJobCountRequest&, const DescribeMigrationJobCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMigrationJobCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeOssStsResult> DescribeOssStsOutcome;
			typedef std::future<DescribeOssStsOutcome> DescribeOssStsOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::DescribeOssStsRequest&, const DescribeOssStsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOssStsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSummaryByStatusResult> DescribeSummaryByStatusOutcome;
			typedef std::future<DescribeSummaryByStatusOutcome> DescribeSummaryByStatusOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::DescribeSummaryByStatusRequest&, const DescribeSummaryByStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSummaryByStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeSummaryByStatusAndGroupResult> DescribeSummaryByStatusAndGroupOutcome;
			typedef std::future<DescribeSummaryByStatusAndGroupOutcome> DescribeSummaryByStatusAndGroupOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::DescribeSummaryByStatusAndGroupRequest&, const DescribeSummaryByStatusAndGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSummaryByStatusAndGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeSurveyJobResult> DescribeSurveyJobOutcome;
			typedef std::future<DescribeSurveyJobOutcome> DescribeSurveyJobOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::DescribeSurveyJobRequest&, const DescribeSurveyJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSurveyJobAsyncHandler;
			typedef Outcome<Error, Model::DescribeSurveyJobCountResult> DescribeSurveyJobCountOutcome;
			typedef std::future<DescribeSurveyJobCountOutcome> DescribeSurveyJobCountOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::DescribeSurveyJobCountRequest&, const DescribeSurveyJobCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSurveyJobCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeSurveyResourceTagResult> DescribeSurveyResourceTagOutcome;
			typedef std::future<DescribeSurveyResourceTagOutcome> DescribeSurveyResourceTagOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::DescribeSurveyResourceTagRequest&, const DescribeSurveyResourceTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSurveyResourceTagAsyncHandler;
			typedef Outcome<Error, Model::DescribeSurveyTemplateResult> DescribeSurveyTemplateOutcome;
			typedef std::future<DescribeSurveyTemplateOutcome> DescribeSurveyTemplateOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::DescribeSurveyTemplateRequest&, const DescribeSurveyTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSurveyTemplateAsyncHandler;
			typedef Outcome<Error, Model::ListMigrationJobsResult> ListMigrationJobsOutcome;
			typedef std::future<ListMigrationJobsOutcome> ListMigrationJobsOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::ListMigrationJobsRequest&, const ListMigrationJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMigrationJobsAsyncHandler;
			typedef Outcome<Error, Model::ListRegionsResult> ListRegionsOutcome;
			typedef std::future<ListRegionsOutcome> ListRegionsOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::ListRegionsRequest&, const ListRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRegionsAsyncHandler;
			typedef Outcome<Error, Model::ListSurveyJobDownLoadJobsResult> ListSurveyJobDownLoadJobsOutcome;
			typedef std::future<ListSurveyJobDownLoadJobsOutcome> ListSurveyJobDownLoadJobsOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::ListSurveyJobDownLoadJobsRequest&, const ListSurveyJobDownLoadJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSurveyJobDownLoadJobsAsyncHandler;
			typedef Outcome<Error, Model::ListSurveyJobsResult> ListSurveyJobsOutcome;
			typedef std::future<ListSurveyJobsOutcome> ListSurveyJobsOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::ListSurveyJobsRequest&, const ListSurveyJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSurveyJobsAsyncHandler;
			typedef Outcome<Error, Model::ListSurveyResourceByMigrationGroupsResult> ListSurveyResourceByMigrationGroupsOutcome;
			typedef std::future<ListSurveyResourceByMigrationGroupsOutcome> ListSurveyResourceByMigrationGroupsOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::ListSurveyResourceByMigrationGroupsRequest&, const ListSurveyResourceByMigrationGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSurveyResourceByMigrationGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListSurveyResourceConnectionsResult> ListSurveyResourceConnectionsOutcome;
			typedef std::future<ListSurveyResourceConnectionsOutcome> ListSurveyResourceConnectionsOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::ListSurveyResourceConnectionsRequest&, const ListSurveyResourceConnectionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSurveyResourceConnectionsAsyncHandler;
			typedef Outcome<Error, Model::ListSurveyResourceTypesResult> ListSurveyResourceTypesOutcome;
			typedef std::future<ListSurveyResourceTypesOutcome> ListSurveyResourceTypesOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::ListSurveyResourceTypesRequest&, const ListSurveyResourceTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSurveyResourceTypesAsyncHandler;
			typedef Outcome<Error, Model::ListSurveyResourcesDetailResult> ListSurveyResourcesDetailOutcome;
			typedef std::future<ListSurveyResourcesDetailOutcome> ListSurveyResourcesDetailOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::ListSurveyResourcesDetailRequest&, const ListSurveyResourcesDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSurveyResourcesDetailAsyncHandler;
			typedef Outcome<Error, Model::RecoverMigrationJobResult> RecoverMigrationJobOutcome;
			typedef std::future<RecoverMigrationJobOutcome> RecoverMigrationJobOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::RecoverMigrationJobRequest&, const RecoverMigrationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecoverMigrationJobAsyncHandler;
			typedef Outcome<Error, Model::StopSyncMigrationJobResult> StopSyncMigrationJobOutcome;
			typedef std::future<StopSyncMigrationJobOutcome> StopSyncMigrationJobOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::StopSyncMigrationJobRequest&, const StopSyncMigrationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopSyncMigrationJobAsyncHandler;
			typedef Outcome<Error, Model::SyncMigrationJobResult> SyncMigrationJobOutcome;
			typedef std::future<SyncMigrationJobOutcome> SyncMigrationJobOutcomeCallable;
			typedef std::function<void(const ApdsClient*, const Model::SyncMigrationJobRequest&, const SyncMigrationJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SyncMigrationJobAsyncHandler;

			ApdsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ApdsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ApdsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ApdsClient();
			CreateFileJobOutcome createFileJob(const Model::CreateFileJobRequest &request)const;
			void createFileJobAsync(const Model::CreateFileJobRequest& request, const CreateFileJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFileJobOutcomeCallable createFileJobCallable(const Model::CreateFileJobRequest& request) const;
			CreateMigrationGroupOutcome createMigrationGroup(const Model::CreateMigrationGroupRequest &request)const;
			void createMigrationGroupAsync(const Model::CreateMigrationGroupRequest& request, const CreateMigrationGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMigrationGroupOutcomeCallable createMigrationGroupCallable(const Model::CreateMigrationGroupRequest& request) const;
			CreateMigrationJobOutcome createMigrationJob(const Model::CreateMigrationJobRequest &request)const;
			void createMigrationJobAsync(const Model::CreateMigrationJobRequest& request, const CreateMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMigrationJobOutcomeCallable createMigrationJobCallable(const Model::CreateMigrationJobRequest& request) const;
			CreateSurveyJobOutcome createSurveyJob(const Model::CreateSurveyJobRequest &request)const;
			void createSurveyJobAsync(const Model::CreateSurveyJobRequest& request, const CreateSurveyJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSurveyJobOutcomeCallable createSurveyJobCallable(const Model::CreateSurveyJobRequest& request) const;
			CreateSurveyJobOfflineOutcome createSurveyJobOffline(const Model::CreateSurveyJobOfflineRequest &request)const;
			void createSurveyJobOfflineAsync(const Model::CreateSurveyJobOfflineRequest& request, const CreateSurveyJobOfflineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSurveyJobOfflineOutcomeCallable createSurveyJobOfflineCallable(const Model::CreateSurveyJobOfflineRequest& request) const;
			DeleteMigrationGroupOutcome deleteMigrationGroup(const Model::DeleteMigrationGroupRequest &request)const;
			void deleteMigrationGroupAsync(const Model::DeleteMigrationGroupRequest& request, const DeleteMigrationGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMigrationGroupOutcomeCallable deleteMigrationGroupCallable(const Model::DeleteMigrationGroupRequest& request) const;
			DeleteMigrationJobOutcome deleteMigrationJob(const Model::DeleteMigrationJobRequest &request)const;
			void deleteMigrationJobAsync(const Model::DeleteMigrationJobRequest& request, const DeleteMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMigrationJobOutcomeCallable deleteMigrationJobCallable(const Model::DeleteMigrationJobRequest& request) const;
			DeleteOssFileOutcome deleteOssFile(const Model::DeleteOssFileRequest &request)const;
			void deleteOssFileAsync(const Model::DeleteOssFileRequest& request, const DeleteOssFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteOssFileOutcomeCallable deleteOssFileCallable(const Model::DeleteOssFileRequest& request) const;
			DeleteSurveyJobOutcome deleteSurveyJob(const Model::DeleteSurveyJobRequest &request)const;
			void deleteSurveyJobAsync(const Model::DeleteSurveyJobRequest& request, const DeleteSurveyJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSurveyJobOutcomeCallable deleteSurveyJobCallable(const Model::DeleteSurveyJobRequest& request) const;
			DeleteSurveyResourcesOutcome deleteSurveyResources(const Model::DeleteSurveyResourcesRequest &request)const;
			void deleteSurveyResourcesAsync(const Model::DeleteSurveyResourcesRequest& request, const DeleteSurveyResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSurveyResourcesOutcomeCallable deleteSurveyResourcesCallable(const Model::DeleteSurveyResourcesRequest& request) const;
			DescribeMigrationJobConfigOutcome describeMigrationJobConfig(const Model::DescribeMigrationJobConfigRequest &request)const;
			void describeMigrationJobConfigAsync(const Model::DescribeMigrationJobConfigRequest& request, const DescribeMigrationJobConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMigrationJobConfigOutcomeCallable describeMigrationJobConfigCallable(const Model::DescribeMigrationJobConfigRequest& request) const;
			DescribeMigrationJobCountOutcome describeMigrationJobCount(const Model::DescribeMigrationJobCountRequest &request)const;
			void describeMigrationJobCountAsync(const Model::DescribeMigrationJobCountRequest& request, const DescribeMigrationJobCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMigrationJobCountOutcomeCallable describeMigrationJobCountCallable(const Model::DescribeMigrationJobCountRequest& request) const;
			DescribeOssStsOutcome describeOssSts(const Model::DescribeOssStsRequest &request)const;
			void describeOssStsAsync(const Model::DescribeOssStsRequest& request, const DescribeOssStsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOssStsOutcomeCallable describeOssStsCallable(const Model::DescribeOssStsRequest& request) const;
			DescribeSummaryByStatusOutcome describeSummaryByStatus(const Model::DescribeSummaryByStatusRequest &request)const;
			void describeSummaryByStatusAsync(const Model::DescribeSummaryByStatusRequest& request, const DescribeSummaryByStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSummaryByStatusOutcomeCallable describeSummaryByStatusCallable(const Model::DescribeSummaryByStatusRequest& request) const;
			DescribeSummaryByStatusAndGroupOutcome describeSummaryByStatusAndGroup(const Model::DescribeSummaryByStatusAndGroupRequest &request)const;
			void describeSummaryByStatusAndGroupAsync(const Model::DescribeSummaryByStatusAndGroupRequest& request, const DescribeSummaryByStatusAndGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSummaryByStatusAndGroupOutcomeCallable describeSummaryByStatusAndGroupCallable(const Model::DescribeSummaryByStatusAndGroupRequest& request) const;
			DescribeSurveyJobOutcome describeSurveyJob(const Model::DescribeSurveyJobRequest &request)const;
			void describeSurveyJobAsync(const Model::DescribeSurveyJobRequest& request, const DescribeSurveyJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSurveyJobOutcomeCallable describeSurveyJobCallable(const Model::DescribeSurveyJobRequest& request) const;
			DescribeSurveyJobCountOutcome describeSurveyJobCount(const Model::DescribeSurveyJobCountRequest &request)const;
			void describeSurveyJobCountAsync(const Model::DescribeSurveyJobCountRequest& request, const DescribeSurveyJobCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSurveyJobCountOutcomeCallable describeSurveyJobCountCallable(const Model::DescribeSurveyJobCountRequest& request) const;
			DescribeSurveyResourceTagOutcome describeSurveyResourceTag(const Model::DescribeSurveyResourceTagRequest &request)const;
			void describeSurveyResourceTagAsync(const Model::DescribeSurveyResourceTagRequest& request, const DescribeSurveyResourceTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSurveyResourceTagOutcomeCallable describeSurveyResourceTagCallable(const Model::DescribeSurveyResourceTagRequest& request) const;
			DescribeSurveyTemplateOutcome describeSurveyTemplate(const Model::DescribeSurveyTemplateRequest &request)const;
			void describeSurveyTemplateAsync(const Model::DescribeSurveyTemplateRequest& request, const DescribeSurveyTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSurveyTemplateOutcomeCallable describeSurveyTemplateCallable(const Model::DescribeSurveyTemplateRequest& request) const;
			ListMigrationJobsOutcome listMigrationJobs(const Model::ListMigrationJobsRequest &request)const;
			void listMigrationJobsAsync(const Model::ListMigrationJobsRequest& request, const ListMigrationJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMigrationJobsOutcomeCallable listMigrationJobsCallable(const Model::ListMigrationJobsRequest& request) const;
			ListRegionsOutcome listRegions(const Model::ListRegionsRequest &request)const;
			void listRegionsAsync(const Model::ListRegionsRequest& request, const ListRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRegionsOutcomeCallable listRegionsCallable(const Model::ListRegionsRequest& request) const;
			ListSurveyJobDownLoadJobsOutcome listSurveyJobDownLoadJobs(const Model::ListSurveyJobDownLoadJobsRequest &request)const;
			void listSurveyJobDownLoadJobsAsync(const Model::ListSurveyJobDownLoadJobsRequest& request, const ListSurveyJobDownLoadJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSurveyJobDownLoadJobsOutcomeCallable listSurveyJobDownLoadJobsCallable(const Model::ListSurveyJobDownLoadJobsRequest& request) const;
			ListSurveyJobsOutcome listSurveyJobs(const Model::ListSurveyJobsRequest &request)const;
			void listSurveyJobsAsync(const Model::ListSurveyJobsRequest& request, const ListSurveyJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSurveyJobsOutcomeCallable listSurveyJobsCallable(const Model::ListSurveyJobsRequest& request) const;
			ListSurveyResourceByMigrationGroupsOutcome listSurveyResourceByMigrationGroups(const Model::ListSurveyResourceByMigrationGroupsRequest &request)const;
			void listSurveyResourceByMigrationGroupsAsync(const Model::ListSurveyResourceByMigrationGroupsRequest& request, const ListSurveyResourceByMigrationGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSurveyResourceByMigrationGroupsOutcomeCallable listSurveyResourceByMigrationGroupsCallable(const Model::ListSurveyResourceByMigrationGroupsRequest& request) const;
			ListSurveyResourceConnectionsOutcome listSurveyResourceConnections(const Model::ListSurveyResourceConnectionsRequest &request)const;
			void listSurveyResourceConnectionsAsync(const Model::ListSurveyResourceConnectionsRequest& request, const ListSurveyResourceConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSurveyResourceConnectionsOutcomeCallable listSurveyResourceConnectionsCallable(const Model::ListSurveyResourceConnectionsRequest& request) const;
			ListSurveyResourceTypesOutcome listSurveyResourceTypes(const Model::ListSurveyResourceTypesRequest &request)const;
			void listSurveyResourceTypesAsync(const Model::ListSurveyResourceTypesRequest& request, const ListSurveyResourceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSurveyResourceTypesOutcomeCallable listSurveyResourceTypesCallable(const Model::ListSurveyResourceTypesRequest& request) const;
			ListSurveyResourcesDetailOutcome listSurveyResourcesDetail(const Model::ListSurveyResourcesDetailRequest &request)const;
			void listSurveyResourcesDetailAsync(const Model::ListSurveyResourcesDetailRequest& request, const ListSurveyResourcesDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSurveyResourcesDetailOutcomeCallable listSurveyResourcesDetailCallable(const Model::ListSurveyResourcesDetailRequest& request) const;
			RecoverMigrationJobOutcome recoverMigrationJob(const Model::RecoverMigrationJobRequest &request)const;
			void recoverMigrationJobAsync(const Model::RecoverMigrationJobRequest& request, const RecoverMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecoverMigrationJobOutcomeCallable recoverMigrationJobCallable(const Model::RecoverMigrationJobRequest& request) const;
			StopSyncMigrationJobOutcome stopSyncMigrationJob(const Model::StopSyncMigrationJobRequest &request)const;
			void stopSyncMigrationJobAsync(const Model::StopSyncMigrationJobRequest& request, const StopSyncMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopSyncMigrationJobOutcomeCallable stopSyncMigrationJobCallable(const Model::StopSyncMigrationJobRequest& request) const;
			SyncMigrationJobOutcome syncMigrationJob(const Model::SyncMigrationJobRequest &request)const;
			void syncMigrationJobAsync(const Model::SyncMigrationJobRequest& request, const SyncMigrationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SyncMigrationJobOutcomeCallable syncMigrationJobCallable(const Model::SyncMigrationJobRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_APDS_APDSCLIENT_H_
