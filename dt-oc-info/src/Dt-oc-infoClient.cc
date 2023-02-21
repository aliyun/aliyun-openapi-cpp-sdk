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

#include <alibabacloud/dt-oc-info/Dt_oc_infoClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Dt_oc_info;
using namespace AlibabaCloud::Dt_oc_info::Model;

namespace
{
	const std::string SERVICE_NAME = "dt-oc-info";
}

Dt_oc_infoClient::Dt_oc_infoClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Dt_oc_infoClient::Dt_oc_infoClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Dt_oc_infoClient::Dt_oc_infoClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Dt_oc_infoClient::~Dt_oc_infoClient()
{}

Dt_oc_infoClient::GetOcCompetitorsOutcome Dt_oc_infoClient::getOcCompetitors(const GetOcCompetitorsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcCompetitorsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcCompetitorsOutcome(GetOcCompetitorsResult(outcome.result()));
	else
		return GetOcCompetitorsOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcCompetitorsAsync(const GetOcCompetitorsRequest& request, const GetOcCompetitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcCompetitors(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcCompetitorsOutcomeCallable Dt_oc_infoClient::getOcCompetitorsCallable(const GetOcCompetitorsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcCompetitorsOutcome()>>(
			[this, request]()
			{
			return this->getOcCompetitors(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcCoreTeamsOutcome Dt_oc_infoClient::getOcCoreTeams(const GetOcCoreTeamsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcCoreTeamsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcCoreTeamsOutcome(GetOcCoreTeamsResult(outcome.result()));
	else
		return GetOcCoreTeamsOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcCoreTeamsAsync(const GetOcCoreTeamsRequest& request, const GetOcCoreTeamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcCoreTeams(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcCoreTeamsOutcomeCallable Dt_oc_infoClient::getOcCoreTeamsCallable(const GetOcCoreTeamsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcCoreTeamsOutcome()>>(
			[this, request]()
			{
			return this->getOcCoreTeams(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcFinancingOutcome Dt_oc_infoClient::getOcFinancing(const GetOcFinancingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcFinancingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcFinancingOutcome(GetOcFinancingResult(outcome.result()));
	else
		return GetOcFinancingOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcFinancingAsync(const GetOcFinancingRequest& request, const GetOcFinancingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcFinancing(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcFinancingOutcomeCallable Dt_oc_infoClient::getOcFinancingCallable(const GetOcFinancingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcFinancingOutcome()>>(
			[this, request]()
			{
			return this->getOcFinancing(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcFuzzSearchOutcome Dt_oc_infoClient::getOcFuzzSearch(const GetOcFuzzSearchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcFuzzSearchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcFuzzSearchOutcome(GetOcFuzzSearchResult(outcome.result()));
	else
		return GetOcFuzzSearchOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcFuzzSearchAsync(const GetOcFuzzSearchRequest& request, const GetOcFuzzSearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcFuzzSearch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcFuzzSearchOutcomeCallable Dt_oc_infoClient::getOcFuzzSearchCallable(const GetOcFuzzSearchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcFuzzSearchOutcome()>>(
			[this, request]()
			{
			return this->getOcFuzzSearch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcIcAbnormalOperationOutcome Dt_oc_infoClient::getOcIcAbnormalOperation(const GetOcIcAbnormalOperationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcIcAbnormalOperationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcIcAbnormalOperationOutcome(GetOcIcAbnormalOperationResult(outcome.result()));
	else
		return GetOcIcAbnormalOperationOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcIcAbnormalOperationAsync(const GetOcIcAbnormalOperationRequest& request, const GetOcIcAbnormalOperationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcIcAbnormalOperation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcIcAbnormalOperationOutcomeCallable Dt_oc_infoClient::getOcIcAbnormalOperationCallable(const GetOcIcAbnormalOperationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcIcAbnormalOperationOutcome()>>(
			[this, request]()
			{
			return this->getOcIcAbnormalOperation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcIcAdminLicenseOutcome Dt_oc_infoClient::getOcIcAdminLicense(const GetOcIcAdminLicenseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcIcAdminLicenseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcIcAdminLicenseOutcome(GetOcIcAdminLicenseResult(outcome.result()));
	else
		return GetOcIcAdminLicenseOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcIcAdminLicenseAsync(const GetOcIcAdminLicenseRequest& request, const GetOcIcAdminLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcIcAdminLicense(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcIcAdminLicenseOutcomeCallable Dt_oc_infoClient::getOcIcAdminLicenseCallable(const GetOcIcAdminLicenseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcIcAdminLicenseOutcome()>>(
			[this, request]()
			{
			return this->getOcIcAdminLicense(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcIcBasicOutcome Dt_oc_infoClient::getOcIcBasic(const GetOcIcBasicRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcIcBasicOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcIcBasicOutcome(GetOcIcBasicResult(outcome.result()));
	else
		return GetOcIcBasicOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcIcBasicAsync(const GetOcIcBasicRequest& request, const GetOcIcBasicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcIcBasic(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcIcBasicOutcomeCallable Dt_oc_infoClient::getOcIcBasicCallable(const GetOcIcBasicRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcIcBasicOutcome()>>(
			[this, request]()
			{
			return this->getOcIcBasic(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcIcBranchOutcome Dt_oc_infoClient::getOcIcBranch(const GetOcIcBranchRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcIcBranchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcIcBranchOutcome(GetOcIcBranchResult(outcome.result()));
	else
		return GetOcIcBranchOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcIcBranchAsync(const GetOcIcBranchRequest& request, const GetOcIcBranchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcIcBranch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcIcBranchOutcomeCallable Dt_oc_infoClient::getOcIcBranchCallable(const GetOcIcBranchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcIcBranchOutcome()>>(
			[this, request]()
			{
			return this->getOcIcBranch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcIcChangeRecordOutcome Dt_oc_infoClient::getOcIcChangeRecord(const GetOcIcChangeRecordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcIcChangeRecordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcIcChangeRecordOutcome(GetOcIcChangeRecordResult(outcome.result()));
	else
		return GetOcIcChangeRecordOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcIcChangeRecordAsync(const GetOcIcChangeRecordRequest& request, const GetOcIcChangeRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcIcChangeRecord(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcIcChangeRecordOutcomeCallable Dt_oc_infoClient::getOcIcChangeRecordCallable(const GetOcIcChangeRecordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcIcChangeRecordOutcome()>>(
			[this, request]()
			{
			return this->getOcIcChangeRecord(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcIcCheckupOutcome Dt_oc_infoClient::getOcIcCheckup(const GetOcIcCheckupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcIcCheckupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcIcCheckupOutcome(GetOcIcCheckupResult(outcome.result()));
	else
		return GetOcIcCheckupOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcIcCheckupAsync(const GetOcIcCheckupRequest& request, const GetOcIcCheckupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcIcCheckup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcIcCheckupOutcomeCallable Dt_oc_infoClient::getOcIcCheckupCallable(const GetOcIcCheckupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcIcCheckupOutcome()>>(
			[this, request]()
			{
			return this->getOcIcCheckup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcIcClearAccountOutcome Dt_oc_infoClient::getOcIcClearAccount(const GetOcIcClearAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcIcClearAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcIcClearAccountOutcome(GetOcIcClearAccountResult(outcome.result()));
	else
		return GetOcIcClearAccountOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcIcClearAccountAsync(const GetOcIcClearAccountRequest& request, const GetOcIcClearAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcIcClearAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcIcClearAccountOutcomeCallable Dt_oc_infoClient::getOcIcClearAccountCallable(const GetOcIcClearAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcIcClearAccountOutcome()>>(
			[this, request]()
			{
			return this->getOcIcClearAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcIcDoubleCheckupOutcome Dt_oc_infoClient::getOcIcDoubleCheckup(const GetOcIcDoubleCheckupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcIcDoubleCheckupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcIcDoubleCheckupOutcome(GetOcIcDoubleCheckupResult(outcome.result()));
	else
		return GetOcIcDoubleCheckupOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcIcDoubleCheckupAsync(const GetOcIcDoubleCheckupRequest& request, const GetOcIcDoubleCheckupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcIcDoubleCheckup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcIcDoubleCheckupOutcomeCallable Dt_oc_infoClient::getOcIcDoubleCheckupCallable(const GetOcIcDoubleCheckupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcIcDoubleCheckupOutcome()>>(
			[this, request]()
			{
			return this->getOcIcDoubleCheckup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcIcEmployeeOutcome Dt_oc_infoClient::getOcIcEmployee(const GetOcIcEmployeeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcIcEmployeeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcIcEmployeeOutcome(GetOcIcEmployeeResult(outcome.result()));
	else
		return GetOcIcEmployeeOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcIcEmployeeAsync(const GetOcIcEmployeeRequest& request, const GetOcIcEmployeeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcIcEmployee(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcIcEmployeeOutcomeCallable Dt_oc_infoClient::getOcIcEmployeeCallable(const GetOcIcEmployeeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcIcEmployeeOutcome()>>(
			[this, request]()
			{
			return this->getOcIcEmployee(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcIcEquityFrozenOutcome Dt_oc_infoClient::getOcIcEquityFrozen(const GetOcIcEquityFrozenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcIcEquityFrozenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcIcEquityFrozenOutcome(GetOcIcEquityFrozenResult(outcome.result()));
	else
		return GetOcIcEquityFrozenOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcIcEquityFrozenAsync(const GetOcIcEquityFrozenRequest& request, const GetOcIcEquityFrozenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcIcEquityFrozen(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcIcEquityFrozenOutcomeCallable Dt_oc_infoClient::getOcIcEquityFrozenCallable(const GetOcIcEquityFrozenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcIcEquityFrozenOutcome()>>(
			[this, request]()
			{
			return this->getOcIcEquityFrozen(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcIcEquityPledgeOutcome Dt_oc_infoClient::getOcIcEquityPledge(const GetOcIcEquityPledgeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcIcEquityPledgeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcIcEquityPledgeOutcome(GetOcIcEquityPledgeResult(outcome.result()));
	else
		return GetOcIcEquityPledgeOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcIcEquityPledgeAsync(const GetOcIcEquityPledgeRequest& request, const GetOcIcEquityPledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcIcEquityPledge(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcIcEquityPledgeOutcomeCallable Dt_oc_infoClient::getOcIcEquityPledgeCallable(const GetOcIcEquityPledgeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcIcEquityPledgeOutcome()>>(
			[this, request]()
			{
			return this->getOcIcEquityPledge(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcIcInvestmentOutcome Dt_oc_infoClient::getOcIcInvestment(const GetOcIcInvestmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcIcInvestmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcIcInvestmentOutcome(GetOcIcInvestmentResult(outcome.result()));
	else
		return GetOcIcInvestmentOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcIcInvestmentAsync(const GetOcIcInvestmentRequest& request, const GetOcIcInvestmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcIcInvestment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcIcInvestmentOutcomeCallable Dt_oc_infoClient::getOcIcInvestmentCallable(const GetOcIcInvestmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcIcInvestmentOutcome()>>(
			[this, request]()
			{
			return this->getOcIcInvestment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcIcKnowledgePropertyPledgeOutcome Dt_oc_infoClient::getOcIcKnowledgePropertyPledge(const GetOcIcKnowledgePropertyPledgeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcIcKnowledgePropertyPledgeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcIcKnowledgePropertyPledgeOutcome(GetOcIcKnowledgePropertyPledgeResult(outcome.result()));
	else
		return GetOcIcKnowledgePropertyPledgeOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcIcKnowledgePropertyPledgeAsync(const GetOcIcKnowledgePropertyPledgeRequest& request, const GetOcIcKnowledgePropertyPledgeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcIcKnowledgePropertyPledge(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcIcKnowledgePropertyPledgeOutcomeCallable Dt_oc_infoClient::getOcIcKnowledgePropertyPledgeCallable(const GetOcIcKnowledgePropertyPledgeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcIcKnowledgePropertyPledgeOutcome()>>(
			[this, request]()
			{
			return this->getOcIcKnowledgePropertyPledge(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcIcMortgageOutcome Dt_oc_infoClient::getOcIcMortgage(const GetOcIcMortgageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcIcMortgageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcIcMortgageOutcome(GetOcIcMortgageResult(outcome.result()));
	else
		return GetOcIcMortgageOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcIcMortgageAsync(const GetOcIcMortgageRequest& request, const GetOcIcMortgageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcIcMortgage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcIcMortgageOutcomeCallable Dt_oc_infoClient::getOcIcMortgageCallable(const GetOcIcMortgageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcIcMortgageOutcome()>>(
			[this, request]()
			{
			return this->getOcIcMortgage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcIcSeriousOffenseOutcome Dt_oc_infoClient::getOcIcSeriousOffense(const GetOcIcSeriousOffenseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcIcSeriousOffenseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcIcSeriousOffenseOutcome(GetOcIcSeriousOffenseResult(outcome.result()));
	else
		return GetOcIcSeriousOffenseOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcIcSeriousOffenseAsync(const GetOcIcSeriousOffenseRequest& request, const GetOcIcSeriousOffenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcIcSeriousOffense(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcIcSeriousOffenseOutcomeCallable Dt_oc_infoClient::getOcIcSeriousOffenseCallable(const GetOcIcSeriousOffenseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcIcSeriousOffenseOutcome()>>(
			[this, request]()
			{
			return this->getOcIcSeriousOffense(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcIcShareholderOutcome Dt_oc_infoClient::getOcIcShareholder(const GetOcIcShareholderRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcIcShareholderOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcIcShareholderOutcome(GetOcIcShareholderResult(outcome.result()));
	else
		return GetOcIcShareholderOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcIcShareholderAsync(const GetOcIcShareholderRequest& request, const GetOcIcShareholderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcIcShareholder(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcIcShareholderOutcomeCallable Dt_oc_infoClient::getOcIcShareholderCallable(const GetOcIcShareholderRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcIcShareholderOutcome()>>(
			[this, request]()
			{
			return this->getOcIcShareholder(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcIcSimpleCancelOutcome Dt_oc_infoClient::getOcIcSimpleCancel(const GetOcIcSimpleCancelRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcIcSimpleCancelOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcIcSimpleCancelOutcome(GetOcIcSimpleCancelResult(outcome.result()));
	else
		return GetOcIcSimpleCancelOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcIcSimpleCancelAsync(const GetOcIcSimpleCancelRequest& request, const GetOcIcSimpleCancelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcIcSimpleCancel(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcIcSimpleCancelOutcomeCallable Dt_oc_infoClient::getOcIcSimpleCancelCallable(const GetOcIcSimpleCancelRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcIcSimpleCancelOutcome()>>(
			[this, request]()
			{
			return this->getOcIcSimpleCancel(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcIpCertificateOutcome Dt_oc_infoClient::getOcIpCertificate(const GetOcIpCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcIpCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcIpCertificateOutcome(GetOcIpCertificateResult(outcome.result()));
	else
		return GetOcIpCertificateOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcIpCertificateAsync(const GetOcIpCertificateRequest& request, const GetOcIpCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcIpCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcIpCertificateOutcomeCallable Dt_oc_infoClient::getOcIpCertificateCallable(const GetOcIpCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcIpCertificateOutcome()>>(
			[this, request]()
			{
			return this->getOcIpCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcIpDomainOutcome Dt_oc_infoClient::getOcIpDomain(const GetOcIpDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcIpDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcIpDomainOutcome(GetOcIpDomainResult(outcome.result()));
	else
		return GetOcIpDomainOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcIpDomainAsync(const GetOcIpDomainRequest& request, const GetOcIpDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcIpDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcIpDomainOutcomeCallable Dt_oc_infoClient::getOcIpDomainCallable(const GetOcIpDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcIpDomainOutcome()>>(
			[this, request]()
			{
			return this->getOcIpDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcIpPatentOutcome Dt_oc_infoClient::getOcIpPatent(const GetOcIpPatentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcIpPatentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcIpPatentOutcome(GetOcIpPatentResult(outcome.result()));
	else
		return GetOcIpPatentOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcIpPatentAsync(const GetOcIpPatentRequest& request, const GetOcIpPatentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcIpPatent(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcIpPatentOutcomeCallable Dt_oc_infoClient::getOcIpPatentCallable(const GetOcIpPatentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcIpPatentOutcome()>>(
			[this, request]()
			{
			return this->getOcIpPatent(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcIpSoftwareCopyrightOutcome Dt_oc_infoClient::getOcIpSoftwareCopyright(const GetOcIpSoftwareCopyrightRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcIpSoftwareCopyrightOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcIpSoftwareCopyrightOutcome(GetOcIpSoftwareCopyrightResult(outcome.result()));
	else
		return GetOcIpSoftwareCopyrightOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcIpSoftwareCopyrightAsync(const GetOcIpSoftwareCopyrightRequest& request, const GetOcIpSoftwareCopyrightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcIpSoftwareCopyright(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcIpSoftwareCopyrightOutcomeCallable Dt_oc_infoClient::getOcIpSoftwareCopyrightCallable(const GetOcIpSoftwareCopyrightRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcIpSoftwareCopyrightOutcome()>>(
			[this, request]()
			{
			return this->getOcIpSoftwareCopyright(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcIpTrademarkOutcome Dt_oc_infoClient::getOcIpTrademark(const GetOcIpTrademarkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcIpTrademarkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcIpTrademarkOutcome(GetOcIpTrademarkResult(outcome.result()));
	else
		return GetOcIpTrademarkOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcIpTrademarkAsync(const GetOcIpTrademarkRequest& request, const GetOcIpTrademarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcIpTrademark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcIpTrademarkOutcomeCallable Dt_oc_infoClient::getOcIpTrademarkCallable(const GetOcIpTrademarkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcIpTrademarkOutcome()>>(
			[this, request]()
			{
			return this->getOcIpTrademark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcIpWorksCopyrightOutcome Dt_oc_infoClient::getOcIpWorksCopyright(const GetOcIpWorksCopyrightRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcIpWorksCopyrightOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcIpWorksCopyrightOutcome(GetOcIpWorksCopyrightResult(outcome.result()));
	else
		return GetOcIpWorksCopyrightOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcIpWorksCopyrightAsync(const GetOcIpWorksCopyrightRequest& request, const GetOcIpWorksCopyrightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcIpWorksCopyright(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcIpWorksCopyrightOutcomeCallable Dt_oc_infoClient::getOcIpWorksCopyrightCallable(const GetOcIpWorksCopyrightRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcIpWorksCopyrightOutcome()>>(
			[this, request]()
			{
			return this->getOcIpWorksCopyright(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcJusticeAuctionOutcome Dt_oc_infoClient::getOcJusticeAuction(const GetOcJusticeAuctionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcJusticeAuctionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcJusticeAuctionOutcome(GetOcJusticeAuctionResult(outcome.result()));
	else
		return GetOcJusticeAuctionOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcJusticeAuctionAsync(const GetOcJusticeAuctionRequest& request, const GetOcJusticeAuctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcJusticeAuction(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcJusticeAuctionOutcomeCallable Dt_oc_infoClient::getOcJusticeAuctionCallable(const GetOcJusticeAuctionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcJusticeAuctionOutcome()>>(
			[this, request]()
			{
			return this->getOcJusticeAuction(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcJusticeCaseFilingOutcome Dt_oc_infoClient::getOcJusticeCaseFiling(const GetOcJusticeCaseFilingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcJusticeCaseFilingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcJusticeCaseFilingOutcome(GetOcJusticeCaseFilingResult(outcome.result()));
	else
		return GetOcJusticeCaseFilingOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcJusticeCaseFilingAsync(const GetOcJusticeCaseFilingRequest& request, const GetOcJusticeCaseFilingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcJusticeCaseFiling(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcJusticeCaseFilingOutcomeCallable Dt_oc_infoClient::getOcJusticeCaseFilingCallable(const GetOcJusticeCaseFilingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcJusticeCaseFilingOutcome()>>(
			[this, request]()
			{
			return this->getOcJusticeCaseFiling(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcJusticeCourtAnnouncementOutcome Dt_oc_infoClient::getOcJusticeCourtAnnouncement(const GetOcJusticeCourtAnnouncementRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcJusticeCourtAnnouncementOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcJusticeCourtAnnouncementOutcome(GetOcJusticeCourtAnnouncementResult(outcome.result()));
	else
		return GetOcJusticeCourtAnnouncementOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcJusticeCourtAnnouncementAsync(const GetOcJusticeCourtAnnouncementRequest& request, const GetOcJusticeCourtAnnouncementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcJusticeCourtAnnouncement(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcJusticeCourtAnnouncementOutcomeCallable Dt_oc_infoClient::getOcJusticeCourtAnnouncementCallable(const GetOcJusticeCourtAnnouncementRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcJusticeCourtAnnouncementOutcome()>>(
			[this, request]()
			{
			return this->getOcJusticeCourtAnnouncement(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcJusticeCourtNoticeOutcome Dt_oc_infoClient::getOcJusticeCourtNotice(const GetOcJusticeCourtNoticeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcJusticeCourtNoticeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcJusticeCourtNoticeOutcome(GetOcJusticeCourtNoticeResult(outcome.result()));
	else
		return GetOcJusticeCourtNoticeOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcJusticeCourtNoticeAsync(const GetOcJusticeCourtNoticeRequest& request, const GetOcJusticeCourtNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcJusticeCourtNotice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcJusticeCourtNoticeOutcomeCallable Dt_oc_infoClient::getOcJusticeCourtNoticeCallable(const GetOcJusticeCourtNoticeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcJusticeCourtNoticeOutcome()>>(
			[this, request]()
			{
			return this->getOcJusticeCourtNotice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcJusticeDishonestyOutcome Dt_oc_infoClient::getOcJusticeDishonesty(const GetOcJusticeDishonestyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcJusticeDishonestyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcJusticeDishonestyOutcome(GetOcJusticeDishonestyResult(outcome.result()));
	else
		return GetOcJusticeDishonestyOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcJusticeDishonestyAsync(const GetOcJusticeDishonestyRequest& request, const GetOcJusticeDishonestyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcJusticeDishonesty(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcJusticeDishonestyOutcomeCallable Dt_oc_infoClient::getOcJusticeDishonestyCallable(const GetOcJusticeDishonestyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcJusticeDishonestyOutcome()>>(
			[this, request]()
			{
			return this->getOcJusticeDishonesty(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcJusticeExecutedOutcome Dt_oc_infoClient::getOcJusticeExecuted(const GetOcJusticeExecutedRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcJusticeExecutedOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcJusticeExecutedOutcome(GetOcJusticeExecutedResult(outcome.result()));
	else
		return GetOcJusticeExecutedOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcJusticeExecutedAsync(const GetOcJusticeExecutedRequest& request, const GetOcJusticeExecutedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcJusticeExecuted(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcJusticeExecutedOutcomeCallable Dt_oc_infoClient::getOcJusticeExecutedCallable(const GetOcJusticeExecutedRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcJusticeExecutedOutcome()>>(
			[this, request]()
			{
			return this->getOcJusticeExecuted(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcJusticeJudgementDocOutcome Dt_oc_infoClient::getOcJusticeJudgementDoc(const GetOcJusticeJudgementDocRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcJusticeJudgementDocOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcJusticeJudgementDocOutcome(GetOcJusticeJudgementDocResult(outcome.result()));
	else
		return GetOcJusticeJudgementDocOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcJusticeJudgementDocAsync(const GetOcJusticeJudgementDocRequest& request, const GetOcJusticeJudgementDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcJusticeJudgementDoc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcJusticeJudgementDocOutcomeCallable Dt_oc_infoClient::getOcJusticeJudgementDocCallable(const GetOcJusticeJudgementDocRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcJusticeJudgementDocOutcome()>>(
			[this, request]()
			{
			return this->getOcJusticeJudgementDoc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcJusticeLimitHighConsumeOutcome Dt_oc_infoClient::getOcJusticeLimitHighConsume(const GetOcJusticeLimitHighConsumeRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcJusticeLimitHighConsumeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcJusticeLimitHighConsumeOutcome(GetOcJusticeLimitHighConsumeResult(outcome.result()));
	else
		return GetOcJusticeLimitHighConsumeOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcJusticeLimitHighConsumeAsync(const GetOcJusticeLimitHighConsumeRequest& request, const GetOcJusticeLimitHighConsumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcJusticeLimitHighConsume(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcJusticeLimitHighConsumeOutcomeCallable Dt_oc_infoClient::getOcJusticeLimitHighConsumeCallable(const GetOcJusticeLimitHighConsumeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcJusticeLimitHighConsumeOutcome()>>(
			[this, request]()
			{
			return this->getOcJusticeLimitHighConsume(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcJusticeTerminalCaseOutcome Dt_oc_infoClient::getOcJusticeTerminalCase(const GetOcJusticeTerminalCaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcJusticeTerminalCaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcJusticeTerminalCaseOutcome(GetOcJusticeTerminalCaseResult(outcome.result()));
	else
		return GetOcJusticeTerminalCaseOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcJusticeTerminalCaseAsync(const GetOcJusticeTerminalCaseRequest& request, const GetOcJusticeTerminalCaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcJusticeTerminalCase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcJusticeTerminalCaseOutcomeCallable Dt_oc_infoClient::getOcJusticeTerminalCaseCallable(const GetOcJusticeTerminalCaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcJusticeTerminalCaseOutcome()>>(
			[this, request]()
			{
			return this->getOcJusticeTerminalCase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcListedCompanyOutcome Dt_oc_infoClient::getOcListedCompany(const GetOcListedCompanyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcListedCompanyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcListedCompanyOutcome(GetOcListedCompanyResult(outcome.result()));
	else
		return GetOcListedCompanyOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcListedCompanyAsync(const GetOcListedCompanyRequest& request, const GetOcListedCompanyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcListedCompany(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcListedCompanyOutcomeCallable Dt_oc_infoClient::getOcListedCompanyCallable(const GetOcListedCompanyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcListedCompanyOutcome()>>(
			[this, request]()
			{
			return this->getOcListedCompany(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcNegativeAdminPunishmentOutcome Dt_oc_infoClient::getOcNegativeAdminPunishment(const GetOcNegativeAdminPunishmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcNegativeAdminPunishmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcNegativeAdminPunishmentOutcome(GetOcNegativeAdminPunishmentResult(outcome.result()));
	else
		return GetOcNegativeAdminPunishmentOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcNegativeAdminPunishmentAsync(const GetOcNegativeAdminPunishmentRequest& request, const GetOcNegativeAdminPunishmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcNegativeAdminPunishment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcNegativeAdminPunishmentOutcomeCallable Dt_oc_infoClient::getOcNegativeAdminPunishmentCallable(const GetOcNegativeAdminPunishmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcNegativeAdminPunishmentOutcome()>>(
			[this, request]()
			{
			return this->getOcNegativeAdminPunishment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcNegativeCustomsPunishmentOutcome Dt_oc_infoClient::getOcNegativeCustomsPunishment(const GetOcNegativeCustomsPunishmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcNegativeCustomsPunishmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcNegativeCustomsPunishmentOutcome(GetOcNegativeCustomsPunishmentResult(outcome.result()));
	else
		return GetOcNegativeCustomsPunishmentOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcNegativeCustomsPunishmentAsync(const GetOcNegativeCustomsPunishmentRequest& request, const GetOcNegativeCustomsPunishmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcNegativeCustomsPunishment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcNegativeCustomsPunishmentOutcomeCallable Dt_oc_infoClient::getOcNegativeCustomsPunishmentCallable(const GetOcNegativeCustomsPunishmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcNegativeCustomsPunishmentOutcome()>>(
			[this, request]()
			{
			return this->getOcNegativeCustomsPunishment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcNegativeEnvironmentPunishmentOutcome Dt_oc_infoClient::getOcNegativeEnvironmentPunishment(const GetOcNegativeEnvironmentPunishmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcNegativeEnvironmentPunishmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcNegativeEnvironmentPunishmentOutcome(GetOcNegativeEnvironmentPunishmentResult(outcome.result()));
	else
		return GetOcNegativeEnvironmentPunishmentOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcNegativeEnvironmentPunishmentAsync(const GetOcNegativeEnvironmentPunishmentRequest& request, const GetOcNegativeEnvironmentPunishmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcNegativeEnvironmentPunishment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcNegativeEnvironmentPunishmentOutcomeCallable Dt_oc_infoClient::getOcNegativeEnvironmentPunishmentCallable(const GetOcNegativeEnvironmentPunishmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcNegativeEnvironmentPunishmentOutcome()>>(
			[this, request]()
			{
			return this->getOcNegativeEnvironmentPunishment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcNegativeFoodDrugPunishmentOutcome Dt_oc_infoClient::getOcNegativeFoodDrugPunishment(const GetOcNegativeFoodDrugPunishmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcNegativeFoodDrugPunishmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcNegativeFoodDrugPunishmentOutcome(GetOcNegativeFoodDrugPunishmentResult(outcome.result()));
	else
		return GetOcNegativeFoodDrugPunishmentOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcNegativeFoodDrugPunishmentAsync(const GetOcNegativeFoodDrugPunishmentRequest& request, const GetOcNegativeFoodDrugPunishmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcNegativeFoodDrugPunishment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcNegativeFoodDrugPunishmentOutcomeCallable Dt_oc_infoClient::getOcNegativeFoodDrugPunishmentCallable(const GetOcNegativeFoodDrugPunishmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcNegativeFoodDrugPunishmentOutcome()>>(
			[this, request]()
			{
			return this->getOcNegativeFoodDrugPunishment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcNegativeQualityPunishmentOutcome Dt_oc_infoClient::getOcNegativeQualityPunishment(const GetOcNegativeQualityPunishmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcNegativeQualityPunishmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcNegativeQualityPunishmentOutcome(GetOcNegativeQualityPunishmentResult(outcome.result()));
	else
		return GetOcNegativeQualityPunishmentOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcNegativeQualityPunishmentAsync(const GetOcNegativeQualityPunishmentRequest& request, const GetOcNegativeQualityPunishmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcNegativeQualityPunishment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcNegativeQualityPunishmentOutcomeCallable Dt_oc_infoClient::getOcNegativeQualityPunishmentCallable(const GetOcNegativeQualityPunishmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcNegativeQualityPunishmentOutcome()>>(
			[this, request]()
			{
			return this->getOcNegativeQualityPunishment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcOperationBiddingOutcome Dt_oc_infoClient::getOcOperationBidding(const GetOcOperationBiddingRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcOperationBiddingOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcOperationBiddingOutcome(GetOcOperationBiddingResult(outcome.result()));
	else
		return GetOcOperationBiddingOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcOperationBiddingAsync(const GetOcOperationBiddingRequest& request, const GetOcOperationBiddingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcOperationBidding(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcOperationBiddingOutcomeCallable Dt_oc_infoClient::getOcOperationBiddingCallable(const GetOcOperationBiddingRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcOperationBiddingOutcome()>>(
			[this, request]()
			{
			return this->getOcOperationBidding(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcOperationCustomsOutcome Dt_oc_infoClient::getOcOperationCustoms(const GetOcOperationCustomsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcOperationCustomsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcOperationCustomsOutcome(GetOcOperationCustomsResult(outcome.result()));
	else
		return GetOcOperationCustomsOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcOperationCustomsAsync(const GetOcOperationCustomsRequest& request, const GetOcOperationCustomsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcOperationCustoms(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcOperationCustomsOutcomeCallable Dt_oc_infoClient::getOcOperationCustomsCallable(const GetOcOperationCustomsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcOperationCustomsOutcome()>>(
			[this, request]()
			{
			return this->getOcOperationCustoms(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcOperationPurchaseLandOutcome Dt_oc_infoClient::getOcOperationPurchaseLand(const GetOcOperationPurchaseLandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcOperationPurchaseLandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcOperationPurchaseLandOutcome(GetOcOperationPurchaseLandResult(outcome.result()));
	else
		return GetOcOperationPurchaseLandOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcOperationPurchaseLandAsync(const GetOcOperationPurchaseLandRequest& request, const GetOcOperationPurchaseLandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcOperationPurchaseLand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcOperationPurchaseLandOutcomeCallable Dt_oc_infoClient::getOcOperationPurchaseLandCallable(const GetOcOperationPurchaseLandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcOperationPurchaseLandOutcome()>>(
			[this, request]()
			{
			return this->getOcOperationPurchaseLand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcOperationRecruitmentOutcome Dt_oc_infoClient::getOcOperationRecruitment(const GetOcOperationRecruitmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcOperationRecruitmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcOperationRecruitmentOutcome(GetOcOperationRecruitmentResult(outcome.result()));
	else
		return GetOcOperationRecruitmentOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcOperationRecruitmentAsync(const GetOcOperationRecruitmentRequest& request, const GetOcOperationRecruitmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcOperationRecruitment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcOperationRecruitmentOutcomeCallable Dt_oc_infoClient::getOcOperationRecruitmentCallable(const GetOcOperationRecruitmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcOperationRecruitmentOutcome()>>(
			[this, request]()
			{
			return this->getOcOperationRecruitment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcProductBandOutcome Dt_oc_infoClient::getOcProductBand(const GetOcProductBandRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcProductBandOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcProductBandOutcome(GetOcProductBandResult(outcome.result()));
	else
		return GetOcProductBandOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcProductBandAsync(const GetOcProductBandRequest& request, const GetOcProductBandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcProductBand(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcProductBandOutcomeCallable Dt_oc_infoClient::getOcProductBandCallable(const GetOcProductBandRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcProductBandOutcome()>>(
			[this, request]()
			{
			return this->getOcProductBand(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcTaxAbnormalOutcome Dt_oc_infoClient::getOcTaxAbnormal(const GetOcTaxAbnormalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcTaxAbnormalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcTaxAbnormalOutcome(GetOcTaxAbnormalResult(outcome.result()));
	else
		return GetOcTaxAbnormalOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcTaxAbnormalAsync(const GetOcTaxAbnormalRequest& request, const GetOcTaxAbnormalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcTaxAbnormal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcTaxAbnormalOutcomeCallable Dt_oc_infoClient::getOcTaxAbnormalCallable(const GetOcTaxAbnormalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcTaxAbnormalOutcome()>>(
			[this, request]()
			{
			return this->getOcTaxAbnormal(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcTaxClassAOutcome Dt_oc_infoClient::getOcTaxClassA(const GetOcTaxClassARequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcTaxClassAOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcTaxClassAOutcome(GetOcTaxClassAResult(outcome.result()));
	else
		return GetOcTaxClassAOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcTaxClassAAsync(const GetOcTaxClassARequest& request, const GetOcTaxClassAAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcTaxClassA(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcTaxClassAOutcomeCallable Dt_oc_infoClient::getOcTaxClassACallable(const GetOcTaxClassARequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcTaxClassAOutcome()>>(
			[this, request]()
			{
			return this->getOcTaxClassA(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcTaxGeneralTaxpayerOutcome Dt_oc_infoClient::getOcTaxGeneralTaxpayer(const GetOcTaxGeneralTaxpayerRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcTaxGeneralTaxpayerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcTaxGeneralTaxpayerOutcome(GetOcTaxGeneralTaxpayerResult(outcome.result()));
	else
		return GetOcTaxGeneralTaxpayerOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcTaxGeneralTaxpayerAsync(const GetOcTaxGeneralTaxpayerRequest& request, const GetOcTaxGeneralTaxpayerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcTaxGeneralTaxpayer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcTaxGeneralTaxpayerOutcomeCallable Dt_oc_infoClient::getOcTaxGeneralTaxpayerCallable(const GetOcTaxGeneralTaxpayerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcTaxGeneralTaxpayerOutcome()>>(
			[this, request]()
			{
			return this->getOcTaxGeneralTaxpayer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcTaxIllegalOutcome Dt_oc_infoClient::getOcTaxIllegal(const GetOcTaxIllegalRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcTaxIllegalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcTaxIllegalOutcome(GetOcTaxIllegalResult(outcome.result()));
	else
		return GetOcTaxIllegalOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcTaxIllegalAsync(const GetOcTaxIllegalRequest& request, const GetOcTaxIllegalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcTaxIllegal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcTaxIllegalOutcomeCallable Dt_oc_infoClient::getOcTaxIllegalCallable(const GetOcTaxIllegalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcTaxIllegalOutcome()>>(
			[this, request]()
			{
			return this->getOcTaxIllegal(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcTaxOverdueOutcome Dt_oc_infoClient::getOcTaxOverdue(const GetOcTaxOverdueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcTaxOverdueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcTaxOverdueOutcome(GetOcTaxOverdueResult(outcome.result()));
	else
		return GetOcTaxOverdueOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcTaxOverdueAsync(const GetOcTaxOverdueRequest& request, const GetOcTaxOverdueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcTaxOverdue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcTaxOverdueOutcomeCallable Dt_oc_infoClient::getOcTaxOverdueCallable(const GetOcTaxOverdueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcTaxOverdueOutcome()>>(
			[this, request]()
			{
			return this->getOcTaxOverdue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetOcTaxPunishmentOutcome Dt_oc_infoClient::getOcTaxPunishment(const GetOcTaxPunishmentRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetOcTaxPunishmentOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetOcTaxPunishmentOutcome(GetOcTaxPunishmentResult(outcome.result()));
	else
		return GetOcTaxPunishmentOutcome(outcome.error());
}

void Dt_oc_infoClient::getOcTaxPunishmentAsync(const GetOcTaxPunishmentRequest& request, const GetOcTaxPunishmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getOcTaxPunishment(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetOcTaxPunishmentOutcomeCallable Dt_oc_infoClient::getOcTaxPunishmentCallable(const GetOcTaxPunishmentRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetOcTaxPunishmentOutcome()>>(
			[this, request]()
			{
			return this->getOcTaxPunishment(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetQccCertificationDetailByIdOutcome Dt_oc_infoClient::getQccCertificationDetailById(const GetQccCertificationDetailByIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetQccCertificationDetailByIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetQccCertificationDetailByIdOutcome(GetQccCertificationDetailByIdResult(outcome.result()));
	else
		return GetQccCertificationDetailByIdOutcome(outcome.error());
}

void Dt_oc_infoClient::getQccCertificationDetailByIdAsync(const GetQccCertificationDetailByIdRequest& request, const GetQccCertificationDetailByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getQccCertificationDetailById(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetQccCertificationDetailByIdOutcomeCallable Dt_oc_infoClient::getQccCertificationDetailByIdCallable(const GetQccCertificationDetailByIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetQccCertificationDetailByIdOutcome()>>(
			[this, request]()
			{
			return this->getQccCertificationDetailById(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Dt_oc_infoClient::GetQccSearchCertificationOutcome Dt_oc_infoClient::getQccSearchCertification(const GetQccSearchCertificationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetQccSearchCertificationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetQccSearchCertificationOutcome(GetQccSearchCertificationResult(outcome.result()));
	else
		return GetQccSearchCertificationOutcome(outcome.error());
}

void Dt_oc_infoClient::getQccSearchCertificationAsync(const GetQccSearchCertificationRequest& request, const GetQccSearchCertificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getQccSearchCertification(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Dt_oc_infoClient::GetQccSearchCertificationOutcomeCallable Dt_oc_infoClient::getQccSearchCertificationCallable(const GetQccSearchCertificationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetQccSearchCertificationOutcome()>>(
			[this, request]()
			{
			return this->getQccSearchCertification(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

