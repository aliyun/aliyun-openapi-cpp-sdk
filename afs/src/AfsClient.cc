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

#include <alibabacloud/afs/AfsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Afs;
using namespace AlibabaCloud::Afs::Model;

namespace
{
	const std::string SERVICE_NAME = "afs";
}

AfsClient::AfsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "afs");
}

AfsClient::AfsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "afs");
}

AfsClient::AfsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "afs");
}

AfsClient::~AfsClient()
{}

AfsClient::AnalyzeNvcOutcome AfsClient::analyzeNvc(const AnalyzeNvcRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AnalyzeNvcOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AnalyzeNvcOutcome(AnalyzeNvcResult(outcome.result()));
	else
		return AnalyzeNvcOutcome(outcome.error());
}

void AfsClient::analyzeNvcAsync(const AnalyzeNvcRequest& request, const AnalyzeNvcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, analyzeNvc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AfsClient::AnalyzeNvcOutcomeCallable AfsClient::analyzeNvcCallable(const AnalyzeNvcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AnalyzeNvcOutcome()>>(
			[this, request]()
			{
			return this->analyzeNvc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AfsClient::AuthenticateSigOutcome AfsClient::authenticateSig(const AuthenticateSigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AuthenticateSigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AuthenticateSigOutcome(AuthenticateSigResult(outcome.result()));
	else
		return AuthenticateSigOutcome(outcome.error());
}

void AfsClient::authenticateSigAsync(const AuthenticateSigRequest& request, const AuthenticateSigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, authenticateSig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AfsClient::AuthenticateSigOutcomeCallable AfsClient::authenticateSigCallable(const AuthenticateSigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AuthenticateSigOutcome()>>(
			[this, request]()
			{
			return this->authenticateSig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AfsClient::ConfigurationStyleOutcome AfsClient::configurationStyle(const ConfigurationStyleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfigurationStyleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfigurationStyleOutcome(ConfigurationStyleResult(outcome.result()));
	else
		return ConfigurationStyleOutcome(outcome.error());
}

void AfsClient::configurationStyleAsync(const ConfigurationStyleRequest& request, const ConfigurationStyleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, configurationStyle(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AfsClient::ConfigurationStyleOutcomeCallable AfsClient::configurationStyleCallable(const ConfigurationStyleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfigurationStyleOutcome()>>(
			[this, request]()
			{
			return this->configurationStyle(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AfsClient::CreateConfigurationOutcome AfsClient::createConfiguration(const CreateConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateConfigurationOutcome(CreateConfigurationResult(outcome.result()));
	else
		return CreateConfigurationOutcome(outcome.error());
}

void AfsClient::createConfigurationAsync(const CreateConfigurationRequest& request, const CreateConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AfsClient::CreateConfigurationOutcomeCallable AfsClient::createConfigurationCallable(const CreateConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateConfigurationOutcome()>>(
			[this, request]()
			{
			return this->createConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AfsClient::DescribeAfsConfigNameOutcome AfsClient::describeAfsConfigName(const DescribeAfsConfigNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAfsConfigNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAfsConfigNameOutcome(DescribeAfsConfigNameResult(outcome.result()));
	else
		return DescribeAfsConfigNameOutcome(outcome.error());
}

void AfsClient::describeAfsConfigNameAsync(const DescribeAfsConfigNameRequest& request, const DescribeAfsConfigNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAfsConfigName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AfsClient::DescribeAfsConfigNameOutcomeCallable AfsClient::describeAfsConfigNameCallable(const DescribeAfsConfigNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAfsConfigNameOutcome()>>(
			[this, request]()
			{
			return this->describeAfsConfigName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AfsClient::DescribeAfsOneConfDataOutcome AfsClient::describeAfsOneConfData(const DescribeAfsOneConfDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAfsOneConfDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAfsOneConfDataOutcome(DescribeAfsOneConfDataResult(outcome.result()));
	else
		return DescribeAfsOneConfDataOutcome(outcome.error());
}

void AfsClient::describeAfsOneConfDataAsync(const DescribeAfsOneConfDataRequest& request, const DescribeAfsOneConfDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAfsOneConfData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AfsClient::DescribeAfsOneConfDataOutcomeCallable AfsClient::describeAfsOneConfDataCallable(const DescribeAfsOneConfDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAfsOneConfDataOutcome()>>(
			[this, request]()
			{
			return this->describeAfsOneConfData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AfsClient::DescribeAfsTotalConfDataOutcome AfsClient::describeAfsTotalConfData(const DescribeAfsTotalConfDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAfsTotalConfDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAfsTotalConfDataOutcome(DescribeAfsTotalConfDataResult(outcome.result()));
	else
		return DescribeAfsTotalConfDataOutcome(outcome.error());
}

void AfsClient::describeAfsTotalConfDataAsync(const DescribeAfsTotalConfDataRequest& request, const DescribeAfsTotalConfDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAfsTotalConfData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AfsClient::DescribeAfsTotalConfDataOutcomeCallable AfsClient::describeAfsTotalConfDataCallable(const DescribeAfsTotalConfDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAfsTotalConfDataOutcome()>>(
			[this, request]()
			{
			return this->describeAfsTotalConfData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AfsClient::DescribeAfsVerifySigDataOutcome AfsClient::describeAfsVerifySigData(const DescribeAfsVerifySigDataRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAfsVerifySigDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAfsVerifySigDataOutcome(DescribeAfsVerifySigDataResult(outcome.result()));
	else
		return DescribeAfsVerifySigDataOutcome(outcome.error());
}

void AfsClient::describeAfsVerifySigDataAsync(const DescribeAfsVerifySigDataRequest& request, const DescribeAfsVerifySigDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAfsVerifySigData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AfsClient::DescribeAfsVerifySigDataOutcomeCallable AfsClient::describeAfsVerifySigDataCallable(const DescribeAfsVerifySigDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAfsVerifySigDataOutcome()>>(
			[this, request]()
			{
			return this->describeAfsVerifySigData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AfsClient::DescribeCaptchaDayOutcome AfsClient::describeCaptchaDay(const DescribeCaptchaDayRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCaptchaDayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCaptchaDayOutcome(DescribeCaptchaDayResult(outcome.result()));
	else
		return DescribeCaptchaDayOutcome(outcome.error());
}

void AfsClient::describeCaptchaDayAsync(const DescribeCaptchaDayRequest& request, const DescribeCaptchaDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCaptchaDay(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AfsClient::DescribeCaptchaDayOutcomeCallable AfsClient::describeCaptchaDayCallable(const DescribeCaptchaDayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCaptchaDayOutcome()>>(
			[this, request]()
			{
			return this->describeCaptchaDay(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AfsClient::DescribeCaptchaIpCityOutcome AfsClient::describeCaptchaIpCity(const DescribeCaptchaIpCityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCaptchaIpCityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCaptchaIpCityOutcome(DescribeCaptchaIpCityResult(outcome.result()));
	else
		return DescribeCaptchaIpCityOutcome(outcome.error());
}

void AfsClient::describeCaptchaIpCityAsync(const DescribeCaptchaIpCityRequest& request, const DescribeCaptchaIpCityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCaptchaIpCity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AfsClient::DescribeCaptchaIpCityOutcomeCallable AfsClient::describeCaptchaIpCityCallable(const DescribeCaptchaIpCityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCaptchaIpCityOutcome()>>(
			[this, request]()
			{
			return this->describeCaptchaIpCity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AfsClient::DescribeCaptchaMinOutcome AfsClient::describeCaptchaMin(const DescribeCaptchaMinRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCaptchaMinOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCaptchaMinOutcome(DescribeCaptchaMinResult(outcome.result()));
	else
		return DescribeCaptchaMinOutcome(outcome.error());
}

void AfsClient::describeCaptchaMinAsync(const DescribeCaptchaMinRequest& request, const DescribeCaptchaMinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCaptchaMin(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AfsClient::DescribeCaptchaMinOutcomeCallable AfsClient::describeCaptchaMinCallable(const DescribeCaptchaMinRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCaptchaMinOutcome()>>(
			[this, request]()
			{
			return this->describeCaptchaMin(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AfsClient::DescribeCaptchaOrderOutcome AfsClient::describeCaptchaOrder(const DescribeCaptchaOrderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCaptchaOrderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCaptchaOrderOutcome(DescribeCaptchaOrderResult(outcome.result()));
	else
		return DescribeCaptchaOrderOutcome(outcome.error());
}

void AfsClient::describeCaptchaOrderAsync(const DescribeCaptchaOrderRequest& request, const DescribeCaptchaOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCaptchaOrder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AfsClient::DescribeCaptchaOrderOutcomeCallable AfsClient::describeCaptchaOrderCallable(const DescribeCaptchaOrderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCaptchaOrderOutcome()>>(
			[this, request]()
			{
			return this->describeCaptchaOrder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AfsClient::DescribeCaptchaRiskOutcome AfsClient::describeCaptchaRisk(const DescribeCaptchaRiskRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCaptchaRiskOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCaptchaRiskOutcome(DescribeCaptchaRiskResult(outcome.result()));
	else
		return DescribeCaptchaRiskOutcome(outcome.error());
}

void AfsClient::describeCaptchaRiskAsync(const DescribeCaptchaRiskRequest& request, const DescribeCaptchaRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCaptchaRisk(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AfsClient::DescribeCaptchaRiskOutcomeCallable AfsClient::describeCaptchaRiskCallable(const DescribeCaptchaRiskRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCaptchaRiskOutcome()>>(
			[this, request]()
			{
			return this->describeCaptchaRisk(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AfsClient::DescribeConfigNameOutcome AfsClient::describeConfigName(const DescribeConfigNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeConfigNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeConfigNameOutcome(DescribeConfigNameResult(outcome.result()));
	else
		return DescribeConfigNameOutcome(outcome.error());
}

void AfsClient::describeConfigNameAsync(const DescribeConfigNameRequest& request, const DescribeConfigNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeConfigName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AfsClient::DescribeConfigNameOutcomeCallable AfsClient::describeConfigNameCallable(const DescribeConfigNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeConfigNameOutcome()>>(
			[this, request]()
			{
			return this->describeConfigName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AfsClient::DescribeEarlyWarningOutcome AfsClient::describeEarlyWarning(const DescribeEarlyWarningRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEarlyWarningOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEarlyWarningOutcome(DescribeEarlyWarningResult(outcome.result()));
	else
		return DescribeEarlyWarningOutcome(outcome.error());
}

void AfsClient::describeEarlyWarningAsync(const DescribeEarlyWarningRequest& request, const DescribeEarlyWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEarlyWarning(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AfsClient::DescribeEarlyWarningOutcomeCallable AfsClient::describeEarlyWarningCallable(const DescribeEarlyWarningRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEarlyWarningOutcome()>>(
			[this, request]()
			{
			return this->describeEarlyWarning(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AfsClient::DescribeOrderInfoOutcome AfsClient::describeOrderInfo(const DescribeOrderInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeOrderInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeOrderInfoOutcome(DescribeOrderInfoResult(outcome.result()));
	else
		return DescribeOrderInfoOutcome(outcome.error());
}

void AfsClient::describeOrderInfoAsync(const DescribeOrderInfoRequest& request, const DescribeOrderInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeOrderInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AfsClient::DescribeOrderInfoOutcomeCallable AfsClient::describeOrderInfoCallable(const DescribeOrderInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeOrderInfoOutcome()>>(
			[this, request]()
			{
			return this->describeOrderInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AfsClient::DescribePersonMachineListOutcome AfsClient::describePersonMachineList(const DescribePersonMachineListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePersonMachineListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePersonMachineListOutcome(DescribePersonMachineListResult(outcome.result()));
	else
		return DescribePersonMachineListOutcome(outcome.error());
}

void AfsClient::describePersonMachineListAsync(const DescribePersonMachineListRequest& request, const DescribePersonMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePersonMachineList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AfsClient::DescribePersonMachineListOutcomeCallable AfsClient::describePersonMachineListCallable(const DescribePersonMachineListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePersonMachineListOutcome()>>(
			[this, request]()
			{
			return this->describePersonMachineList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AfsClient::SetEarlyWarningOutcome AfsClient::setEarlyWarning(const SetEarlyWarningRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetEarlyWarningOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetEarlyWarningOutcome(SetEarlyWarningResult(outcome.result()));
	else
		return SetEarlyWarningOutcome(outcome.error());
}

void AfsClient::setEarlyWarningAsync(const SetEarlyWarningRequest& request, const SetEarlyWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setEarlyWarning(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AfsClient::SetEarlyWarningOutcomeCallable AfsClient::setEarlyWarningCallable(const SetEarlyWarningRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetEarlyWarningOutcome()>>(
			[this, request]()
			{
			return this->setEarlyWarning(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AfsClient::UpdateConfigNameOutcome AfsClient::updateConfigName(const UpdateConfigNameRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateConfigNameOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateConfigNameOutcome(UpdateConfigNameResult(outcome.result()));
	else
		return UpdateConfigNameOutcome(outcome.error());
}

void AfsClient::updateConfigNameAsync(const UpdateConfigNameRequest& request, const UpdateConfigNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateConfigName(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AfsClient::UpdateConfigNameOutcomeCallable AfsClient::updateConfigNameCallable(const UpdateConfigNameRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateConfigNameOutcome()>>(
			[this, request]()
			{
			return this->updateConfigName(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

