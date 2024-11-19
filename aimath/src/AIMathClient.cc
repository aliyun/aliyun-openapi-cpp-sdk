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

#include <alibabacloud/aimath/AIMathClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::AIMath;
using namespace AlibabaCloud::AIMath::Model;

namespace
{
	const std::string SERVICE_NAME = "AIMath";
}

AIMathClient::AIMathClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

AIMathClient::AIMathClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

AIMathClient::AIMathClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

AIMathClient::~AIMathClient()
{}

AIMathClient::GenAnalysisOutcome AIMathClient::genAnalysis(const GenAnalysisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenAnalysisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenAnalysisOutcome(GenAnalysisResult(outcome.result()));
	else
		return GenAnalysisOutcome(outcome.error());
}

void AIMathClient::genAnalysisAsync(const GenAnalysisRequest& request, const GenAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, genAnalysis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIMathClient::GenAnalysisOutcomeCallable AIMathClient::genAnalysisCallable(const GenAnalysisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenAnalysisOutcome()>>(
			[this, request]()
			{
			return this->genAnalysis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIMathClient::GenStepOutcome AIMathClient::genStep(const GenStepRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenStepOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenStepOutcome(GenStepResult(outcome.result()));
	else
		return GenStepOutcome(outcome.error());
}

void AIMathClient::genStepAsync(const GenStepRequest& request, const GenStepAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, genStep(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIMathClient::GenStepOutcomeCallable AIMathClient::genStepCallable(const GenStepRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenStepOutcome()>>(
			[this, request]()
			{
			return this->genStep(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIMathClient::GlobalConfirmOutcome AIMathClient::globalConfirm(const GlobalConfirmRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GlobalConfirmOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GlobalConfirmOutcome(GlobalConfirmResult(outcome.result()));
	else
		return GlobalConfirmOutcome(outcome.error());
}

void AIMathClient::globalConfirmAsync(const GlobalConfirmRequest& request, const GlobalConfirmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, globalConfirm(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIMathClient::GlobalConfirmOutcomeCallable AIMathClient::globalConfirmCallable(const GlobalConfirmRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GlobalConfirmOutcome()>>(
			[this, request]()
			{
			return this->globalConfirm(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIMathClient::UpdateAnalysisOutcome AIMathClient::updateAnalysis(const UpdateAnalysisRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAnalysisOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAnalysisOutcome(UpdateAnalysisResult(outcome.result()));
	else
		return UpdateAnalysisOutcome(outcome.error());
}

void AIMathClient::updateAnalysisAsync(const UpdateAnalysisRequest& request, const UpdateAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAnalysis(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIMathClient::UpdateAnalysisOutcomeCallable AIMathClient::updateAnalysisCallable(const UpdateAnalysisRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAnalysisOutcome()>>(
			[this, request]()
			{
			return this->updateAnalysis(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AIMathClient::UpdateStepOutcome AIMathClient::updateStep(const UpdateStepRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateStepOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateStepOutcome(UpdateStepResult(outcome.result()));
	else
		return UpdateStepOutcome(outcome.error());
}

void AIMathClient::updateStepAsync(const UpdateStepRequest& request, const UpdateStepAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateStep(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AIMathClient::UpdateStepOutcomeCallable AIMathClient::updateStepCallable(const UpdateStepRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateStepOutcome()>>(
			[this, request]()
			{
			return this->updateStep(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

