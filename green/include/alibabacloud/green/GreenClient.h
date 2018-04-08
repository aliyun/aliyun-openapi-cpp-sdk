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

#ifndef ALIBABACLOUD_GREEN_GREENCLIENT_H_
#define ALIBABACLOUD_GREEN_GREENCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "GreenExport.h"
#include "model/ImageSyncScanRequest.h"
#include "model/ImageSyncScanResult.h"
#include "model/GetPersonsRequest.h"
#include "model/GetPersonsResult.h"
#include "model/GetPersonRequest.h"
#include "model/GetPersonResult.h"
#include "model/DeleteFacesRequest.h"
#include "model/DeleteFacesResult.h"
#include "model/VideoFeedbackRequest.h"
#include "model/VideoFeedbackResult.h"
#include "model/DeletePersonRequest.h"
#include "model/DeletePersonResult.h"
#include "model/VideoAsyncScanResultsRequest.h"
#include "model/VideoAsyncScanResultsResult.h"
#include "model/AddGroupsRequest.h"
#include "model/AddGroupsResult.h"
#include "model/FileAsyncScanRequest.h"
#include "model/FileAsyncScanResult.h"
#include "model/SetPersonRequest.h"
#include "model/SetPersonResult.h"
#include "model/TextFeedbackRequest.h"
#include "model/TextFeedbackResult.h"
#include "model/SearchRequest.h"
#include "model/SearchResult.h"
#include "model/FileAsyncScanResultsRequest.h"
#include "model/FileAsyncScanResultsResult.h"
#include "model/DeleteGroupsRequest.h"
#include "model/DeleteGroupsResult.h"
#include "model/ImageAsyncScanRequest.h"
#include "model/ImageAsyncScanResult.h"
#include "model/VideoAsyncScanRequest.h"
#include "model/VideoAsyncScanResult.h"
#include "model/ImageAsyncScanResultsRequest.h"
#include "model/ImageAsyncScanResultsResult.h"
#include "model/VoiceAsyncScanResultsRequest.h"
#include "model/VoiceAsyncScanResultsResult.h"
#include "model/GetFacesRequest.h"
#include "model/GetFacesResult.h"
#include "model/VoiceAsyncScanRequest.h"
#include "model/VoiceAsyncScanResult.h"
#include "model/GetGroupsRequest.h"
#include "model/GetGroupsResult.h"
#include "model/TextScanRequest.h"
#include "model/TextScanResult.h"
#include "model/ImageScanFeedbackRequest.h"
#include "model/ImageScanFeedbackResult.h"
#include "model/AddPersonRequest.h"
#include "model/AddPersonResult.h"
#include "model/AddFacesRequest.h"
#include "model/AddFacesResult.h"


namespace AlibabaCloud
{
	namespace Green
	{
		class ALIBABACLOUD_GREEN_EXPORT GreenClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::ImageSyncScanResult> ImageSyncScanOutcome;
			typedef std::future<ImageSyncScanOutcome> ImageSyncScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::ImageSyncScanRequest&, const ImageSyncScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImageSyncScanAsyncHandler;
			typedef Outcome<Error, Model::GetPersonsResult> GetPersonsOutcome;
			typedef std::future<GetPersonsOutcome> GetPersonsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::GetPersonsRequest&, const GetPersonsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPersonsAsyncHandler;
			typedef Outcome<Error, Model::GetPersonResult> GetPersonOutcome;
			typedef std::future<GetPersonOutcome> GetPersonOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::GetPersonRequest&, const GetPersonOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPersonAsyncHandler;
			typedef Outcome<Error, Model::DeleteFacesResult> DeleteFacesOutcome;
			typedef std::future<DeleteFacesOutcome> DeleteFacesOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DeleteFacesRequest&, const DeleteFacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFacesAsyncHandler;
			typedef Outcome<Error, Model::VideoFeedbackResult> VideoFeedbackOutcome;
			typedef std::future<VideoFeedbackOutcome> VideoFeedbackOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VideoFeedbackRequest&, const VideoFeedbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VideoFeedbackAsyncHandler;
			typedef Outcome<Error, Model::DeletePersonResult> DeletePersonOutcome;
			typedef std::future<DeletePersonOutcome> DeletePersonOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DeletePersonRequest&, const DeletePersonOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePersonAsyncHandler;
			typedef Outcome<Error, Model::VideoAsyncScanResultsResult> VideoAsyncScanResultsOutcome;
			typedef std::future<VideoAsyncScanResultsOutcome> VideoAsyncScanResultsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VideoAsyncScanResultsRequest&, const VideoAsyncScanResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VideoAsyncScanResultsAsyncHandler;
			typedef Outcome<Error, Model::AddGroupsResult> AddGroupsOutcome;
			typedef std::future<AddGroupsOutcome> AddGroupsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::AddGroupsRequest&, const AddGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddGroupsAsyncHandler;
			typedef Outcome<Error, Model::FileAsyncScanResult> FileAsyncScanOutcome;
			typedef std::future<FileAsyncScanOutcome> FileAsyncScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::FileAsyncScanRequest&, const FileAsyncScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FileAsyncScanAsyncHandler;
			typedef Outcome<Error, Model::SetPersonResult> SetPersonOutcome;
			typedef std::future<SetPersonOutcome> SetPersonOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::SetPersonRequest&, const SetPersonOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetPersonAsyncHandler;
			typedef Outcome<Error, Model::TextFeedbackResult> TextFeedbackOutcome;
			typedef std::future<TextFeedbackOutcome> TextFeedbackOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::TextFeedbackRequest&, const TextFeedbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TextFeedbackAsyncHandler;
			typedef Outcome<Error, Model::SearchResult> SearchOutcome;
			typedef std::future<SearchOutcome> SearchOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::SearchRequest&, const SearchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchAsyncHandler;
			typedef Outcome<Error, Model::FileAsyncScanResultsResult> FileAsyncScanResultsOutcome;
			typedef std::future<FileAsyncScanResultsOutcome> FileAsyncScanResultsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::FileAsyncScanResultsRequest&, const FileAsyncScanResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FileAsyncScanResultsAsyncHandler;
			typedef Outcome<Error, Model::DeleteGroupsResult> DeleteGroupsOutcome;
			typedef std::future<DeleteGroupsOutcome> DeleteGroupsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DeleteGroupsRequest&, const DeleteGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupsAsyncHandler;
			typedef Outcome<Error, Model::ImageAsyncScanResult> ImageAsyncScanOutcome;
			typedef std::future<ImageAsyncScanOutcome> ImageAsyncScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::ImageAsyncScanRequest&, const ImageAsyncScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImageAsyncScanAsyncHandler;
			typedef Outcome<Error, Model::VideoAsyncScanResult> VideoAsyncScanOutcome;
			typedef std::future<VideoAsyncScanOutcome> VideoAsyncScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VideoAsyncScanRequest&, const VideoAsyncScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VideoAsyncScanAsyncHandler;
			typedef Outcome<Error, Model::ImageAsyncScanResultsResult> ImageAsyncScanResultsOutcome;
			typedef std::future<ImageAsyncScanResultsOutcome> ImageAsyncScanResultsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::ImageAsyncScanResultsRequest&, const ImageAsyncScanResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImageAsyncScanResultsAsyncHandler;
			typedef Outcome<Error, Model::VoiceAsyncScanResultsResult> VoiceAsyncScanResultsOutcome;
			typedef std::future<VoiceAsyncScanResultsOutcome> VoiceAsyncScanResultsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VoiceAsyncScanResultsRequest&, const VoiceAsyncScanResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VoiceAsyncScanResultsAsyncHandler;
			typedef Outcome<Error, Model::GetFacesResult> GetFacesOutcome;
			typedef std::future<GetFacesOutcome> GetFacesOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::GetFacesRequest&, const GetFacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFacesAsyncHandler;
			typedef Outcome<Error, Model::VoiceAsyncScanResult> VoiceAsyncScanOutcome;
			typedef std::future<VoiceAsyncScanOutcome> VoiceAsyncScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VoiceAsyncScanRequest&, const VoiceAsyncScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VoiceAsyncScanAsyncHandler;
			typedef Outcome<Error, Model::GetGroupsResult> GetGroupsOutcome;
			typedef std::future<GetGroupsOutcome> GetGroupsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::GetGroupsRequest&, const GetGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupsAsyncHandler;
			typedef Outcome<Error, Model::TextScanResult> TextScanOutcome;
			typedef std::future<TextScanOutcome> TextScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::TextScanRequest&, const TextScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TextScanAsyncHandler;
			typedef Outcome<Error, Model::ImageScanFeedbackResult> ImageScanFeedbackOutcome;
			typedef std::future<ImageScanFeedbackOutcome> ImageScanFeedbackOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::ImageScanFeedbackRequest&, const ImageScanFeedbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImageScanFeedbackAsyncHandler;
			typedef Outcome<Error, Model::AddPersonResult> AddPersonOutcome;
			typedef std::future<AddPersonOutcome> AddPersonOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::AddPersonRequest&, const AddPersonOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddPersonAsyncHandler;
			typedef Outcome<Error, Model::AddFacesResult> AddFacesOutcome;
			typedef std::future<AddFacesOutcome> AddFacesOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::AddFacesRequest&, const AddFacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddFacesAsyncHandler;

			GreenClient(const Credentials &credentials, const ClientConfiguration &configuration);
			GreenClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			GreenClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~GreenClient();
			ImageSyncScanOutcome imageSyncScan(const Model::ImageSyncScanRequest &request)const;
			void imageSyncScanAsync(const Model::ImageSyncScanRequest& request, const ImageSyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImageSyncScanOutcomeCallable imageSyncScanCallable(const Model::ImageSyncScanRequest& request) const;
			GetPersonsOutcome getPersons(const Model::GetPersonsRequest &request)const;
			void getPersonsAsync(const Model::GetPersonsRequest& request, const GetPersonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPersonsOutcomeCallable getPersonsCallable(const Model::GetPersonsRequest& request) const;
			GetPersonOutcome getPerson(const Model::GetPersonRequest &request)const;
			void getPersonAsync(const Model::GetPersonRequest& request, const GetPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPersonOutcomeCallable getPersonCallable(const Model::GetPersonRequest& request) const;
			DeleteFacesOutcome deleteFaces(const Model::DeleteFacesRequest &request)const;
			void deleteFacesAsync(const Model::DeleteFacesRequest& request, const DeleteFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFacesOutcomeCallable deleteFacesCallable(const Model::DeleteFacesRequest& request) const;
			VideoFeedbackOutcome videoFeedback(const Model::VideoFeedbackRequest &request)const;
			void videoFeedbackAsync(const Model::VideoFeedbackRequest& request, const VideoFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VideoFeedbackOutcomeCallable videoFeedbackCallable(const Model::VideoFeedbackRequest& request) const;
			DeletePersonOutcome deletePerson(const Model::DeletePersonRequest &request)const;
			void deletePersonAsync(const Model::DeletePersonRequest& request, const DeletePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePersonOutcomeCallable deletePersonCallable(const Model::DeletePersonRequest& request) const;
			VideoAsyncScanResultsOutcome videoAsyncScanResults(const Model::VideoAsyncScanResultsRequest &request)const;
			void videoAsyncScanResultsAsync(const Model::VideoAsyncScanResultsRequest& request, const VideoAsyncScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VideoAsyncScanResultsOutcomeCallable videoAsyncScanResultsCallable(const Model::VideoAsyncScanResultsRequest& request) const;
			AddGroupsOutcome addGroups(const Model::AddGroupsRequest &request)const;
			void addGroupsAsync(const Model::AddGroupsRequest& request, const AddGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddGroupsOutcomeCallable addGroupsCallable(const Model::AddGroupsRequest& request) const;
			FileAsyncScanOutcome fileAsyncScan(const Model::FileAsyncScanRequest &request)const;
			void fileAsyncScanAsync(const Model::FileAsyncScanRequest& request, const FileAsyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FileAsyncScanOutcomeCallable fileAsyncScanCallable(const Model::FileAsyncScanRequest& request) const;
			SetPersonOutcome setPerson(const Model::SetPersonRequest &request)const;
			void setPersonAsync(const Model::SetPersonRequest& request, const SetPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetPersonOutcomeCallable setPersonCallable(const Model::SetPersonRequest& request) const;
			TextFeedbackOutcome textFeedback(const Model::TextFeedbackRequest &request)const;
			void textFeedbackAsync(const Model::TextFeedbackRequest& request, const TextFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TextFeedbackOutcomeCallable textFeedbackCallable(const Model::TextFeedbackRequest& request) const;
			SearchOutcome search(const Model::SearchRequest &request)const;
			void searchAsync(const Model::SearchRequest& request, const SearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchOutcomeCallable searchCallable(const Model::SearchRequest& request) const;
			FileAsyncScanResultsOutcome fileAsyncScanResults(const Model::FileAsyncScanResultsRequest &request)const;
			void fileAsyncScanResultsAsync(const Model::FileAsyncScanResultsRequest& request, const FileAsyncScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FileAsyncScanResultsOutcomeCallable fileAsyncScanResultsCallable(const Model::FileAsyncScanResultsRequest& request) const;
			DeleteGroupsOutcome deleteGroups(const Model::DeleteGroupsRequest &request)const;
			void deleteGroupsAsync(const Model::DeleteGroupsRequest& request, const DeleteGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGroupsOutcomeCallable deleteGroupsCallable(const Model::DeleteGroupsRequest& request) const;
			ImageAsyncScanOutcome imageAsyncScan(const Model::ImageAsyncScanRequest &request)const;
			void imageAsyncScanAsync(const Model::ImageAsyncScanRequest& request, const ImageAsyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImageAsyncScanOutcomeCallable imageAsyncScanCallable(const Model::ImageAsyncScanRequest& request) const;
			VideoAsyncScanOutcome videoAsyncScan(const Model::VideoAsyncScanRequest &request)const;
			void videoAsyncScanAsync(const Model::VideoAsyncScanRequest& request, const VideoAsyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VideoAsyncScanOutcomeCallable videoAsyncScanCallable(const Model::VideoAsyncScanRequest& request) const;
			ImageAsyncScanResultsOutcome imageAsyncScanResults(const Model::ImageAsyncScanResultsRequest &request)const;
			void imageAsyncScanResultsAsync(const Model::ImageAsyncScanResultsRequest& request, const ImageAsyncScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImageAsyncScanResultsOutcomeCallable imageAsyncScanResultsCallable(const Model::ImageAsyncScanResultsRequest& request) const;
			VoiceAsyncScanResultsOutcome voiceAsyncScanResults(const Model::VoiceAsyncScanResultsRequest &request)const;
			void voiceAsyncScanResultsAsync(const Model::VoiceAsyncScanResultsRequest& request, const VoiceAsyncScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VoiceAsyncScanResultsOutcomeCallable voiceAsyncScanResultsCallable(const Model::VoiceAsyncScanResultsRequest& request) const;
			GetFacesOutcome getFaces(const Model::GetFacesRequest &request)const;
			void getFacesAsync(const Model::GetFacesRequest& request, const GetFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFacesOutcomeCallable getFacesCallable(const Model::GetFacesRequest& request) const;
			VoiceAsyncScanOutcome voiceAsyncScan(const Model::VoiceAsyncScanRequest &request)const;
			void voiceAsyncScanAsync(const Model::VoiceAsyncScanRequest& request, const VoiceAsyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VoiceAsyncScanOutcomeCallable voiceAsyncScanCallable(const Model::VoiceAsyncScanRequest& request) const;
			GetGroupsOutcome getGroups(const Model::GetGroupsRequest &request)const;
			void getGroupsAsync(const Model::GetGroupsRequest& request, const GetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGroupsOutcomeCallable getGroupsCallable(const Model::GetGroupsRequest& request) const;
			TextScanOutcome textScan(const Model::TextScanRequest &request)const;
			void textScanAsync(const Model::TextScanRequest& request, const TextScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TextScanOutcomeCallable textScanCallable(const Model::TextScanRequest& request) const;
			ImageScanFeedbackOutcome imageScanFeedback(const Model::ImageScanFeedbackRequest &request)const;
			void imageScanFeedbackAsync(const Model::ImageScanFeedbackRequest& request, const ImageScanFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImageScanFeedbackOutcomeCallable imageScanFeedbackCallable(const Model::ImageScanFeedbackRequest& request) const;
			AddPersonOutcome addPerson(const Model::AddPersonRequest &request)const;
			void addPersonAsync(const Model::AddPersonRequest& request, const AddPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddPersonOutcomeCallable addPersonCallable(const Model::AddPersonRequest& request) const;
			AddFacesOutcome addFaces(const Model::AddFacesRequest &request)const;
			void addFacesAsync(const Model::AddFacesRequest& request, const AddFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddFacesOutcomeCallable addFacesCallable(const Model::AddFacesRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_GREEN_GREENCLIENT_H_
