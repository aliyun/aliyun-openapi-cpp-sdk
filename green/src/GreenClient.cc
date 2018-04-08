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

#include <alibabacloud/green/GreenClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Green;
using namespace AlibabaCloud::Green::Model;

namespace
{
	const std::string SERVICE_NAME = "Green";
}

GreenClient::GreenClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "green");
}

GreenClient::GreenClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "green");
}

GreenClient::GreenClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "green");
}

GreenClient::~GreenClient()
{}

GreenClient::ImageSyncScanOutcome GreenClient::imageSyncScan(const ImageSyncScanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImageSyncScanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImageSyncScanOutcome(ImageSyncScanResult(outcome.result()));
	else
		return ImageSyncScanOutcome(outcome.error());
}

void GreenClient::imageSyncScanAsync(const ImageSyncScanRequest& request, const ImageSyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, imageSyncScan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::ImageSyncScanOutcomeCallable GreenClient::imageSyncScanCallable(const ImageSyncScanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImageSyncScanOutcome()>>(
			[this, request]()
			{
			return this->imageSyncScan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::GetPersonsOutcome GreenClient::getPersons(const GetPersonsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPersonsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPersonsOutcome(GetPersonsResult(outcome.result()));
	else
		return GetPersonsOutcome(outcome.error());
}

void GreenClient::getPersonsAsync(const GetPersonsRequest& request, const GetPersonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPersons(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::GetPersonsOutcomeCallable GreenClient::getPersonsCallable(const GetPersonsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPersonsOutcome()>>(
			[this, request]()
			{
			return this->getPersons(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::GetPersonOutcome GreenClient::getPerson(const GetPersonRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPersonOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPersonOutcome(GetPersonResult(outcome.result()));
	else
		return GetPersonOutcome(outcome.error());
}

void GreenClient::getPersonAsync(const GetPersonRequest& request, const GetPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPerson(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::GetPersonOutcomeCallable GreenClient::getPersonCallable(const GetPersonRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPersonOutcome()>>(
			[this, request]()
			{
			return this->getPerson(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DeleteFacesOutcome GreenClient::deleteFaces(const DeleteFacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteFacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteFacesOutcome(DeleteFacesResult(outcome.result()));
	else
		return DeleteFacesOutcome(outcome.error());
}

void GreenClient::deleteFacesAsync(const DeleteFacesRequest& request, const DeleteFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteFaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DeleteFacesOutcomeCallable GreenClient::deleteFacesCallable(const DeleteFacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteFacesOutcome()>>(
			[this, request]()
			{
			return this->deleteFaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::VideoFeedbackOutcome GreenClient::videoFeedback(const VideoFeedbackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VideoFeedbackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VideoFeedbackOutcome(VideoFeedbackResult(outcome.result()));
	else
		return VideoFeedbackOutcome(outcome.error());
}

void GreenClient::videoFeedbackAsync(const VideoFeedbackRequest& request, const VideoFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, videoFeedback(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::VideoFeedbackOutcomeCallable GreenClient::videoFeedbackCallable(const VideoFeedbackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VideoFeedbackOutcome()>>(
			[this, request]()
			{
			return this->videoFeedback(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DeletePersonOutcome GreenClient::deletePerson(const DeletePersonRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePersonOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePersonOutcome(DeletePersonResult(outcome.result()));
	else
		return DeletePersonOutcome(outcome.error());
}

void GreenClient::deletePersonAsync(const DeletePersonRequest& request, const DeletePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePerson(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DeletePersonOutcomeCallable GreenClient::deletePersonCallable(const DeletePersonRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePersonOutcome()>>(
			[this, request]()
			{
			return this->deletePerson(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::VideoAsyncScanResultsOutcome GreenClient::videoAsyncScanResults(const VideoAsyncScanResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VideoAsyncScanResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VideoAsyncScanResultsOutcome(VideoAsyncScanResultsResult(outcome.result()));
	else
		return VideoAsyncScanResultsOutcome(outcome.error());
}

void GreenClient::videoAsyncScanResultsAsync(const VideoAsyncScanResultsRequest& request, const VideoAsyncScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, videoAsyncScanResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::VideoAsyncScanResultsOutcomeCallable GreenClient::videoAsyncScanResultsCallable(const VideoAsyncScanResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VideoAsyncScanResultsOutcome()>>(
			[this, request]()
			{
			return this->videoAsyncScanResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::AddGroupsOutcome GreenClient::addGroups(const AddGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddGroupsOutcome(AddGroupsResult(outcome.result()));
	else
		return AddGroupsOutcome(outcome.error());
}

void GreenClient::addGroupsAsync(const AddGroupsRequest& request, const AddGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::AddGroupsOutcomeCallable GreenClient::addGroupsCallable(const AddGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddGroupsOutcome()>>(
			[this, request]()
			{
			return this->addGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::FileAsyncScanOutcome GreenClient::fileAsyncScan(const FileAsyncScanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FileAsyncScanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FileAsyncScanOutcome(FileAsyncScanResult(outcome.result()));
	else
		return FileAsyncScanOutcome(outcome.error());
}

void GreenClient::fileAsyncScanAsync(const FileAsyncScanRequest& request, const FileAsyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, fileAsyncScan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::FileAsyncScanOutcomeCallable GreenClient::fileAsyncScanCallable(const FileAsyncScanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FileAsyncScanOutcome()>>(
			[this, request]()
			{
			return this->fileAsyncScan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::SetPersonOutcome GreenClient::setPerson(const SetPersonRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetPersonOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetPersonOutcome(SetPersonResult(outcome.result()));
	else
		return SetPersonOutcome(outcome.error());
}

void GreenClient::setPersonAsync(const SetPersonRequest& request, const SetPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setPerson(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::SetPersonOutcomeCallable GreenClient::setPersonCallable(const SetPersonRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetPersonOutcome()>>(
			[this, request]()
			{
			return this->setPerson(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::TextFeedbackOutcome GreenClient::textFeedback(const TextFeedbackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TextFeedbackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TextFeedbackOutcome(TextFeedbackResult(outcome.result()));
	else
		return TextFeedbackOutcome(outcome.error());
}

void GreenClient::textFeedbackAsync(const TextFeedbackRequest& request, const TextFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, textFeedback(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::TextFeedbackOutcomeCallable GreenClient::textFeedbackCallable(const TextFeedbackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TextFeedbackOutcome()>>(
			[this, request]()
			{
			return this->textFeedback(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::SearchOutcome GreenClient::search(const SearchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SearchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SearchOutcome(SearchResult(outcome.result()));
	else
		return SearchOutcome(outcome.error());
}

void GreenClient::searchAsync(const SearchRequest& request, const SearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, search(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::SearchOutcomeCallable GreenClient::searchCallable(const SearchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SearchOutcome()>>(
			[this, request]()
			{
			return this->search(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::FileAsyncScanResultsOutcome GreenClient::fileAsyncScanResults(const FileAsyncScanResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return FileAsyncScanResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return FileAsyncScanResultsOutcome(FileAsyncScanResultsResult(outcome.result()));
	else
		return FileAsyncScanResultsOutcome(outcome.error());
}

void GreenClient::fileAsyncScanResultsAsync(const FileAsyncScanResultsRequest& request, const FileAsyncScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, fileAsyncScanResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::FileAsyncScanResultsOutcomeCallable GreenClient::fileAsyncScanResultsCallable(const FileAsyncScanResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<FileAsyncScanResultsOutcome()>>(
			[this, request]()
			{
			return this->fileAsyncScanResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::DeleteGroupsOutcome GreenClient::deleteGroups(const DeleteGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGroupsOutcome(DeleteGroupsResult(outcome.result()));
	else
		return DeleteGroupsOutcome(outcome.error());
}

void GreenClient::deleteGroupsAsync(const DeleteGroupsRequest& request, const DeleteGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::DeleteGroupsOutcomeCallable GreenClient::deleteGroupsCallable(const DeleteGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGroupsOutcome()>>(
			[this, request]()
			{
			return this->deleteGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::ImageAsyncScanOutcome GreenClient::imageAsyncScan(const ImageAsyncScanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImageAsyncScanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImageAsyncScanOutcome(ImageAsyncScanResult(outcome.result()));
	else
		return ImageAsyncScanOutcome(outcome.error());
}

void GreenClient::imageAsyncScanAsync(const ImageAsyncScanRequest& request, const ImageAsyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, imageAsyncScan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::ImageAsyncScanOutcomeCallable GreenClient::imageAsyncScanCallable(const ImageAsyncScanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImageAsyncScanOutcome()>>(
			[this, request]()
			{
			return this->imageAsyncScan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::VideoAsyncScanOutcome GreenClient::videoAsyncScan(const VideoAsyncScanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VideoAsyncScanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VideoAsyncScanOutcome(VideoAsyncScanResult(outcome.result()));
	else
		return VideoAsyncScanOutcome(outcome.error());
}

void GreenClient::videoAsyncScanAsync(const VideoAsyncScanRequest& request, const VideoAsyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, videoAsyncScan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::VideoAsyncScanOutcomeCallable GreenClient::videoAsyncScanCallable(const VideoAsyncScanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VideoAsyncScanOutcome()>>(
			[this, request]()
			{
			return this->videoAsyncScan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::ImageAsyncScanResultsOutcome GreenClient::imageAsyncScanResults(const ImageAsyncScanResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImageAsyncScanResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImageAsyncScanResultsOutcome(ImageAsyncScanResultsResult(outcome.result()));
	else
		return ImageAsyncScanResultsOutcome(outcome.error());
}

void GreenClient::imageAsyncScanResultsAsync(const ImageAsyncScanResultsRequest& request, const ImageAsyncScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, imageAsyncScanResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::ImageAsyncScanResultsOutcomeCallable GreenClient::imageAsyncScanResultsCallable(const ImageAsyncScanResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImageAsyncScanResultsOutcome()>>(
			[this, request]()
			{
			return this->imageAsyncScanResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::VoiceAsyncScanResultsOutcome GreenClient::voiceAsyncScanResults(const VoiceAsyncScanResultsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VoiceAsyncScanResultsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VoiceAsyncScanResultsOutcome(VoiceAsyncScanResultsResult(outcome.result()));
	else
		return VoiceAsyncScanResultsOutcome(outcome.error());
}

void GreenClient::voiceAsyncScanResultsAsync(const VoiceAsyncScanResultsRequest& request, const VoiceAsyncScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, voiceAsyncScanResults(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::VoiceAsyncScanResultsOutcomeCallable GreenClient::voiceAsyncScanResultsCallable(const VoiceAsyncScanResultsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VoiceAsyncScanResultsOutcome()>>(
			[this, request]()
			{
			return this->voiceAsyncScanResults(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::GetFacesOutcome GreenClient::getFaces(const GetFacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetFacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetFacesOutcome(GetFacesResult(outcome.result()));
	else
		return GetFacesOutcome(outcome.error());
}

void GreenClient::getFacesAsync(const GetFacesRequest& request, const GetFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getFaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::GetFacesOutcomeCallable GreenClient::getFacesCallable(const GetFacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetFacesOutcome()>>(
			[this, request]()
			{
			return this->getFaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::VoiceAsyncScanOutcome GreenClient::voiceAsyncScan(const VoiceAsyncScanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return VoiceAsyncScanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return VoiceAsyncScanOutcome(VoiceAsyncScanResult(outcome.result()));
	else
		return VoiceAsyncScanOutcome(outcome.error());
}

void GreenClient::voiceAsyncScanAsync(const VoiceAsyncScanRequest& request, const VoiceAsyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, voiceAsyncScan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::VoiceAsyncScanOutcomeCallable GreenClient::voiceAsyncScanCallable(const VoiceAsyncScanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<VoiceAsyncScanOutcome()>>(
			[this, request]()
			{
			return this->voiceAsyncScan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::GetGroupsOutcome GreenClient::getGroups(const GetGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetGroupsOutcome(GetGroupsResult(outcome.result()));
	else
		return GetGroupsOutcome(outcome.error());
}

void GreenClient::getGroupsAsync(const GetGroupsRequest& request, const GetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::GetGroupsOutcomeCallable GreenClient::getGroupsCallable(const GetGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetGroupsOutcome()>>(
			[this, request]()
			{
			return this->getGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::TextScanOutcome GreenClient::textScan(const TextScanRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TextScanOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TextScanOutcome(TextScanResult(outcome.result()));
	else
		return TextScanOutcome(outcome.error());
}

void GreenClient::textScanAsync(const TextScanRequest& request, const TextScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, textScan(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::TextScanOutcomeCallable GreenClient::textScanCallable(const TextScanRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TextScanOutcome()>>(
			[this, request]()
			{
			return this->textScan(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::ImageScanFeedbackOutcome GreenClient::imageScanFeedback(const ImageScanFeedbackRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImageScanFeedbackOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImageScanFeedbackOutcome(ImageScanFeedbackResult(outcome.result()));
	else
		return ImageScanFeedbackOutcome(outcome.error());
}

void GreenClient::imageScanFeedbackAsync(const ImageScanFeedbackRequest& request, const ImageScanFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, imageScanFeedback(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::ImageScanFeedbackOutcomeCallable GreenClient::imageScanFeedbackCallable(const ImageScanFeedbackRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImageScanFeedbackOutcome()>>(
			[this, request]()
			{
			return this->imageScanFeedback(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::AddPersonOutcome GreenClient::addPerson(const AddPersonRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddPersonOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddPersonOutcome(AddPersonResult(outcome.result()));
	else
		return AddPersonOutcome(outcome.error());
}

void GreenClient::addPersonAsync(const AddPersonRequest& request, const AddPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addPerson(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::AddPersonOutcomeCallable GreenClient::addPersonCallable(const AddPersonRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddPersonOutcome()>>(
			[this, request]()
			{
			return this->addPerson(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

GreenClient::AddFacesOutcome GreenClient::addFaces(const AddFacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddFacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddFacesOutcome(AddFacesResult(outcome.result()));
	else
		return AddFacesOutcome(outcome.error());
}

void GreenClient::addFacesAsync(const AddFacesRequest& request, const AddFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addFaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

GreenClient::AddFacesOutcomeCallable GreenClient::addFacesCallable(const AddFacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddFacesOutcome()>>(
			[this, request]()
			{
			return this->addFaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

