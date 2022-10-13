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

#include <alibabacloud/push/PushClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Push;
using namespace AlibabaCloud::Push::Model;

namespace
{
	const std::string SERVICE_NAME = "Push";
}

PushClient::PushClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

PushClient::PushClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

PushClient::PushClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

PushClient::~PushClient()
{}

PushClient::BindAliasOutcome PushClient::bindAlias(const BindAliasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindAliasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindAliasOutcome(BindAliasResult(outcome.result()));
	else
		return BindAliasOutcome(outcome.error());
}

void PushClient::bindAliasAsync(const BindAliasRequest& request, const BindAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindAlias(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::BindAliasOutcomeCallable PushClient::bindAliasCallable(const BindAliasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindAliasOutcome()>>(
			[this, request]()
			{
			return this->bindAlias(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::BindPhoneOutcome PushClient::bindPhone(const BindPhoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindPhoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindPhoneOutcome(BindPhoneResult(outcome.result()));
	else
		return BindPhoneOutcome(outcome.error());
}

void PushClient::bindPhoneAsync(const BindPhoneRequest& request, const BindPhoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindPhone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::BindPhoneOutcomeCallable PushClient::bindPhoneCallable(const BindPhoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindPhoneOutcome()>>(
			[this, request]()
			{
			return this->bindPhone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::BindTagOutcome PushClient::bindTag(const BindTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindTagOutcome(BindTagResult(outcome.result()));
	else
		return BindTagOutcome(outcome.error());
}

void PushClient::bindTagAsync(const BindTagRequest& request, const BindTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::BindTagOutcomeCallable PushClient::bindTagCallable(const BindTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindTagOutcome()>>(
			[this, request]()
			{
			return this->bindTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::CancelPushOutcome PushClient::cancelPush(const CancelPushRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelPushOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelPushOutcome(CancelPushResult(outcome.result()));
	else
		return CancelPushOutcome(outcome.error());
}

void PushClient::cancelPushAsync(const CancelPushRequest& request, const CancelPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelPush(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::CancelPushOutcomeCallable PushClient::cancelPushCallable(const CancelPushRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelPushOutcome()>>(
			[this, request]()
			{
			return this->cancelPush(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::CheckCertificateOutcome PushClient::checkCertificate(const CheckCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckCertificateOutcome(CheckCertificateResult(outcome.result()));
	else
		return CheckCertificateOutcome(outcome.error());
}

void PushClient::checkCertificateAsync(const CheckCertificateRequest& request, const CheckCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::CheckCertificateOutcomeCallable PushClient::checkCertificateCallable(const CheckCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckCertificateOutcome()>>(
			[this, request]()
			{
			return this->checkCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::CheckDeviceOutcome PushClient::checkDevice(const CheckDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckDeviceOutcome(CheckDeviceResult(outcome.result()));
	else
		return CheckDeviceOutcome(outcome.error());
}

void PushClient::checkDeviceAsync(const CheckDeviceRequest& request, const CheckDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::CheckDeviceOutcomeCallable PushClient::checkDeviceCallable(const CheckDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckDeviceOutcome()>>(
			[this, request]()
			{
			return this->checkDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::CheckDevicesOutcome PushClient::checkDevices(const CheckDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CheckDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CheckDevicesOutcome(CheckDevicesResult(outcome.result()));
	else
		return CheckDevicesOutcome(outcome.error());
}

void PushClient::checkDevicesAsync(const CheckDevicesRequest& request, const CheckDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, checkDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::CheckDevicesOutcomeCallable PushClient::checkDevicesCallable(const CheckDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CheckDevicesOutcome()>>(
			[this, request]()
			{
			return this->checkDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::CompleteContinuouslyPushOutcome PushClient::completeContinuouslyPush(const CompleteContinuouslyPushRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CompleteContinuouslyPushOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CompleteContinuouslyPushOutcome(CompleteContinuouslyPushResult(outcome.result()));
	else
		return CompleteContinuouslyPushOutcome(outcome.error());
}

void PushClient::completeContinuouslyPushAsync(const CompleteContinuouslyPushRequest& request, const CompleteContinuouslyPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, completeContinuouslyPush(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::CompleteContinuouslyPushOutcomeCallable PushClient::completeContinuouslyPushCallable(const CompleteContinuouslyPushRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CompleteContinuouslyPushOutcome()>>(
			[this, request]()
			{
			return this->completeContinuouslyPush(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::ContinuouslyPushOutcome PushClient::continuouslyPush(const ContinuouslyPushRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ContinuouslyPushOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ContinuouslyPushOutcome(ContinuouslyPushResult(outcome.result()));
	else
		return ContinuouslyPushOutcome(outcome.error());
}

void PushClient::continuouslyPushAsync(const ContinuouslyPushRequest& request, const ContinuouslyPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, continuouslyPush(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::ContinuouslyPushOutcomeCallable PushClient::continuouslyPushCallable(const ContinuouslyPushRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ContinuouslyPushOutcome()>>(
			[this, request]()
			{
			return this->continuouslyPush(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::ListSummaryAppsOutcome PushClient::listSummaryApps(const ListSummaryAppsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSummaryAppsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSummaryAppsOutcome(ListSummaryAppsResult(outcome.result()));
	else
		return ListSummaryAppsOutcome(outcome.error());
}

void PushClient::listSummaryAppsAsync(const ListSummaryAppsRequest& request, const ListSummaryAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSummaryApps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::ListSummaryAppsOutcomeCallable PushClient::listSummaryAppsCallable(const ListSummaryAppsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSummaryAppsOutcome()>>(
			[this, request]()
			{
			return this->listSummaryApps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::ListTagsOutcome PushClient::listTags(const ListTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagsOutcome(ListTagsResult(outcome.result()));
	else
		return ListTagsOutcome(outcome.error());
}

void PushClient::listTagsAsync(const ListTagsRequest& request, const ListTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::ListTagsOutcomeCallable PushClient::listTagsCallable(const ListTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagsOutcome()>>(
			[this, request]()
			{
			return this->listTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::MassPushOutcome PushClient::massPush(const MassPushRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return MassPushOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return MassPushOutcome(MassPushResult(outcome.result()));
	else
		return MassPushOutcome(outcome.error());
}

void PushClient::massPushAsync(const MassPushRequest& request, const MassPushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, massPush(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::MassPushOutcomeCallable PushClient::massPushCallable(const MassPushRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<MassPushOutcome()>>(
			[this, request]()
			{
			return this->massPush(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::PushOutcome PushClient::push(const PushRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PushOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PushOutcome(PushResult(outcome.result()));
	else
		return PushOutcome(outcome.error());
}

void PushClient::pushAsync(const PushRequest& request, const PushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, push(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::PushOutcomeCallable PushClient::pushCallable(const PushRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PushOutcome()>>(
			[this, request]()
			{
			return this->push(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::PushMessageToAndroidOutcome PushClient::pushMessageToAndroid(const PushMessageToAndroidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PushMessageToAndroidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PushMessageToAndroidOutcome(PushMessageToAndroidResult(outcome.result()));
	else
		return PushMessageToAndroidOutcome(outcome.error());
}

void PushClient::pushMessageToAndroidAsync(const PushMessageToAndroidRequest& request, const PushMessageToAndroidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pushMessageToAndroid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::PushMessageToAndroidOutcomeCallable PushClient::pushMessageToAndroidCallable(const PushMessageToAndroidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PushMessageToAndroidOutcome()>>(
			[this, request]()
			{
			return this->pushMessageToAndroid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::PushMessageToiOSOutcome PushClient::pushMessageToiOS(const PushMessageToiOSRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PushMessageToiOSOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PushMessageToiOSOutcome(PushMessageToiOSResult(outcome.result()));
	else
		return PushMessageToiOSOutcome(outcome.error());
}

void PushClient::pushMessageToiOSAsync(const PushMessageToiOSRequest& request, const PushMessageToiOSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pushMessageToiOS(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::PushMessageToiOSOutcomeCallable PushClient::pushMessageToiOSCallable(const PushMessageToiOSRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PushMessageToiOSOutcome()>>(
			[this, request]()
			{
			return this->pushMessageToiOS(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::PushNoticeToAndroidOutcome PushClient::pushNoticeToAndroid(const PushNoticeToAndroidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PushNoticeToAndroidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PushNoticeToAndroidOutcome(PushNoticeToAndroidResult(outcome.result()));
	else
		return PushNoticeToAndroidOutcome(outcome.error());
}

void PushClient::pushNoticeToAndroidAsync(const PushNoticeToAndroidRequest& request, const PushNoticeToAndroidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pushNoticeToAndroid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::PushNoticeToAndroidOutcomeCallable PushClient::pushNoticeToAndroidCallable(const PushNoticeToAndroidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PushNoticeToAndroidOutcome()>>(
			[this, request]()
			{
			return this->pushNoticeToAndroid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::PushNoticeToiOSOutcome PushClient::pushNoticeToiOS(const PushNoticeToiOSRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PushNoticeToiOSOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PushNoticeToiOSOutcome(PushNoticeToiOSResult(outcome.result()));
	else
		return PushNoticeToiOSOutcome(outcome.error());
}

void PushClient::pushNoticeToiOSAsync(const PushNoticeToiOSRequest& request, const PushNoticeToiOSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, pushNoticeToiOS(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::PushNoticeToiOSOutcomeCallable PushClient::pushNoticeToiOSCallable(const PushNoticeToiOSRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PushNoticeToiOSOutcome()>>(
			[this, request]()
			{
			return this->pushNoticeToiOS(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::QueryAliasesOutcome PushClient::queryAliases(const QueryAliasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAliasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAliasesOutcome(QueryAliasesResult(outcome.result()));
	else
		return QueryAliasesOutcome(outcome.error());
}

void PushClient::queryAliasesAsync(const QueryAliasesRequest& request, const QueryAliasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAliases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::QueryAliasesOutcomeCallable PushClient::queryAliasesCallable(const QueryAliasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAliasesOutcome()>>(
			[this, request]()
			{
			return this->queryAliases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::QueryDeviceInfoOutcome PushClient::queryDeviceInfo(const QueryDeviceInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceInfoOutcome(QueryDeviceInfoResult(outcome.result()));
	else
		return QueryDeviceInfoOutcome(outcome.error());
}

void PushClient::queryDeviceInfoAsync(const QueryDeviceInfoRequest& request, const QueryDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::QueryDeviceInfoOutcomeCallable PushClient::queryDeviceInfoCallable(const QueryDeviceInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceInfoOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::QueryDeviceStatOutcome PushClient::queryDeviceStat(const QueryDeviceStatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDeviceStatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDeviceStatOutcome(QueryDeviceStatResult(outcome.result()));
	else
		return QueryDeviceStatOutcome(outcome.error());
}

void PushClient::queryDeviceStatAsync(const QueryDeviceStatRequest& request, const QueryDeviceStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDeviceStat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::QueryDeviceStatOutcomeCallable PushClient::queryDeviceStatCallable(const QueryDeviceStatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDeviceStatOutcome()>>(
			[this, request]()
			{
			return this->queryDeviceStat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::QueryDevicesByAccountOutcome PushClient::queryDevicesByAccount(const QueryDevicesByAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDevicesByAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDevicesByAccountOutcome(QueryDevicesByAccountResult(outcome.result()));
	else
		return QueryDevicesByAccountOutcome(outcome.error());
}

void PushClient::queryDevicesByAccountAsync(const QueryDevicesByAccountRequest& request, const QueryDevicesByAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDevicesByAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::QueryDevicesByAccountOutcomeCallable PushClient::queryDevicesByAccountCallable(const QueryDevicesByAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDevicesByAccountOutcome()>>(
			[this, request]()
			{
			return this->queryDevicesByAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::QueryDevicesByAliasOutcome PushClient::queryDevicesByAlias(const QueryDevicesByAliasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDevicesByAliasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDevicesByAliasOutcome(QueryDevicesByAliasResult(outcome.result()));
	else
		return QueryDevicesByAliasOutcome(outcome.error());
}

void PushClient::queryDevicesByAliasAsync(const QueryDevicesByAliasRequest& request, const QueryDevicesByAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDevicesByAlias(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::QueryDevicesByAliasOutcomeCallable PushClient::queryDevicesByAliasCallable(const QueryDevicesByAliasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDevicesByAliasOutcome()>>(
			[this, request]()
			{
			return this->queryDevicesByAlias(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::QueryPushRecordsOutcome PushClient::queryPushRecords(const QueryPushRecordsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryPushRecordsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryPushRecordsOutcome(QueryPushRecordsResult(outcome.result()));
	else
		return QueryPushRecordsOutcome(outcome.error());
}

void PushClient::queryPushRecordsAsync(const QueryPushRecordsRequest& request, const QueryPushRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryPushRecords(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::QueryPushRecordsOutcomeCallable PushClient::queryPushRecordsCallable(const QueryPushRecordsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryPushRecordsOutcome()>>(
			[this, request]()
			{
			return this->queryPushRecords(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::QueryPushStatByAppOutcome PushClient::queryPushStatByApp(const QueryPushStatByAppRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryPushStatByAppOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryPushStatByAppOutcome(QueryPushStatByAppResult(outcome.result()));
	else
		return QueryPushStatByAppOutcome(outcome.error());
}

void PushClient::queryPushStatByAppAsync(const QueryPushStatByAppRequest& request, const QueryPushStatByAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryPushStatByApp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::QueryPushStatByAppOutcomeCallable PushClient::queryPushStatByAppCallable(const QueryPushStatByAppRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryPushStatByAppOutcome()>>(
			[this, request]()
			{
			return this->queryPushStatByApp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::QueryPushStatByMsgOutcome PushClient::queryPushStatByMsg(const QueryPushStatByMsgRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryPushStatByMsgOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryPushStatByMsgOutcome(QueryPushStatByMsgResult(outcome.result()));
	else
		return QueryPushStatByMsgOutcome(outcome.error());
}

void PushClient::queryPushStatByMsgAsync(const QueryPushStatByMsgRequest& request, const QueryPushStatByMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryPushStatByMsg(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::QueryPushStatByMsgOutcomeCallable PushClient::queryPushStatByMsgCallable(const QueryPushStatByMsgRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryPushStatByMsgOutcome()>>(
			[this, request]()
			{
			return this->queryPushStatByMsg(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::QueryTagsOutcome PushClient::queryTags(const QueryTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTagsOutcome(QueryTagsResult(outcome.result()));
	else
		return QueryTagsOutcome(outcome.error());
}

void PushClient::queryTagsAsync(const QueryTagsRequest& request, const QueryTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::QueryTagsOutcomeCallable PushClient::queryTagsCallable(const QueryTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTagsOutcome()>>(
			[this, request]()
			{
			return this->queryTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::QueryUniqueDeviceStatOutcome PushClient::queryUniqueDeviceStat(const QueryUniqueDeviceStatRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryUniqueDeviceStatOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryUniqueDeviceStatOutcome(QueryUniqueDeviceStatResult(outcome.result()));
	else
		return QueryUniqueDeviceStatOutcome(outcome.error());
}

void PushClient::queryUniqueDeviceStatAsync(const QueryUniqueDeviceStatRequest& request, const QueryUniqueDeviceStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryUniqueDeviceStat(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::QueryUniqueDeviceStatOutcomeCallable PushClient::queryUniqueDeviceStatCallable(const QueryUniqueDeviceStatRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryUniqueDeviceStatOutcome()>>(
			[this, request]()
			{
			return this->queryUniqueDeviceStat(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::RemoveTagOutcome PushClient::removeTag(const RemoveTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveTagOutcome(RemoveTagResult(outcome.result()));
	else
		return RemoveTagOutcome(outcome.error());
}

void PushClient::removeTagAsync(const RemoveTagRequest& request, const RemoveTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::RemoveTagOutcomeCallable PushClient::removeTagCallable(const RemoveTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveTagOutcome()>>(
			[this, request]()
			{
			return this->removeTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::UnbindAliasOutcome PushClient::unbindAlias(const UnbindAliasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindAliasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindAliasOutcome(UnbindAliasResult(outcome.result()));
	else
		return UnbindAliasOutcome(outcome.error());
}

void PushClient::unbindAliasAsync(const UnbindAliasRequest& request, const UnbindAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindAlias(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::UnbindAliasOutcomeCallable PushClient::unbindAliasCallable(const UnbindAliasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindAliasOutcome()>>(
			[this, request]()
			{
			return this->unbindAlias(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::UnbindPhoneOutcome PushClient::unbindPhone(const UnbindPhoneRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindPhoneOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindPhoneOutcome(UnbindPhoneResult(outcome.result()));
	else
		return UnbindPhoneOutcome(outcome.error());
}

void PushClient::unbindPhoneAsync(const UnbindPhoneRequest& request, const UnbindPhoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindPhone(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::UnbindPhoneOutcomeCallable PushClient::unbindPhoneCallable(const UnbindPhoneRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindPhoneOutcome()>>(
			[this, request]()
			{
			return this->unbindPhone(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

PushClient::UnbindTagOutcome PushClient::unbindTag(const UnbindTagRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindTagOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindTagOutcome(UnbindTagResult(outcome.result()));
	else
		return UnbindTagOutcome(outcome.error());
}

void PushClient::unbindTagAsync(const UnbindTagRequest& request, const UnbindTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindTag(request), context);
	};

	asyncExecute(new Runnable(fn));
}

PushClient::UnbindTagOutcomeCallable PushClient::unbindTagCallable(const UnbindTagRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindTagOutcome()>>(
			[this, request]()
			{
			return this->unbindTag(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

