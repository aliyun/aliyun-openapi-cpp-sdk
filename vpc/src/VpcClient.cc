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

#include <alibabacloud/vpc/VpcClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

VpcClient::VpcClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), "vpc");
}

VpcClient::VpcClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), "vpc");
}

VpcClient::VpcClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), "vpc");
}

VpcClient::~VpcClient()
{}

CoreClient::EndpointOutcome VpcClient::endpoint()const
{
	if(!configuration().endpoint().empty())
		return CoreClient::EndpointOutcome(configuration().endpoint());

	auto endpoint = endpointProvider_->getEndpoint();
	
	if (endpoint.empty())
		return CoreClient::EndpointOutcome(Error("InvalidEndpoint",""));
	else
		return CoreClient::EndpointOutcome(endpoint);
}

VpcClient::UnassociateGlobalAccelerationInstanceOutcome VpcClient::unassociateGlobalAccelerationInstance(const UnassociateGlobalAccelerationInstanceRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return UnassociateGlobalAccelerationInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnassociateGlobalAccelerationInstanceOutcome(UnassociateGlobalAccelerationInstanceResult(outcome.result()));
	else
		return UnassociateGlobalAccelerationInstanceOutcome(outcome.error());
}

void VpcClient::unassociateGlobalAccelerationInstanceAsync(const UnassociateGlobalAccelerationInstanceRequest& request, const UnassociateGlobalAccelerationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unassociateGlobalAccelerationInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::UnassociateGlobalAccelerationInstanceOutcomeCallable VpcClient::unassociateGlobalAccelerationInstanceCallable(const UnassociateGlobalAccelerationInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnassociateGlobalAccelerationInstanceOutcome()>>(
			[this, request]()
			{
			return this->unassociateGlobalAccelerationInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteCustomerGatewayOutcome VpcClient::deleteCustomerGateway(const DeleteCustomerGatewayRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCustomerGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCustomerGatewayOutcome(DeleteCustomerGatewayResult(outcome.result()));
	else
		return DeleteCustomerGatewayOutcome(outcome.error());
}

void VpcClient::deleteCustomerGatewayAsync(const DeleteCustomerGatewayRequest& request, const DeleteCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCustomerGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteCustomerGatewayOutcomeCallable VpcClient::deleteCustomerGatewayCallable(const DeleteCustomerGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCustomerGatewayOutcome()>>(
			[this, request]()
			{
			return this->deleteCustomerGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeRouteTableListOutcome VpcClient::describeRouteTableList(const DescribeRouteTableListRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRouteTableListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRouteTableListOutcome(DescribeRouteTableListResult(outcome.result()));
	else
		return DescribeRouteTableListOutcome(outcome.error());
}

void VpcClient::describeRouteTableListAsync(const DescribeRouteTableListRequest& request, const DescribeRouteTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRouteTableList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeRouteTableListOutcomeCallable VpcClient::describeRouteTableListCallable(const DescribeRouteTableListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRouteTableListOutcome()>>(
			[this, request]()
			{
			return this->describeRouteTableList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::AssociatePhysicalConnectionToVirtualBorderRouterOutcome VpcClient::associatePhysicalConnectionToVirtualBorderRouter(const AssociatePhysicalConnectionToVirtualBorderRouterRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return AssociatePhysicalConnectionToVirtualBorderRouterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociatePhysicalConnectionToVirtualBorderRouterOutcome(AssociatePhysicalConnectionToVirtualBorderRouterResult(outcome.result()));
	else
		return AssociatePhysicalConnectionToVirtualBorderRouterOutcome(outcome.error());
}

void VpcClient::associatePhysicalConnectionToVirtualBorderRouterAsync(const AssociatePhysicalConnectionToVirtualBorderRouterRequest& request, const AssociatePhysicalConnectionToVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associatePhysicalConnectionToVirtualBorderRouter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::AssociatePhysicalConnectionToVirtualBorderRouterOutcomeCallable VpcClient::associatePhysicalConnectionToVirtualBorderRouterCallable(const AssociatePhysicalConnectionToVirtualBorderRouterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociatePhysicalConnectionToVirtualBorderRouterOutcome()>>(
			[this, request]()
			{
			return this->associatePhysicalConnectionToVirtualBorderRouter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteGlobalAccelerationInstanceOutcome VpcClient::deleteGlobalAccelerationInstance(const DeleteGlobalAccelerationInstanceRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteGlobalAccelerationInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteGlobalAccelerationInstanceOutcome(DeleteGlobalAccelerationInstanceResult(outcome.result()));
	else
		return DeleteGlobalAccelerationInstanceOutcome(outcome.error());
}

void VpcClient::deleteGlobalAccelerationInstanceAsync(const DeleteGlobalAccelerationInstanceRequest& request, const DeleteGlobalAccelerationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteGlobalAccelerationInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteGlobalAccelerationInstanceOutcomeCallable VpcClient::deleteGlobalAccelerationInstanceCallable(const DeleteGlobalAccelerationInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteGlobalAccelerationInstanceOutcome()>>(
			[this, request]()
			{
			return this->deleteGlobalAccelerationInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeCustomerGatewaysOutcome VpcClient::describeCustomerGateways(const DescribeCustomerGatewaysRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomerGatewaysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomerGatewaysOutcome(DescribeCustomerGatewaysResult(outcome.result()));
	else
		return DescribeCustomerGatewaysOutcome(outcome.error());
}

void VpcClient::describeCustomerGatewaysAsync(const DescribeCustomerGatewaysRequest& request, const DescribeCustomerGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomerGateways(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeCustomerGatewaysOutcomeCallable VpcClient::describeCustomerGatewaysCallable(const DescribeCustomerGatewaysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomerGatewaysOutcome()>>(
			[this, request]()
			{
			return this->describeCustomerGateways(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeGlobalAccelerationInstancesOutcome VpcClient::describeGlobalAccelerationInstances(const DescribeGlobalAccelerationInstancesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeGlobalAccelerationInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeGlobalAccelerationInstancesOutcome(DescribeGlobalAccelerationInstancesResult(outcome.result()));
	else
		return DescribeGlobalAccelerationInstancesOutcome(outcome.error());
}

void VpcClient::describeGlobalAccelerationInstancesAsync(const DescribeGlobalAccelerationInstancesRequest& request, const DescribeGlobalAccelerationInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeGlobalAccelerationInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeGlobalAccelerationInstancesOutcomeCallable VpcClient::describeGlobalAccelerationInstancesCallable(const DescribeGlobalAccelerationInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeGlobalAccelerationInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeGlobalAccelerationInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifySslVpnClientCertOutcome VpcClient::modifySslVpnClientCert(const ModifySslVpnClientCertRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySslVpnClientCertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySslVpnClientCertOutcome(ModifySslVpnClientCertResult(outcome.result()));
	else
		return ModifySslVpnClientCertOutcome(outcome.error());
}

void VpcClient::modifySslVpnClientCertAsync(const ModifySslVpnClientCertRequest& request, const ModifySslVpnClientCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySslVpnClientCert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifySslVpnClientCertOutcomeCallable VpcClient::modifySslVpnClientCertCallable(const ModifySslVpnClientCertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySslVpnClientCertOutcome()>>(
			[this, request]()
			{
			return this->modifySslVpnClientCert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteVpcOutcome VpcClient::deleteVpc(const DeleteVpcRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVpcOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVpcOutcome(DeleteVpcResult(outcome.result()));
	else
		return DeleteVpcOutcome(outcome.error());
}

void VpcClient::deleteVpcAsync(const DeleteVpcRequest& request, const DeleteVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVpc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteVpcOutcomeCallable VpcClient::deleteVpcCallable(const DeleteVpcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVpcOutcome()>>(
			[this, request]()
			{
			return this->deleteVpc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DownloadVpnConnectionConfigOutcome VpcClient::downloadVpnConnectionConfig(const DownloadVpnConnectionConfigRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DownloadVpnConnectionConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DownloadVpnConnectionConfigOutcome(DownloadVpnConnectionConfigResult(outcome.result()));
	else
		return DownloadVpnConnectionConfigOutcome(outcome.error());
}

void VpcClient::downloadVpnConnectionConfigAsync(const DownloadVpnConnectionConfigRequest& request, const DownloadVpnConnectionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, downloadVpnConnectionConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DownloadVpnConnectionConfigOutcomeCallable VpcClient::downloadVpnConnectionConfigCallable(const DownloadVpnConnectionConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DownloadVpnConnectionConfigOutcome()>>(
			[this, request]()
			{
			return this->downloadVpnConnectionConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::RemoveCommonBandwidthPackageIpOutcome VpcClient::removeCommonBandwidthPackageIp(const RemoveCommonBandwidthPackageIpRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveCommonBandwidthPackageIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveCommonBandwidthPackageIpOutcome(RemoveCommonBandwidthPackageIpResult(outcome.result()));
	else
		return RemoveCommonBandwidthPackageIpOutcome(outcome.error());
}

void VpcClient::removeCommonBandwidthPackageIpAsync(const RemoveCommonBandwidthPackageIpRequest& request, const RemoveCommonBandwidthPackageIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeCommonBandwidthPackageIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::RemoveCommonBandwidthPackageIpOutcomeCallable VpcClient::removeCommonBandwidthPackageIpCallable(const RemoveCommonBandwidthPackageIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveCommonBandwidthPackageIpOutcome()>>(
			[this, request]()
			{
			return this->removeCommonBandwidthPackageIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyBandwidthPackageSpecOutcome VpcClient::modifyBandwidthPackageSpec(const ModifyBandwidthPackageSpecRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBandwidthPackageSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBandwidthPackageSpecOutcome(ModifyBandwidthPackageSpecResult(outcome.result()));
	else
		return ModifyBandwidthPackageSpecOutcome(outcome.error());
}

void VpcClient::modifyBandwidthPackageSpecAsync(const ModifyBandwidthPackageSpecRequest& request, const ModifyBandwidthPackageSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBandwidthPackageSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyBandwidthPackageSpecOutcomeCallable VpcClient::modifyBandwidthPackageSpecCallable(const ModifyBandwidthPackageSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBandwidthPackageSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyBandwidthPackageSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateNatGatewayOutcome VpcClient::createNatGateway(const CreateNatGatewayRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNatGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNatGatewayOutcome(CreateNatGatewayResult(outcome.result()));
	else
		return CreateNatGatewayOutcome(outcome.error());
}

void VpcClient::createNatGatewayAsync(const CreateNatGatewayRequest& request, const CreateNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNatGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateNatGatewayOutcomeCallable VpcClient::createNatGatewayCallable(const CreateNatGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNatGatewayOutcome()>>(
			[this, request]()
			{
			return this->createNatGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteVSwitchOutcome VpcClient::deleteVSwitch(const DeleteVSwitchRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVSwitchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVSwitchOutcome(DeleteVSwitchResult(outcome.result()));
	else
		return DeleteVSwitchOutcome(outcome.error());
}

void VpcClient::deleteVSwitchAsync(const DeleteVSwitchRequest& request, const DeleteVSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVSwitch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteVSwitchOutcomeCallable VpcClient::deleteVSwitchCallable(const DeleteVSwitchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVSwitchOutcome()>>(
			[this, request]()
			{
			return this->deleteVSwitch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateHaVipOutcome VpcClient::createHaVip(const CreateHaVipRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateHaVipOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateHaVipOutcome(CreateHaVipResult(outcome.result()));
	else
		return CreateHaVipOutcome(outcome.error());
}

void VpcClient::createHaVipAsync(const CreateHaVipRequest& request, const CreateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createHaVip(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateHaVipOutcomeCallable VpcClient::createHaVipCallable(const CreateHaVipRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateHaVipOutcome()>>(
			[this, request]()
			{
			return this->createHaVip(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateBandwidthPackageOutcome VpcClient::createBandwidthPackage(const CreateBandwidthPackageRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBandwidthPackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBandwidthPackageOutcome(CreateBandwidthPackageResult(outcome.result()));
	else
		return CreateBandwidthPackageOutcome(outcome.error());
}

void VpcClient::createBandwidthPackageAsync(const CreateBandwidthPackageRequest& request, const CreateBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBandwidthPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateBandwidthPackageOutcomeCallable VpcClient::createBandwidthPackageCallable(const CreateBandwidthPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBandwidthPackageOutcome()>>(
			[this, request]()
			{
			return this->createBandwidthPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::RecoverVirtualBorderRouterOutcome VpcClient::recoverVirtualBorderRouter(const RecoverVirtualBorderRouterRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return RecoverVirtualBorderRouterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RecoverVirtualBorderRouterOutcome(RecoverVirtualBorderRouterResult(outcome.result()));
	else
		return RecoverVirtualBorderRouterOutcome(outcome.error());
}

void VpcClient::recoverVirtualBorderRouterAsync(const RecoverVirtualBorderRouterRequest& request, const RecoverVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, recoverVirtualBorderRouter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::RecoverVirtualBorderRouterOutcomeCallable VpcClient::recoverVirtualBorderRouterCallable(const RecoverVirtualBorderRouterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RecoverVirtualBorderRouterOutcome()>>(
			[this, request]()
			{
			return this->recoverVirtualBorderRouter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::AssociateEipAddressOutcome VpcClient::associateEipAddress(const AssociateEipAddressRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateEipAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateEipAddressOutcome(AssociateEipAddressResult(outcome.result()));
	else
		return AssociateEipAddressOutcome(outcome.error());
}

void VpcClient::associateEipAddressAsync(const AssociateEipAddressRequest& request, const AssociateEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateEipAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::AssociateEipAddressOutcomeCallable VpcClient::associateEipAddressCallable(const AssociateEipAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateEipAddressOutcome()>>(
			[this, request]()
			{
			return this->associateEipAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeEipAddressesOutcome VpcClient::describeEipAddresses(const DescribeEipAddressesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEipAddressesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEipAddressesOutcome(DescribeEipAddressesResult(outcome.result()));
	else
		return DescribeEipAddressesOutcome(outcome.error());
}

void VpcClient::describeEipAddressesAsync(const DescribeEipAddressesRequest& request, const DescribeEipAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEipAddresses(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeEipAddressesOutcomeCallable VpcClient::describeEipAddressesCallable(const DescribeEipAddressesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEipAddressesOutcome()>>(
			[this, request]()
			{
			return this->describeEipAddresses(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateCustomerGatewayOutcome VpcClient::createCustomerGateway(const CreateCustomerGatewayRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCustomerGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCustomerGatewayOutcome(CreateCustomerGatewayResult(outcome.result()));
	else
		return CreateCustomerGatewayOutcome(outcome.error());
}

void VpcClient::createCustomerGatewayAsync(const CreateCustomerGatewayRequest& request, const CreateCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCustomerGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateCustomerGatewayOutcomeCallable VpcClient::createCustomerGatewayCallable(const CreateCustomerGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCustomerGatewayOutcome()>>(
			[this, request]()
			{
			return this->createCustomerGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ActivateRouterInterfaceOutcome VpcClient::activateRouterInterface(const ActivateRouterInterfaceRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ActivateRouterInterfaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ActivateRouterInterfaceOutcome(ActivateRouterInterfaceResult(outcome.result()));
	else
		return ActivateRouterInterfaceOutcome(outcome.error());
}

void VpcClient::activateRouterInterfaceAsync(const ActivateRouterInterfaceRequest& request, const ActivateRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, activateRouterInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ActivateRouterInterfaceOutcomeCallable VpcClient::activateRouterInterfaceCallable(const ActivateRouterInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActivateRouterInterfaceOutcome()>>(
			[this, request]()
			{
			return this->activateRouterInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteSslVpnServerOutcome VpcClient::deleteSslVpnServer(const DeleteSslVpnServerRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSslVpnServerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSslVpnServerOutcome(DeleteSslVpnServerResult(outcome.result()));
	else
		return DeleteSslVpnServerOutcome(outcome.error());
}

void VpcClient::deleteSslVpnServerAsync(const DeleteSslVpnServerRequest& request, const DeleteSslVpnServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSslVpnServer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteSslVpnServerOutcomeCallable VpcClient::deleteSslVpnServerCallable(const DeleteSslVpnServerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSslVpnServerOutcome()>>(
			[this, request]()
			{
			return this->deleteSslVpnServer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteBandwidthPackageOutcome VpcClient::deleteBandwidthPackage(const DeleteBandwidthPackageRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBandwidthPackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBandwidthPackageOutcome(DeleteBandwidthPackageResult(outcome.result()));
	else
		return DeleteBandwidthPackageOutcome(outcome.error());
}

void VpcClient::deleteBandwidthPackageAsync(const DeleteBandwidthPackageRequest& request, const DeleteBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBandwidthPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteBandwidthPackageOutcomeCallable VpcClient::deleteBandwidthPackageCallable(const DeleteBandwidthPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBandwidthPackageOutcome()>>(
			[this, request]()
			{
			return this->deleteBandwidthPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteBgpPeerOutcome VpcClient::deleteBgpPeer(const DeleteBgpPeerRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBgpPeerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBgpPeerOutcome(DeleteBgpPeerResult(outcome.result()));
	else
		return DeleteBgpPeerOutcome(outcome.error());
}

void VpcClient::deleteBgpPeerAsync(const DeleteBgpPeerRequest& request, const DeleteBgpPeerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBgpPeer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteBgpPeerOutcomeCallable VpcClient::deleteBgpPeerCallable(const DeleteBgpPeerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBgpPeerOutcome()>>(
			[this, request]()
			{
			return this->deleteBgpPeer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteNqaOutcome VpcClient::deleteNqa(const DeleteNqaRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNqaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNqaOutcome(DeleteNqaResult(outcome.result()));
	else
		return DeleteNqaOutcome(outcome.error());
}

void VpcClient::deleteNqaAsync(const DeleteNqaRequest& request, const DeleteNqaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNqa(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteNqaOutcomeCallable VpcClient::deleteNqaCallable(const DeleteNqaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNqaOutcome()>>(
			[this, request]()
			{
			return this->deleteNqa(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::TerminateVirtualBorderRouterOutcome VpcClient::terminateVirtualBorderRouter(const TerminateVirtualBorderRouterRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return TerminateVirtualBorderRouterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TerminateVirtualBorderRouterOutcome(TerminateVirtualBorderRouterResult(outcome.result()));
	else
		return TerminateVirtualBorderRouterOutcome(outcome.error());
}

void VpcClient::terminateVirtualBorderRouterAsync(const TerminateVirtualBorderRouterRequest& request, const TerminateVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, terminateVirtualBorderRouter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::TerminateVirtualBorderRouterOutcomeCallable VpcClient::terminateVirtualBorderRouterCallable(const TerminateVirtualBorderRouterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TerminateVirtualBorderRouterOutcome()>>(
			[this, request]()
			{
			return this->terminateVirtualBorderRouter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyRouteTableAttributesOutcome VpcClient::modifyRouteTableAttributes(const ModifyRouteTableAttributesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRouteTableAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRouteTableAttributesOutcome(ModifyRouteTableAttributesResult(outcome.result()));
	else
		return ModifyRouteTableAttributesOutcome(outcome.error());
}

void VpcClient::modifyRouteTableAttributesAsync(const ModifyRouteTableAttributesRequest& request, const ModifyRouteTableAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRouteTableAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyRouteTableAttributesOutcomeCallable VpcClient::modifyRouteTableAttributesCallable(const ModifyRouteTableAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRouteTableAttributesOutcome()>>(
			[this, request]()
			{
			return this->modifyRouteTableAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeletePhysicalConnectionOutcome VpcClient::deletePhysicalConnection(const DeletePhysicalConnectionRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePhysicalConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePhysicalConnectionOutcome(DeletePhysicalConnectionResult(outcome.result()));
	else
		return DeletePhysicalConnectionOutcome(outcome.error());
}

void VpcClient::deletePhysicalConnectionAsync(const DeletePhysicalConnectionRequest& request, const DeletePhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePhysicalConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeletePhysicalConnectionOutcomeCallable VpcClient::deletePhysicalConnectionCallable(const DeletePhysicalConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePhysicalConnectionOutcome()>>(
			[this, request]()
			{
			return this->deletePhysicalConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyForwardEntryOutcome VpcClient::modifyForwardEntry(const ModifyForwardEntryRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyForwardEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyForwardEntryOutcome(ModifyForwardEntryResult(outcome.result()));
	else
		return ModifyForwardEntryOutcome(outcome.error());
}

void VpcClient::modifyForwardEntryAsync(const ModifyForwardEntryRequest& request, const ModifyForwardEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyForwardEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyForwardEntryOutcomeCallable VpcClient::modifyForwardEntryCallable(const ModifyForwardEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyForwardEntryOutcome()>>(
			[this, request]()
			{
			return this->modifyForwardEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateVpcOutcome VpcClient::createVpc(const CreateVpcRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVpcOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVpcOutcome(CreateVpcResult(outcome.result()));
	else
		return CreateVpcOutcome(outcome.error());
}

void VpcClient::createVpcAsync(const CreateVpcRequest& request, const CreateVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVpc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateVpcOutcomeCallable VpcClient::createVpcCallable(const CreateVpcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVpcOutcome()>>(
			[this, request]()
			{
			return this->createVpc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeForwardTableEntriesOutcome VpcClient::describeForwardTableEntries(const DescribeForwardTableEntriesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeForwardTableEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeForwardTableEntriesOutcome(DescribeForwardTableEntriesResult(outcome.result()));
	else
		return DescribeForwardTableEntriesOutcome(outcome.error());
}

void VpcClient::describeForwardTableEntriesAsync(const DescribeForwardTableEntriesRequest& request, const DescribeForwardTableEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeForwardTableEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeForwardTableEntriesOutcomeCallable VpcClient::describeForwardTableEntriesCallable(const DescribeForwardTableEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeForwardTableEntriesOutcome()>>(
			[this, request]()
			{
			return this->describeForwardTableEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::UnassociateEipAddressOutcome VpcClient::unassociateEipAddress(const UnassociateEipAddressRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return UnassociateEipAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnassociateEipAddressOutcome(UnassociateEipAddressResult(outcome.result()));
	else
		return UnassociateEipAddressOutcome(outcome.error());
}

void VpcClient::unassociateEipAddressAsync(const UnassociateEipAddressRequest& request, const UnassociateEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unassociateEipAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::UnassociateEipAddressOutcomeCallable VpcClient::unassociateEipAddressCallable(const UnassociateEipAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnassociateEipAddressOutcome()>>(
			[this, request]()
			{
			return this->unassociateEipAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeSslVpnClientCertsOutcome VpcClient::describeSslVpnClientCerts(const DescribeSslVpnClientCertsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSslVpnClientCertsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSslVpnClientCertsOutcome(DescribeSslVpnClientCertsResult(outcome.result()));
	else
		return DescribeSslVpnClientCertsOutcome(outcome.error());
}

void VpcClient::describeSslVpnClientCertsAsync(const DescribeSslVpnClientCertsRequest& request, const DescribeSslVpnClientCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSslVpnClientCerts(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeSslVpnClientCertsOutcomeCallable VpcClient::describeSslVpnClientCertsCallable(const DescribeSslVpnClientCertsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSslVpnClientCertsOutcome()>>(
			[this, request]()
			{
			return this->describeSslVpnClientCerts(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeVpnConnectionOutcome VpcClient::describeVpnConnection(const DescribeVpnConnectionRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVpnConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVpnConnectionOutcome(DescribeVpnConnectionResult(outcome.result()));
	else
		return DescribeVpnConnectionOutcome(outcome.error());
}

void VpcClient::describeVpnConnectionAsync(const DescribeVpnConnectionRequest& request, const DescribeVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVpnConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeVpnConnectionOutcomeCallable VpcClient::describeVpnConnectionCallable(const DescribeVpnConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVpnConnectionOutcome()>>(
			[this, request]()
			{
			return this->describeVpnConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyGlobalAccelerationInstanceSpecOutcome VpcClient::modifyGlobalAccelerationInstanceSpec(const ModifyGlobalAccelerationInstanceSpecRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyGlobalAccelerationInstanceSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyGlobalAccelerationInstanceSpecOutcome(ModifyGlobalAccelerationInstanceSpecResult(outcome.result()));
	else
		return ModifyGlobalAccelerationInstanceSpecOutcome(outcome.error());
}

void VpcClient::modifyGlobalAccelerationInstanceSpecAsync(const ModifyGlobalAccelerationInstanceSpecRequest& request, const ModifyGlobalAccelerationInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGlobalAccelerationInstanceSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyGlobalAccelerationInstanceSpecOutcomeCallable VpcClient::modifyGlobalAccelerationInstanceSpecCallable(const ModifyGlobalAccelerationInstanceSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGlobalAccelerationInstanceSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyGlobalAccelerationInstanceSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::AddGlobalAccelerationInstanceIpOutcome VpcClient::addGlobalAccelerationInstanceIp(const AddGlobalAccelerationInstanceIpRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return AddGlobalAccelerationInstanceIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddGlobalAccelerationInstanceIpOutcome(AddGlobalAccelerationInstanceIpResult(outcome.result()));
	else
		return AddGlobalAccelerationInstanceIpOutcome(outcome.error());
}

void VpcClient::addGlobalAccelerationInstanceIpAsync(const AddGlobalAccelerationInstanceIpRequest& request, const AddGlobalAccelerationInstanceIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addGlobalAccelerationInstanceIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::AddGlobalAccelerationInstanceIpOutcomeCallable VpcClient::addGlobalAccelerationInstanceIpCallable(const AddGlobalAccelerationInstanceIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddGlobalAccelerationInstanceIpOutcome()>>(
			[this, request]()
			{
			return this->addGlobalAccelerationInstanceIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteRouterInterfaceOutcome VpcClient::deleteRouterInterface(const DeleteRouterInterfaceRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRouterInterfaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRouterInterfaceOutcome(DeleteRouterInterfaceResult(outcome.result()));
	else
		return DeleteRouterInterfaceOutcome(outcome.error());
}

void VpcClient::deleteRouterInterfaceAsync(const DeleteRouterInterfaceRequest& request, const DeleteRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRouterInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteRouterInterfaceOutcomeCallable VpcClient::deleteRouterInterfaceCallable(const DeleteRouterInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRouterInterfaceOutcome()>>(
			[this, request]()
			{
			return this->deleteRouterInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateSslVpnServerOutcome VpcClient::createSslVpnServer(const CreateSslVpnServerRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSslVpnServerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSslVpnServerOutcome(CreateSslVpnServerResult(outcome.result()));
	else
		return CreateSslVpnServerOutcome(outcome.error());
}

void VpcClient::createSslVpnServerAsync(const CreateSslVpnServerRequest& request, const CreateSslVpnServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSslVpnServer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateSslVpnServerOutcomeCallable VpcClient::createSslVpnServerCallable(const CreateSslVpnServerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSslVpnServerOutcome()>>(
			[this, request]()
			{
			return this->createSslVpnServer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeBandwidthPackagePublicIpMonitorDataOutcome VpcClient::describeBandwidthPackagePublicIpMonitorData(const DescribeBandwidthPackagePublicIpMonitorDataRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBandwidthPackagePublicIpMonitorDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBandwidthPackagePublicIpMonitorDataOutcome(DescribeBandwidthPackagePublicIpMonitorDataResult(outcome.result()));
	else
		return DescribeBandwidthPackagePublicIpMonitorDataOutcome(outcome.error());
}

void VpcClient::describeBandwidthPackagePublicIpMonitorDataAsync(const DescribeBandwidthPackagePublicIpMonitorDataRequest& request, const DescribeBandwidthPackagePublicIpMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBandwidthPackagePublicIpMonitorData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeBandwidthPackagePublicIpMonitorDataOutcomeCallable VpcClient::describeBandwidthPackagePublicIpMonitorDataCallable(const DescribeBandwidthPackagePublicIpMonitorDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBandwidthPackagePublicIpMonitorDataOutcome()>>(
			[this, request]()
			{
			return this->describeBandwidthPackagePublicIpMonitorData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeNqasOutcome VpcClient::describeNqas(const DescribeNqasRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNqasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNqasOutcome(DescribeNqasResult(outcome.result()));
	else
		return DescribeNqasOutcome(outcome.error());
}

void VpcClient::describeNqasAsync(const DescribeNqasRequest& request, const DescribeNqasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNqas(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeNqasOutcomeCallable VpcClient::describeNqasCallable(const DescribeNqasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNqasOutcome()>>(
			[this, request]()
			{
			return this->describeNqas(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyVirtualBorderRouterAttributeOutcome VpcClient::modifyVirtualBorderRouterAttribute(const ModifyVirtualBorderRouterAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVirtualBorderRouterAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVirtualBorderRouterAttributeOutcome(ModifyVirtualBorderRouterAttributeResult(outcome.result()));
	else
		return ModifyVirtualBorderRouterAttributeOutcome(outcome.error());
}

void VpcClient::modifyVirtualBorderRouterAttributeAsync(const ModifyVirtualBorderRouterAttributeRequest& request, const ModifyVirtualBorderRouterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVirtualBorderRouterAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyVirtualBorderRouterAttributeOutcomeCallable VpcClient::modifyVirtualBorderRouterAttributeCallable(const ModifyVirtualBorderRouterAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVirtualBorderRouterAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyVirtualBorderRouterAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyNatGatewayAttributeOutcome VpcClient::modifyNatGatewayAttribute(const ModifyNatGatewayAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyNatGatewayAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyNatGatewayAttributeOutcome(ModifyNatGatewayAttributeResult(outcome.result()));
	else
		return ModifyNatGatewayAttributeOutcome(outcome.error());
}

void VpcClient::modifyNatGatewayAttributeAsync(const ModifyNatGatewayAttributeRequest& request, const ModifyNatGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyNatGatewayAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyNatGatewayAttributeOutcomeCallable VpcClient::modifyNatGatewayAttributeCallable(const ModifyNatGatewayAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyNatGatewayAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyNatGatewayAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeEipMonitorDataOutcome VpcClient::describeEipMonitorData(const DescribeEipMonitorDataRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEipMonitorDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEipMonitorDataOutcome(DescribeEipMonitorDataResult(outcome.result()));
	else
		return DescribeEipMonitorDataOutcome(outcome.error());
}

void VpcClient::describeEipMonitorDataAsync(const DescribeEipMonitorDataRequest& request, const DescribeEipMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEipMonitorData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeEipMonitorDataOutcomeCallable VpcClient::describeEipMonitorDataCallable(const DescribeEipMonitorDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEipMonitorDataOutcome()>>(
			[this, request]()
			{
			return this->describeEipMonitorData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteVpnGatewayOutcome VpcClient::deleteVpnGateway(const DeleteVpnGatewayRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVpnGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVpnGatewayOutcome(DeleteVpnGatewayResult(outcome.result()));
	else
		return DeleteVpnGatewayOutcome(outcome.error());
}

void VpcClient::deleteVpnGatewayAsync(const DeleteVpnGatewayRequest& request, const DeleteVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVpnGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteVpnGatewayOutcomeCallable VpcClient::deleteVpnGatewayCallable(const DeleteVpnGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVpnGatewayOutcome()>>(
			[this, request]()
			{
			return this->deleteVpnGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeCustomerGatewayOutcome VpcClient::describeCustomerGateway(const DescribeCustomerGatewayRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCustomerGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCustomerGatewayOutcome(DescribeCustomerGatewayResult(outcome.result()));
	else
		return DescribeCustomerGatewayOutcome(outcome.error());
}

void VpcClient::describeCustomerGatewayAsync(const DescribeCustomerGatewayRequest& request, const DescribeCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCustomerGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeCustomerGatewayOutcomeCallable VpcClient::describeCustomerGatewayCallable(const DescribeCustomerGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCustomerGatewayOutcome()>>(
			[this, request]()
			{
			return this->describeCustomerGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyVpnGatewayAttributeOutcome VpcClient::modifyVpnGatewayAttribute(const ModifyVpnGatewayAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVpnGatewayAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVpnGatewayAttributeOutcome(ModifyVpnGatewayAttributeResult(outcome.result()));
	else
		return ModifyVpnGatewayAttributeOutcome(outcome.error());
}

void VpcClient::modifyVpnGatewayAttributeAsync(const ModifyVpnGatewayAttributeRequest& request, const ModifyVpnGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVpnGatewayAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyVpnGatewayAttributeOutcomeCallable VpcClient::modifyVpnGatewayAttributeCallable(const ModifyVpnGatewayAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVpnGatewayAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyVpnGatewayAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::AddBgpNetworkOutcome VpcClient::addBgpNetwork(const AddBgpNetworkRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return AddBgpNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddBgpNetworkOutcome(AddBgpNetworkResult(outcome.result()));
	else
		return AddBgpNetworkOutcome(outcome.error());
}

void VpcClient::addBgpNetworkAsync(const AddBgpNetworkRequest& request, const AddBgpNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addBgpNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::AddBgpNetworkOutcomeCallable VpcClient::addBgpNetworkCallable(const AddBgpNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddBgpNetworkOutcome()>>(
			[this, request]()
			{
			return this->addBgpNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifySslVpnServerOutcome VpcClient::modifySslVpnServer(const ModifySslVpnServerRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySslVpnServerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySslVpnServerOutcome(ModifySslVpnServerResult(outcome.result()));
	else
		return ModifySslVpnServerOutcome(outcome.error());
}

void VpcClient::modifySslVpnServerAsync(const ModifySslVpnServerRequest& request, const ModifySslVpnServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySslVpnServer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifySslVpnServerOutcomeCallable VpcClient::modifySslVpnServerCallable(const ModifySslVpnServerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySslVpnServerOutcome()>>(
			[this, request]()
			{
			return this->modifySslVpnServer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeVpnConnectionsOutcome VpcClient::describeVpnConnections(const DescribeVpnConnectionsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVpnConnectionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVpnConnectionsOutcome(DescribeVpnConnectionsResult(outcome.result()));
	else
		return DescribeVpnConnectionsOutcome(outcome.error());
}

void VpcClient::describeVpnConnectionsAsync(const DescribeVpnConnectionsRequest& request, const DescribeVpnConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVpnConnections(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeVpnConnectionsOutcomeCallable VpcClient::describeVpnConnectionsCallable(const DescribeVpnConnectionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVpnConnectionsOutcome()>>(
			[this, request]()
			{
			return this->describeVpnConnections(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeNewProjectEipMonitorDataOutcome VpcClient::describeNewProjectEipMonitorData(const DescribeNewProjectEipMonitorDataRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNewProjectEipMonitorDataOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNewProjectEipMonitorDataOutcome(DescribeNewProjectEipMonitorDataResult(outcome.result()));
	else
		return DescribeNewProjectEipMonitorDataOutcome(outcome.error());
}

void VpcClient::describeNewProjectEipMonitorDataAsync(const DescribeNewProjectEipMonitorDataRequest& request, const DescribeNewProjectEipMonitorDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNewProjectEipMonitorData(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeNewProjectEipMonitorDataOutcomeCallable VpcClient::describeNewProjectEipMonitorDataCallable(const DescribeNewProjectEipMonitorDataRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNewProjectEipMonitorDataOutcome()>>(
			[this, request]()
			{
			return this->describeNewProjectEipMonitorData(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyBandwidthPackageAttributeOutcome VpcClient::modifyBandwidthPackageAttribute(const ModifyBandwidthPackageAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBandwidthPackageAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBandwidthPackageAttributeOutcome(ModifyBandwidthPackageAttributeResult(outcome.result()));
	else
		return ModifyBandwidthPackageAttributeOutcome(outcome.error());
}

void VpcClient::modifyBandwidthPackageAttributeAsync(const ModifyBandwidthPackageAttributeRequest& request, const ModifyBandwidthPackageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBandwidthPackageAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyBandwidthPackageAttributeOutcomeCallable VpcClient::modifyBandwidthPackageAttributeCallable(const ModifyBandwidthPackageAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBandwidthPackageAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyBandwidthPackageAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ConnectRouterInterfaceOutcome VpcClient::connectRouterInterface(const ConnectRouterInterfaceRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ConnectRouterInterfaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConnectRouterInterfaceOutcome(ConnectRouterInterfaceResult(outcome.result()));
	else
		return ConnectRouterInterfaceOutcome(outcome.error());
}

void VpcClient::connectRouterInterfaceAsync(const ConnectRouterInterfaceRequest& request, const ConnectRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, connectRouterInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ConnectRouterInterfaceOutcomeCallable VpcClient::connectRouterInterfaceCallable(const ConnectRouterInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConnectRouterInterfaceOutcome()>>(
			[this, request]()
			{
			return this->connectRouterInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeBgpPeersOutcome VpcClient::describeBgpPeers(const DescribeBgpPeersRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBgpPeersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBgpPeersOutcome(DescribeBgpPeersResult(outcome.result()));
	else
		return DescribeBgpPeersOutcome(outcome.error());
}

void VpcClient::describeBgpPeersAsync(const DescribeBgpPeersRequest& request, const DescribeBgpPeersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBgpPeers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeBgpPeersOutcomeCallable VpcClient::describeBgpPeersCallable(const DescribeBgpPeersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBgpPeersOutcome()>>(
			[this, request]()
			{
			return this->describeBgpPeers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteSnatEntryOutcome VpcClient::deleteSnatEntry(const DeleteSnatEntryRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSnatEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSnatEntryOutcome(DeleteSnatEntryResult(outcome.result()));
	else
		return DeleteSnatEntryOutcome(outcome.error());
}

void VpcClient::deleteSnatEntryAsync(const DeleteSnatEntryRequest& request, const DeleteSnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSnatEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteSnatEntryOutcomeCallable VpcClient::deleteSnatEntryCallable(const DeleteSnatEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSnatEntryOutcome()>>(
			[this, request]()
			{
			return this->deleteSnatEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeHaVipsOutcome VpcClient::describeHaVips(const DescribeHaVipsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeHaVipsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeHaVipsOutcome(DescribeHaVipsResult(outcome.result()));
	else
		return DescribeHaVipsOutcome(outcome.error());
}

void VpcClient::describeHaVipsAsync(const DescribeHaVipsRequest& request, const DescribeHaVipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeHaVips(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeHaVipsOutcomeCallable VpcClient::describeHaVipsCallable(const DescribeHaVipsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeHaVipsOutcome()>>(
			[this, request]()
			{
			return this->describeHaVips(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateNqaOutcome VpcClient::createNqa(const CreateNqaRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNqaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNqaOutcome(CreateNqaResult(outcome.result()));
	else
		return CreateNqaOutcome(outcome.error());
}

void VpcClient::createNqaAsync(const CreateNqaRequest& request, const CreateNqaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNqa(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateNqaOutcomeCallable VpcClient::createNqaCallable(const CreateNqaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNqaOutcome()>>(
			[this, request]()
			{
			return this->createNqa(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeForwardTablesOutcome VpcClient::describeForwardTables(const DescribeForwardTablesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeForwardTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeForwardTablesOutcome(DescribeForwardTablesResult(outcome.result()));
	else
		return DescribeForwardTablesOutcome(outcome.error());
}

void VpcClient::describeForwardTablesAsync(const DescribeForwardTablesRequest& request, const DescribeForwardTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeForwardTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeForwardTablesOutcomeCallable VpcClient::describeForwardTablesCallable(const DescribeForwardTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeForwardTablesOutcome()>>(
			[this, request]()
			{
			return this->describeForwardTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::AddBandwidthPackageIpsOutcome VpcClient::addBandwidthPackageIps(const AddBandwidthPackageIpsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return AddBandwidthPackageIpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddBandwidthPackageIpsOutcome(AddBandwidthPackageIpsResult(outcome.result()));
	else
		return AddBandwidthPackageIpsOutcome(outcome.error());
}

void VpcClient::addBandwidthPackageIpsAsync(const AddBandwidthPackageIpsRequest& request, const AddBandwidthPackageIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addBandwidthPackageIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::AddBandwidthPackageIpsOutcomeCallable VpcClient::addBandwidthPackageIpsCallable(const AddBandwidthPackageIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddBandwidthPackageIpsOutcome()>>(
			[this, request]()
			{
			return this->addBandwidthPackageIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyPhysicalConnectionAttributeOutcome VpcClient::modifyPhysicalConnectionAttribute(const ModifyPhysicalConnectionAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyPhysicalConnectionAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyPhysicalConnectionAttributeOutcome(ModifyPhysicalConnectionAttributeResult(outcome.result()));
	else
		return ModifyPhysicalConnectionAttributeOutcome(outcome.error());
}

void VpcClient::modifyPhysicalConnectionAttributeAsync(const ModifyPhysicalConnectionAttributeRequest& request, const ModifyPhysicalConnectionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyPhysicalConnectionAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyPhysicalConnectionAttributeOutcomeCallable VpcClient::modifyPhysicalConnectionAttributeCallable(const ModifyPhysicalConnectionAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyPhysicalConnectionAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyPhysicalConnectionAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateSnatEntryOutcome VpcClient::createSnatEntry(const CreateSnatEntryRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSnatEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSnatEntryOutcome(CreateSnatEntryResult(outcome.result()));
	else
		return CreateSnatEntryOutcome(outcome.error());
}

void VpcClient::createSnatEntryAsync(const CreateSnatEntryRequest& request, const CreateSnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSnatEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateSnatEntryOutcomeCallable VpcClient::createSnatEntryCallable(const CreateSnatEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSnatEntryOutcome()>>(
			[this, request]()
			{
			return this->createSnatEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteCommonBandwidthPackageOutcome VpcClient::deleteCommonBandwidthPackage(const DeleteCommonBandwidthPackageRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCommonBandwidthPackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCommonBandwidthPackageOutcome(DeleteCommonBandwidthPackageResult(outcome.result()));
	else
		return DeleteCommonBandwidthPackageOutcome(outcome.error());
}

void VpcClient::deleteCommonBandwidthPackageAsync(const DeleteCommonBandwidthPackageRequest& request, const DeleteCommonBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCommonBandwidthPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteCommonBandwidthPackageOutcomeCallable VpcClient::deleteCommonBandwidthPackageCallable(const DeleteCommonBandwidthPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCommonBandwidthPackageOutcome()>>(
			[this, request]()
			{
			return this->deleteCommonBandwidthPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyVSwitchAttributeOutcome VpcClient::modifyVSwitchAttribute(const ModifyVSwitchAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVSwitchAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVSwitchAttributeOutcome(ModifyVSwitchAttributeResult(outcome.result()));
	else
		return ModifyVSwitchAttributeOutcome(outcome.error());
}

void VpcClient::modifyVSwitchAttributeAsync(const ModifyVSwitchAttributeRequest& request, const ModifyVSwitchAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVSwitchAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyVSwitchAttributeOutcomeCallable VpcClient::modifyVSwitchAttributeCallable(const ModifyVSwitchAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVSwitchAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyVSwitchAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeNatGatewaysOutcome VpcClient::describeNatGateways(const DescribeNatGatewaysRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNatGatewaysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNatGatewaysOutcome(DescribeNatGatewaysResult(outcome.result()));
	else
		return DescribeNatGatewaysOutcome(outcome.error());
}

void VpcClient::describeNatGatewaysAsync(const DescribeNatGatewaysRequest& request, const DescribeNatGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNatGateways(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeNatGatewaysOutcomeCallable VpcClient::describeNatGatewaysCallable(const DescribeNatGatewaysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNatGatewaysOutcome()>>(
			[this, request]()
			{
			return this->describeNatGateways(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::EnableVpcClassicLinkOutcome VpcClient::enableVpcClassicLink(const EnableVpcClassicLinkRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return EnableVpcClassicLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableVpcClassicLinkOutcome(EnableVpcClassicLinkResult(outcome.result()));
	else
		return EnableVpcClassicLinkOutcome(outcome.error());
}

void VpcClient::enableVpcClassicLinkAsync(const EnableVpcClassicLinkRequest& request, const EnableVpcClassicLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableVpcClassicLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::EnableVpcClassicLinkOutcomeCallable VpcClient::enableVpcClassicLinkCallable(const EnableVpcClassicLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableVpcClassicLinkOutcome()>>(
			[this, request]()
			{
			return this->enableVpcClassicLink(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteHaVipOutcome VpcClient::deleteHaVip(const DeleteHaVipRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteHaVipOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteHaVipOutcome(DeleteHaVipResult(outcome.result()));
	else
		return DeleteHaVipOutcome(outcome.error());
}

void VpcClient::deleteHaVipAsync(const DeleteHaVipRequest& request, const DeleteHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteHaVip(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteHaVipOutcomeCallable VpcClient::deleteHaVipCallable(const DeleteHaVipRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteHaVipOutcome()>>(
			[this, request]()
			{
			return this->deleteHaVip(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeVpcAttributeOutcome VpcClient::describeVpcAttribute(const DescribeVpcAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVpcAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVpcAttributeOutcome(DescribeVpcAttributeResult(outcome.result()));
	else
		return DescribeVpcAttributeOutcome(outcome.error());
}

void VpcClient::describeVpcAttributeAsync(const DescribeVpcAttributeRequest& request, const DescribeVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVpcAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeVpcAttributeOutcomeCallable VpcClient::describeVpcAttributeCallable(const DescribeVpcAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVpcAttributeOutcome()>>(
			[this, request]()
			{
			return this->describeVpcAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateVpnConnectionOutcome VpcClient::createVpnConnection(const CreateVpnConnectionRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVpnConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVpnConnectionOutcome(CreateVpnConnectionResult(outcome.result()));
	else
		return CreateVpnConnectionOutcome(outcome.error());
}

void VpcClient::createVpnConnectionAsync(const CreateVpnConnectionRequest& request, const CreateVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVpnConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateVpnConnectionOutcomeCallable VpcClient::createVpnConnectionCallable(const CreateVpnConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVpnConnectionOutcome()>>(
			[this, request]()
			{
			return this->createVpnConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteVpnConnectionOutcome VpcClient::deleteVpnConnection(const DeleteVpnConnectionRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVpnConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVpnConnectionOutcome(DeleteVpnConnectionResult(outcome.result()));
	else
		return DeleteVpnConnectionOutcome(outcome.error());
}

void VpcClient::deleteVpnConnectionAsync(const DeleteVpnConnectionRequest& request, const DeleteVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVpnConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteVpnConnectionOutcomeCallable VpcClient::deleteVpnConnectionCallable(const DeleteVpnConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVpnConnectionOutcome()>>(
			[this, request]()
			{
			return this->deleteVpnConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeBandwidthPackagesOutcome VpcClient::describeBandwidthPackages(const DescribeBandwidthPackagesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBandwidthPackagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBandwidthPackagesOutcome(DescribeBandwidthPackagesResult(outcome.result()));
	else
		return DescribeBandwidthPackagesOutcome(outcome.error());
}

void VpcClient::describeBandwidthPackagesAsync(const DescribeBandwidthPackagesRequest& request, const DescribeBandwidthPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBandwidthPackages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeBandwidthPackagesOutcomeCallable VpcClient::describeBandwidthPackagesCallable(const DescribeBandwidthPackagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBandwidthPackagesOutcome()>>(
			[this, request]()
			{
			return this->describeBandwidthPackages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteBgpNetworkOutcome VpcClient::deleteBgpNetwork(const DeleteBgpNetworkRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBgpNetworkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBgpNetworkOutcome(DeleteBgpNetworkResult(outcome.result()));
	else
		return DeleteBgpNetworkOutcome(outcome.error());
}

void VpcClient::deleteBgpNetworkAsync(const DeleteBgpNetworkRequest& request, const DeleteBgpNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBgpNetwork(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteBgpNetworkOutcomeCallable VpcClient::deleteBgpNetworkCallable(const DeleteBgpNetworkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBgpNetworkOutcome()>>(
			[this, request]()
			{
			return this->deleteBgpNetwork(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateRouteEntryOutcome VpcClient::createRouteEntry(const CreateRouteEntryRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRouteEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRouteEntryOutcome(CreateRouteEntryResult(outcome.result()));
	else
		return CreateRouteEntryOutcome(outcome.error());
}

void VpcClient::createRouteEntryAsync(const CreateRouteEntryRequest& request, const CreateRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRouteEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateRouteEntryOutcomeCallable VpcClient::createRouteEntryCallable(const CreateRouteEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRouteEntryOutcome()>>(
			[this, request]()
			{
			return this->createRouteEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateRouterInterfaceOutcome VpcClient::createRouterInterface(const CreateRouterInterfaceRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateRouterInterfaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateRouterInterfaceOutcome(CreateRouterInterfaceResult(outcome.result()));
	else
		return CreateRouterInterfaceOutcome(outcome.error());
}

void VpcClient::createRouterInterfaceAsync(const CreateRouterInterfaceRequest& request, const CreateRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createRouterInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateRouterInterfaceOutcomeCallable VpcClient::createRouterInterfaceCallable(const CreateRouterInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateRouterInterfaceOutcome()>>(
			[this, request]()
			{
			return this->createRouterInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DisableVpcClassicLinkOutcome VpcClient::disableVpcClassicLink(const DisableVpcClassicLinkRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DisableVpcClassicLinkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableVpcClassicLinkOutcome(DisableVpcClassicLinkResult(outcome.result()));
	else
		return DisableVpcClassicLinkOutcome(outcome.error());
}

void VpcClient::disableVpcClassicLinkAsync(const DisableVpcClassicLinkRequest& request, const DisableVpcClassicLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableVpcClassicLink(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DisableVpcClassicLinkOutcomeCallable VpcClient::disableVpcClassicLinkCallable(const DisableVpcClassicLinkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableVpcClassicLinkOutcome()>>(
			[this, request]()
			{
			return this->disableVpcClassicLink(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyVpnConnectionAttributeOutcome VpcClient::modifyVpnConnectionAttribute(const ModifyVpnConnectionAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVpnConnectionAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVpnConnectionAttributeOutcome(ModifyVpnConnectionAttributeResult(outcome.result()));
	else
		return ModifyVpnConnectionAttributeOutcome(outcome.error());
}

void VpcClient::modifyVpnConnectionAttributeAsync(const ModifyVpnConnectionAttributeRequest& request, const ModifyVpnConnectionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVpnConnectionAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyVpnConnectionAttributeOutcomeCallable VpcClient::modifyVpnConnectionAttributeCallable(const ModifyVpnConnectionAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVpnConnectionAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyVpnConnectionAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::RemoveGlobalAccelerationInstanceIpOutcome VpcClient::removeGlobalAccelerationInstanceIp(const RemoveGlobalAccelerationInstanceIpRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveGlobalAccelerationInstanceIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveGlobalAccelerationInstanceIpOutcome(RemoveGlobalAccelerationInstanceIpResult(outcome.result()));
	else
		return RemoveGlobalAccelerationInstanceIpOutcome(outcome.error());
}

void VpcClient::removeGlobalAccelerationInstanceIpAsync(const RemoveGlobalAccelerationInstanceIpRequest& request, const RemoveGlobalAccelerationInstanceIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeGlobalAccelerationInstanceIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::RemoveGlobalAccelerationInstanceIpOutcomeCallable VpcClient::removeGlobalAccelerationInstanceIpCallable(const RemoveGlobalAccelerationInstanceIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveGlobalAccelerationInstanceIpOutcome()>>(
			[this, request]()
			{
			return this->removeGlobalAccelerationInstanceIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyNatGatewaySpecOutcome VpcClient::modifyNatGatewaySpec(const ModifyNatGatewaySpecRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyNatGatewaySpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyNatGatewaySpecOutcome(ModifyNatGatewaySpecResult(outcome.result()));
	else
		return ModifyNatGatewaySpecOutcome(outcome.error());
}

void VpcClient::modifyNatGatewaySpecAsync(const ModifyNatGatewaySpecRequest& request, const ModifyNatGatewaySpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyNatGatewaySpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyNatGatewaySpecOutcomeCallable VpcClient::modifyNatGatewaySpecCallable(const ModifyNatGatewaySpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyNatGatewaySpecOutcome()>>(
			[this, request]()
			{
			return this->modifyNatGatewaySpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeBgpGroupsOutcome VpcClient::describeBgpGroups(const DescribeBgpGroupsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBgpGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBgpGroupsOutcome(DescribeBgpGroupsResult(outcome.result()));
	else
		return DescribeBgpGroupsOutcome(outcome.error());
}

void VpcClient::describeBgpGroupsAsync(const DescribeBgpGroupsRequest& request, const DescribeBgpGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBgpGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeBgpGroupsOutcomeCallable VpcClient::describeBgpGroupsCallable(const DescribeBgpGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBgpGroupsOutcome()>>(
			[this, request]()
			{
			return this->describeBgpGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::RemoveBandwidthPackageIpsOutcome VpcClient::removeBandwidthPackageIps(const RemoveBandwidthPackageIpsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveBandwidthPackageIpsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveBandwidthPackageIpsOutcome(RemoveBandwidthPackageIpsResult(outcome.result()));
	else
		return RemoveBandwidthPackageIpsOutcome(outcome.error());
}

void VpcClient::removeBandwidthPackageIpsAsync(const RemoveBandwidthPackageIpsRequest& request, const RemoveBandwidthPackageIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeBandwidthPackageIps(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::RemoveBandwidthPackageIpsOutcomeCallable VpcClient::removeBandwidthPackageIpsCallable(const RemoveBandwidthPackageIpsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveBandwidthPackageIpsOutcome()>>(
			[this, request]()
			{
			return this->removeBandwidthPackageIps(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyVpcAttributeOutcome VpcClient::modifyVpcAttribute(const ModifyVpcAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVpcAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVpcAttributeOutcome(ModifyVpcAttributeResult(outcome.result()));
	else
		return ModifyVpcAttributeOutcome(outcome.error());
}

void VpcClient::modifyVpcAttributeAsync(const ModifyVpcAttributeRequest& request, const ModifyVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVpcAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyVpcAttributeOutcomeCallable VpcClient::modifyVpcAttributeCallable(const ModifyVpcAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVpcAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyVpcAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteSslVpnClientCertOutcome VpcClient::deleteSslVpnClientCert(const DeleteSslVpnClientCertRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSslVpnClientCertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSslVpnClientCertOutcome(DeleteSslVpnClientCertResult(outcome.result()));
	else
		return DeleteSslVpnClientCertOutcome(outcome.error());
}

void VpcClient::deleteSslVpnClientCertAsync(const DeleteSslVpnClientCertRequest& request, const DeleteSslVpnClientCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSslVpnClientCert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteSslVpnClientCertOutcomeCallable VpcClient::deleteSslVpnClientCertCallable(const DeleteSslVpnClientCertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSslVpnClientCertOutcome()>>(
			[this, request]()
			{
			return this->deleteSslVpnClientCert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateVSwitchOutcome VpcClient::createVSwitch(const CreateVSwitchRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVSwitchOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVSwitchOutcome(CreateVSwitchResult(outcome.result()));
	else
		return CreateVSwitchOutcome(outcome.error());
}

void VpcClient::createVSwitchAsync(const CreateVSwitchRequest& request, const CreateVSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVSwitch(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateVSwitchOutcomeCallable VpcClient::createVSwitchCallable(const CreateVSwitchRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVSwitchOutcome()>>(
			[this, request]()
			{
			return this->createVSwitch(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyCustomerGatewayAttributeOutcome VpcClient::modifyCustomerGatewayAttribute(const ModifyCustomerGatewayAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCustomerGatewayAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCustomerGatewayAttributeOutcome(ModifyCustomerGatewayAttributeResult(outcome.result()));
	else
		return ModifyCustomerGatewayAttributeOutcome(outcome.error());
}

void VpcClient::modifyCustomerGatewayAttributeAsync(const ModifyCustomerGatewayAttributeRequest& request, const ModifyCustomerGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCustomerGatewayAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyCustomerGatewayAttributeOutcomeCallable VpcClient::modifyCustomerGatewayAttributeCallable(const ModifyCustomerGatewayAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCustomerGatewayAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyCustomerGatewayAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::EnablePhysicalConnectionOutcome VpcClient::enablePhysicalConnection(const EnablePhysicalConnectionRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return EnablePhysicalConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnablePhysicalConnectionOutcome(EnablePhysicalConnectionResult(outcome.result()));
	else
		return EnablePhysicalConnectionOutcome(outcome.error());
}

void VpcClient::enablePhysicalConnectionAsync(const EnablePhysicalConnectionRequest& request, const EnablePhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enablePhysicalConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::EnablePhysicalConnectionOutcomeCallable VpcClient::enablePhysicalConnectionCallable(const EnablePhysicalConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnablePhysicalConnectionOutcome()>>(
			[this, request]()
			{
			return this->enablePhysicalConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyEipAddressAttributeOutcome VpcClient::modifyEipAddressAttribute(const ModifyEipAddressAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyEipAddressAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyEipAddressAttributeOutcome(ModifyEipAddressAttributeResult(outcome.result()));
	else
		return ModifyEipAddressAttributeOutcome(outcome.error());
}

void VpcClient::modifyEipAddressAttributeAsync(const ModifyEipAddressAttributeRequest& request, const ModifyEipAddressAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyEipAddressAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyEipAddressAttributeOutcomeCallable VpcClient::modifyEipAddressAttributeCallable(const ModifyEipAddressAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyEipAddressAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyEipAddressAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyCommonBandwidthPackagePayTypeOutcome VpcClient::modifyCommonBandwidthPackagePayType(const ModifyCommonBandwidthPackagePayTypeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCommonBandwidthPackagePayTypeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCommonBandwidthPackagePayTypeOutcome(ModifyCommonBandwidthPackagePayTypeResult(outcome.result()));
	else
		return ModifyCommonBandwidthPackagePayTypeOutcome(outcome.error());
}

void VpcClient::modifyCommonBandwidthPackagePayTypeAsync(const ModifyCommonBandwidthPackagePayTypeRequest& request, const ModifyCommonBandwidthPackagePayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCommonBandwidthPackagePayType(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyCommonBandwidthPackagePayTypeOutcomeCallable VpcClient::modifyCommonBandwidthPackagePayTypeCallable(const ModifyCommonBandwidthPackagePayTypeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCommonBandwidthPackagePayTypeOutcome()>>(
			[this, request]()
			{
			return this->modifyCommonBandwidthPackagePayType(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeVSwitchAttributesOutcome VpcClient::describeVSwitchAttributes(const DescribeVSwitchAttributesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVSwitchAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVSwitchAttributesOutcome(DescribeVSwitchAttributesResult(outcome.result()));
	else
		return DescribeVSwitchAttributesOutcome(outcome.error());
}

void VpcClient::describeVSwitchAttributesAsync(const DescribeVSwitchAttributesRequest& request, const DescribeVSwitchAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVSwitchAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeVSwitchAttributesOutcomeCallable VpcClient::describeVSwitchAttributesCallable(const DescribeVSwitchAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVSwitchAttributesOutcome()>>(
			[this, request]()
			{
			return this->describeVSwitchAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateCommonBandwidthPackageOutcome VpcClient::createCommonBandwidthPackage(const CreateCommonBandwidthPackageRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCommonBandwidthPackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCommonBandwidthPackageOutcome(CreateCommonBandwidthPackageResult(outcome.result()));
	else
		return CreateCommonBandwidthPackageOutcome(outcome.error());
}

void VpcClient::createCommonBandwidthPackageAsync(const CreateCommonBandwidthPackageRequest& request, const CreateCommonBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCommonBandwidthPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateCommonBandwidthPackageOutcomeCallable VpcClient::createCommonBandwidthPackageCallable(const CreateCommonBandwidthPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCommonBandwidthPackageOutcome()>>(
			[this, request]()
			{
			return this->createCommonBandwidthPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateForwardEntryOutcome VpcClient::createForwardEntry(const CreateForwardEntryRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateForwardEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateForwardEntryOutcome(CreateForwardEntryResult(outcome.result()));
	else
		return CreateForwardEntryOutcome(outcome.error());
}

void VpcClient::createForwardEntryAsync(const CreateForwardEntryRequest& request, const CreateForwardEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createForwardEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateForwardEntryOutcomeCallable VpcClient::createForwardEntryCallable(const CreateForwardEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateForwardEntryOutcome()>>(
			[this, request]()
			{
			return this->createForwardEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeRouterInterfacesOutcome VpcClient::describeRouterInterfaces(const DescribeRouterInterfacesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRouterInterfacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRouterInterfacesOutcome(DescribeRouterInterfacesResult(outcome.result()));
	else
		return DescribeRouterInterfacesOutcome(outcome.error());
}

void VpcClient::describeRouterInterfacesAsync(const DescribeRouterInterfacesRequest& request, const DescribeRouterInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRouterInterfaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeRouterInterfacesOutcomeCallable VpcClient::describeRouterInterfacesCallable(const DescribeRouterInterfacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRouterInterfacesOutcome()>>(
			[this, request]()
			{
			return this->describeRouterInterfaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteNatGatewayOutcome VpcClient::deleteNatGateway(const DeleteNatGatewayRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNatGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNatGatewayOutcome(DeleteNatGatewayResult(outcome.result()));
	else
		return DeleteNatGatewayOutcome(outcome.error());
}

void VpcClient::deleteNatGatewayAsync(const DeleteNatGatewayRequest& request, const DeleteNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNatGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteNatGatewayOutcomeCallable VpcClient::deleteNatGatewayCallable(const DeleteNatGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNatGatewayOutcome()>>(
			[this, request]()
			{
			return this->deleteNatGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeZonesOutcome VpcClient::describeZones(const DescribeZonesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeZonesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeZonesOutcome(DescribeZonesResult(outcome.result()));
	else
		return DescribeZonesOutcome(outcome.error());
}

void VpcClient::describeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeZones(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeZonesOutcomeCallable VpcClient::describeZonesCallable(const DescribeZonesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeZonesOutcome()>>(
			[this, request]()
			{
			return this->describeZones(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeactivateRouterInterfaceOutcome VpcClient::deactivateRouterInterface(const DeactivateRouterInterfaceRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeactivateRouterInterfaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeactivateRouterInterfaceOutcome(DeactivateRouterInterfaceResult(outcome.result()));
	else
		return DeactivateRouterInterfaceOutcome(outcome.error());
}

void VpcClient::deactivateRouterInterfaceAsync(const DeactivateRouterInterfaceRequest& request, const DeactivateRouterInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deactivateRouterInterface(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeactivateRouterInterfaceOutcomeCallable VpcClient::deactivateRouterInterfaceCallable(const DeactivateRouterInterfaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeactivateRouterInterfaceOutcome()>>(
			[this, request]()
			{
			return this->deactivateRouterInterface(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifySnatEntryOutcome VpcClient::modifySnatEntry(const ModifySnatEntryRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifySnatEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifySnatEntryOutcome(ModifySnatEntryResult(outcome.result()));
	else
		return ModifySnatEntryOutcome(outcome.error());
}

void VpcClient::modifySnatEntryAsync(const ModifySnatEntryRequest& request, const ModifySnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifySnatEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifySnatEntryOutcomeCallable VpcClient::modifySnatEntryCallable(const ModifySnatEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifySnatEntryOutcome()>>(
			[this, request]()
			{
			return this->modifySnatEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeAccessPointsOutcome VpcClient::describeAccessPoints(const DescribeAccessPointsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccessPointsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccessPointsOutcome(DescribeAccessPointsResult(outcome.result()));
	else
		return DescribeAccessPointsOutcome(outcome.error());
}

void VpcClient::describeAccessPointsAsync(const DescribeAccessPointsRequest& request, const DescribeAccessPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccessPoints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeAccessPointsOutcomeCallable VpcClient::describeAccessPointsCallable(const DescribeAccessPointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccessPointsOutcome()>>(
			[this, request]()
			{
			return this->describeAccessPoints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateSslVpnClientCertOutcome VpcClient::createSslVpnClientCert(const CreateSslVpnClientCertRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSslVpnClientCertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSslVpnClientCertOutcome(CreateSslVpnClientCertResult(outcome.result()));
	else
		return CreateSslVpnClientCertOutcome(outcome.error());
}

void VpcClient::createSslVpnClientCertAsync(const CreateSslVpnClientCertRequest& request, const CreateSslVpnClientCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSslVpnClientCert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateSslVpnClientCertOutcomeCallable VpcClient::createSslVpnClientCertCallable(const CreateSslVpnClientCertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSslVpnClientCertOutcome()>>(
			[this, request]()
			{
			return this->createSslVpnClientCert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateVirtualBorderRouterOutcome VpcClient::createVirtualBorderRouter(const CreateVirtualBorderRouterRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVirtualBorderRouterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVirtualBorderRouterOutcome(CreateVirtualBorderRouterResult(outcome.result()));
	else
		return CreateVirtualBorderRouterOutcome(outcome.error());
}

void VpcClient::createVirtualBorderRouterAsync(const CreateVirtualBorderRouterRequest& request, const CreateVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVirtualBorderRouter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateVirtualBorderRouterOutcomeCallable VpcClient::createVirtualBorderRouterCallable(const CreateVirtualBorderRouterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVirtualBorderRouterOutcome()>>(
			[this, request]()
			{
			return this->createVirtualBorderRouter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteBgpGroupOutcome VpcClient::deleteBgpGroup(const DeleteBgpGroupRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteBgpGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteBgpGroupOutcome(DeleteBgpGroupResult(outcome.result()));
	else
		return DeleteBgpGroupOutcome(outcome.error());
}

void VpcClient::deleteBgpGroupAsync(const DeleteBgpGroupRequest& request, const DeleteBgpGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteBgpGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteBgpGroupOutcomeCallable VpcClient::deleteBgpGroupCallable(const DeleteBgpGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteBgpGroupOutcome()>>(
			[this, request]()
			{
			return this->deleteBgpGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ReleaseEipAddressOutcome VpcClient::releaseEipAddress(const ReleaseEipAddressRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseEipAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseEipAddressOutcome(ReleaseEipAddressResult(outcome.result()));
	else
		return ReleaseEipAddressOutcome(outcome.error());
}

void VpcClient::releaseEipAddressAsync(const ReleaseEipAddressRequest& request, const ReleaseEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseEipAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ReleaseEipAddressOutcomeCallable VpcClient::releaseEipAddressCallable(const ReleaseEipAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseEipAddressOutcome()>>(
			[this, request]()
			{
			return this->releaseEipAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateBgpPeerOutcome VpcClient::createBgpPeer(const CreateBgpPeerRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBgpPeerOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBgpPeerOutcome(CreateBgpPeerResult(outcome.result()));
	else
		return CreateBgpPeerOutcome(outcome.error());
}

void VpcClient::createBgpPeerAsync(const CreateBgpPeerRequest& request, const CreateBgpPeerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBgpPeer(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateBgpPeerOutcomeCallable VpcClient::createBgpPeerCallable(const CreateBgpPeerRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBgpPeerOutcome()>>(
			[this, request]()
			{
			return this->createBgpPeer(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeRouteTablesOutcome VpcClient::describeRouteTables(const DescribeRouteTablesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRouteTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRouteTablesOutcome(DescribeRouteTablesResult(outcome.result()));
	else
		return DescribeRouteTablesOutcome(outcome.error());
}

void VpcClient::describeRouteTablesAsync(const DescribeRouteTablesRequest& request, const DescribeRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRouteTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeRouteTablesOutcomeCallable VpcClient::describeRouteTablesCallable(const DescribeRouteTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRouteTablesOutcome()>>(
			[this, request]()
			{
			return this->describeRouteTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeVSwitchesOutcome VpcClient::describeVSwitches(const DescribeVSwitchesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVSwitchesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVSwitchesOutcome(DescribeVSwitchesResult(outcome.result()));
	else
		return DescribeVSwitchesOutcome(outcome.error());
}

void VpcClient::describeVSwitchesAsync(const DescribeVSwitchesRequest& request, const DescribeVSwitchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVSwitches(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeVSwitchesOutcomeCallable VpcClient::describeVSwitchesCallable(const DescribeVSwitchesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVSwitchesOutcome()>>(
			[this, request]()
			{
			return this->describeVSwitches(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyRouterInterfaceSpecOutcome VpcClient::modifyRouterInterfaceSpec(const ModifyRouterInterfaceSpecRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRouterInterfaceSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRouterInterfaceSpecOutcome(ModifyRouterInterfaceSpecResult(outcome.result()));
	else
		return ModifyRouterInterfaceSpecOutcome(outcome.error());
}

void VpcClient::modifyRouterInterfaceSpecAsync(const ModifyRouterInterfaceSpecRequest& request, const ModifyRouterInterfaceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRouterInterfaceSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyRouterInterfaceSpecOutcomeCallable VpcClient::modifyRouterInterfaceSpecCallable(const ModifyRouterInterfaceSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRouterInterfaceSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyRouterInterfaceSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeVpcsOutcome VpcClient::describeVpcs(const DescribeVpcsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVpcsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVpcsOutcome(DescribeVpcsResult(outcome.result()));
	else
		return DescribeVpcsOutcome(outcome.error());
}

void VpcClient::describeVpcsAsync(const DescribeVpcsRequest& request, const DescribeVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVpcs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeVpcsOutcomeCallable VpcClient::describeVpcsCallable(const DescribeVpcsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVpcsOutcome()>>(
			[this, request]()
			{
			return this->describeVpcs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreatePhysicalConnectionOutcome VpcClient::createPhysicalConnection(const CreatePhysicalConnectionRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePhysicalConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePhysicalConnectionOutcome(CreatePhysicalConnectionResult(outcome.result()));
	else
		return CreatePhysicalConnectionOutcome(outcome.error());
}

void VpcClient::createPhysicalConnectionAsync(const CreatePhysicalConnectionRequest& request, const CreatePhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPhysicalConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreatePhysicalConnectionOutcomeCallable VpcClient::createPhysicalConnectionCallable(const CreatePhysicalConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePhysicalConnectionOutcome()>>(
			[this, request]()
			{
			return this->createPhysicalConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::UnassociatePhysicalConnectionFromVirtualBorderRouterOutcome VpcClient::unassociatePhysicalConnectionFromVirtualBorderRouter(const UnassociatePhysicalConnectionFromVirtualBorderRouterRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return UnassociatePhysicalConnectionFromVirtualBorderRouterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnassociatePhysicalConnectionFromVirtualBorderRouterOutcome(UnassociatePhysicalConnectionFromVirtualBorderRouterResult(outcome.result()));
	else
		return UnassociatePhysicalConnectionFromVirtualBorderRouterOutcome(outcome.error());
}

void VpcClient::unassociatePhysicalConnectionFromVirtualBorderRouterAsync(const UnassociatePhysicalConnectionFromVirtualBorderRouterRequest& request, const UnassociatePhysicalConnectionFromVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unassociatePhysicalConnectionFromVirtualBorderRouter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::UnassociatePhysicalConnectionFromVirtualBorderRouterOutcomeCallable VpcClient::unassociatePhysicalConnectionFromVirtualBorderRouterCallable(const UnassociatePhysicalConnectionFromVirtualBorderRouterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnassociatePhysicalConnectionFromVirtualBorderRouterOutcome()>>(
			[this, request]()
			{
			return this->unassociatePhysicalConnectionFromVirtualBorderRouter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeServerRelatedGlobalAccelerationInstancesOutcome VpcClient::describeServerRelatedGlobalAccelerationInstances(const DescribeServerRelatedGlobalAccelerationInstancesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeServerRelatedGlobalAccelerationInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeServerRelatedGlobalAccelerationInstancesOutcome(DescribeServerRelatedGlobalAccelerationInstancesResult(outcome.result()));
	else
		return DescribeServerRelatedGlobalAccelerationInstancesOutcome(outcome.error());
}

void VpcClient::describeServerRelatedGlobalAccelerationInstancesAsync(const DescribeServerRelatedGlobalAccelerationInstancesRequest& request, const DescribeServerRelatedGlobalAccelerationInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeServerRelatedGlobalAccelerationInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeServerRelatedGlobalAccelerationInstancesOutcomeCallable VpcClient::describeServerRelatedGlobalAccelerationInstancesCallable(const DescribeServerRelatedGlobalAccelerationInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeServerRelatedGlobalAccelerationInstancesOutcome()>>(
			[this, request]()
			{
			return this->describeServerRelatedGlobalAccelerationInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::AssociateHaVipOutcome VpcClient::associateHaVip(const AssociateHaVipRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateHaVipOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateHaVipOutcome(AssociateHaVipResult(outcome.result()));
	else
		return AssociateHaVipOutcome(outcome.error());
}

void VpcClient::associateHaVipAsync(const AssociateHaVipRequest& request, const AssociateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateHaVip(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::AssociateHaVipOutcomeCallable VpcClient::associateHaVipCallable(const AssociateHaVipRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateHaVipOutcome()>>(
			[this, request]()
			{
			return this->associateHaVip(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyRouterInterfaceAttributeOutcome VpcClient::modifyRouterInterfaceAttribute(const ModifyRouterInterfaceAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyRouterInterfaceAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyRouterInterfaceAttributeOutcome(ModifyRouterInterfaceAttributeResult(outcome.result()));
	else
		return ModifyRouterInterfaceAttributeOutcome(outcome.error());
}

void VpcClient::modifyRouterInterfaceAttributeAsync(const ModifyRouterInterfaceAttributeRequest& request, const ModifyRouterInterfaceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyRouterInterfaceAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyRouterInterfaceAttributeOutcomeCallable VpcClient::modifyRouterInterfaceAttributeCallable(const ModifyRouterInterfaceAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyRouterInterfaceAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyRouterInterfaceAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeVirtualBorderRoutersForPhysicalConnectionOutcome VpcClient::describeVirtualBorderRoutersForPhysicalConnection(const DescribeVirtualBorderRoutersForPhysicalConnectionRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVirtualBorderRoutersForPhysicalConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVirtualBorderRoutersForPhysicalConnectionOutcome(DescribeVirtualBorderRoutersForPhysicalConnectionResult(outcome.result()));
	else
		return DescribeVirtualBorderRoutersForPhysicalConnectionOutcome(outcome.error());
}

void VpcClient::describeVirtualBorderRoutersForPhysicalConnectionAsync(const DescribeVirtualBorderRoutersForPhysicalConnectionRequest& request, const DescribeVirtualBorderRoutersForPhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVirtualBorderRoutersForPhysicalConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeVirtualBorderRoutersForPhysicalConnectionOutcomeCallable VpcClient::describeVirtualBorderRoutersForPhysicalConnectionCallable(const DescribeVirtualBorderRoutersForPhysicalConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVirtualBorderRoutersForPhysicalConnectionOutcome()>>(
			[this, request]()
			{
			return this->describeVirtualBorderRoutersForPhysicalConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyGlobalAccelerationInstanceAttributesOutcome VpcClient::modifyGlobalAccelerationInstanceAttributes(const ModifyGlobalAccelerationInstanceAttributesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyGlobalAccelerationInstanceAttributesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyGlobalAccelerationInstanceAttributesOutcome(ModifyGlobalAccelerationInstanceAttributesResult(outcome.result()));
	else
		return ModifyGlobalAccelerationInstanceAttributesOutcome(outcome.error());
}

void VpcClient::modifyGlobalAccelerationInstanceAttributesAsync(const ModifyGlobalAccelerationInstanceAttributesRequest& request, const ModifyGlobalAccelerationInstanceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyGlobalAccelerationInstanceAttributes(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyGlobalAccelerationInstanceAttributesOutcomeCallable VpcClient::modifyGlobalAccelerationInstanceAttributesCallable(const ModifyGlobalAccelerationInstanceAttributesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyGlobalAccelerationInstanceAttributesOutcome()>>(
			[this, request]()
			{
			return this->modifyGlobalAccelerationInstanceAttributes(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyCommonBandwidthPackageSpecOutcome VpcClient::modifyCommonBandwidthPackageSpec(const ModifyCommonBandwidthPackageSpecRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCommonBandwidthPackageSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCommonBandwidthPackageSpecOutcome(ModifyCommonBandwidthPackageSpecResult(outcome.result()));
	else
		return ModifyCommonBandwidthPackageSpecOutcome(outcome.error());
}

void VpcClient::modifyCommonBandwidthPackageSpecAsync(const ModifyCommonBandwidthPackageSpecRequest& request, const ModifyCommonBandwidthPackageSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCommonBandwidthPackageSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyCommonBandwidthPackageSpecOutcomeCallable VpcClient::modifyCommonBandwidthPackageSpecCallable(const ModifyCommonBandwidthPackageSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCommonBandwidthPackageSpecOutcome()>>(
			[this, request]()
			{
			return this->modifyCommonBandwidthPackageSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteRouteEntryOutcome VpcClient::deleteRouteEntry(const DeleteRouteEntryRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteRouteEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteRouteEntryOutcome(DeleteRouteEntryResult(outcome.result()));
	else
		return DeleteRouteEntryOutcome(outcome.error());
}

void VpcClient::deleteRouteEntryAsync(const DeleteRouteEntryRequest& request, const DeleteRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteRouteEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteRouteEntryOutcomeCallable VpcClient::deleteRouteEntryCallable(const DeleteRouteEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteRouteEntryOutcome()>>(
			[this, request]()
			{
			return this->deleteRouteEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteVirtualBorderRouterOutcome VpcClient::deleteVirtualBorderRouter(const DeleteVirtualBorderRouterRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteVirtualBorderRouterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteVirtualBorderRouterOutcome(DeleteVirtualBorderRouterResult(outcome.result()));
	else
		return DeleteVirtualBorderRouterOutcome(outcome.error());
}

void VpcClient::deleteVirtualBorderRouterAsync(const DeleteVirtualBorderRouterRequest& request, const DeleteVirtualBorderRouterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteVirtualBorderRouter(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteVirtualBorderRouterOutcomeCallable VpcClient::deleteVirtualBorderRouterCallable(const DeleteVirtualBorderRouterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteVirtualBorderRouterOutcome()>>(
			[this, request]()
			{
			return this->deleteVirtualBorderRouter(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreatePhysicalConnectionNewOutcome VpcClient::createPhysicalConnectionNew(const CreatePhysicalConnectionNewRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePhysicalConnectionNewOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePhysicalConnectionNewOutcome(CreatePhysicalConnectionNewResult(outcome.result()));
	else
		return CreatePhysicalConnectionNewOutcome(outcome.error());
}

void VpcClient::createPhysicalConnectionNewAsync(const CreatePhysicalConnectionNewRequest& request, const CreatePhysicalConnectionNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPhysicalConnectionNew(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreatePhysicalConnectionNewOutcomeCallable VpcClient::createPhysicalConnectionNewCallable(const CreatePhysicalConnectionNewRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePhysicalConnectionNewOutcome()>>(
			[this, request]()
			{
			return this->createPhysicalConnectionNew(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::TerminatePhysicalConnectionOutcome VpcClient::terminatePhysicalConnection(const TerminatePhysicalConnectionRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return TerminatePhysicalConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TerminatePhysicalConnectionOutcome(TerminatePhysicalConnectionResult(outcome.result()));
	else
		return TerminatePhysicalConnectionOutcome(outcome.error());
}

void VpcClient::terminatePhysicalConnectionAsync(const TerminatePhysicalConnectionRequest& request, const TerminatePhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, terminatePhysicalConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::TerminatePhysicalConnectionOutcomeCallable VpcClient::terminatePhysicalConnectionCallable(const TerminatePhysicalConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TerminatePhysicalConnectionOutcome()>>(
			[this, request]()
			{
			return this->terminatePhysicalConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeVpnGatewayOutcome VpcClient::describeVpnGateway(const DescribeVpnGatewayRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVpnGatewayOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVpnGatewayOutcome(DescribeVpnGatewayResult(outcome.result()));
	else
		return DescribeVpnGatewayOutcome(outcome.error());
}

void VpcClient::describeVpnGatewayAsync(const DescribeVpnGatewayRequest& request, const DescribeVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVpnGateway(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeVpnGatewayOutcomeCallable VpcClient::describeVpnGatewayCallable(const DescribeVpnGatewayRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVpnGatewayOutcome()>>(
			[this, request]()
			{
			return this->describeVpnGateway(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyBgpGroupAttributeOutcome VpcClient::modifyBgpGroupAttribute(const ModifyBgpGroupAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyBgpGroupAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyBgpGroupAttributeOutcome(ModifyBgpGroupAttributeResult(outcome.result()));
	else
		return ModifyBgpGroupAttributeOutcome(outcome.error());
}

void VpcClient::modifyBgpGroupAttributeAsync(const ModifyBgpGroupAttributeRequest& request, const ModifyBgpGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyBgpGroupAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyBgpGroupAttributeOutcomeCallable VpcClient::modifyBgpGroupAttributeCallable(const ModifyBgpGroupAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyBgpGroupAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyBgpGroupAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyCommonBandwidthPackageAttributeOutcome VpcClient::modifyCommonBandwidthPackageAttribute(const ModifyCommonBandwidthPackageAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyCommonBandwidthPackageAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyCommonBandwidthPackageAttributeOutcome(ModifyCommonBandwidthPackageAttributeResult(outcome.result()));
	else
		return ModifyCommonBandwidthPackageAttributeOutcome(outcome.error());
}

void VpcClient::modifyCommonBandwidthPackageAttributeAsync(const ModifyCommonBandwidthPackageAttributeRequest& request, const ModifyCommonBandwidthPackageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyCommonBandwidthPackageAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyCommonBandwidthPackageAttributeOutcomeCallable VpcClient::modifyCommonBandwidthPackageAttributeCallable(const ModifyCommonBandwidthPackageAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyCommonBandwidthPackageAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyCommonBandwidthPackageAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DeleteForwardEntryOutcome VpcClient::deleteForwardEntry(const DeleteForwardEntryRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteForwardEntryOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteForwardEntryOutcome(DeleteForwardEntryResult(outcome.result()));
	else
		return DeleteForwardEntryOutcome(outcome.error());
}

void VpcClient::deleteForwardEntryAsync(const DeleteForwardEntryRequest& request, const DeleteForwardEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteForwardEntry(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DeleteForwardEntryOutcomeCallable VpcClient::deleteForwardEntryCallable(const DeleteForwardEntryRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteForwardEntryOutcome()>>(
			[this, request]()
			{
			return this->deleteForwardEntry(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::AddCommonBandwidthPackageIpOutcome VpcClient::addCommonBandwidthPackageIp(const AddCommonBandwidthPackageIpRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return AddCommonBandwidthPackageIpOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddCommonBandwidthPackageIpOutcome(AddCommonBandwidthPackageIpResult(outcome.result()));
	else
		return AddCommonBandwidthPackageIpOutcome(outcome.error());
}

void VpcClient::addCommonBandwidthPackageIpAsync(const AddCommonBandwidthPackageIpRequest& request, const AddCommonBandwidthPackageIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addCommonBandwidthPackageIp(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::AddCommonBandwidthPackageIpOutcomeCallable VpcClient::addCommonBandwidthPackageIpCallable(const AddCommonBandwidthPackageIpRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddCommonBandwidthPackageIpOutcome()>>(
			[this, request]()
			{
			return this->addCommonBandwidthPackageIp(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeRegionsOutcome VpcClient::describeRegions(const DescribeRegionsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionsOutcome(DescribeRegionsResult(outcome.result()));
	else
		return DescribeRegionsOutcome(outcome.error());
}

void VpcClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeRegionsOutcomeCallable VpcClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribePhysicalConnectionsOutcome VpcClient::describePhysicalConnections(const DescribePhysicalConnectionsRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePhysicalConnectionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePhysicalConnectionsOutcome(DescribePhysicalConnectionsResult(outcome.result()));
	else
		return DescribePhysicalConnectionsOutcome(outcome.error());
}

void VpcClient::describePhysicalConnectionsAsync(const DescribePhysicalConnectionsRequest& request, const DescribePhysicalConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePhysicalConnections(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribePhysicalConnectionsOutcomeCallable VpcClient::describePhysicalConnectionsCallable(const DescribePhysicalConnectionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePhysicalConnectionsOutcome()>>(
			[this, request]()
			{
			return this->describePhysicalConnections(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeVpnGatewaysOutcome VpcClient::describeVpnGateways(const DescribeVpnGatewaysRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVpnGatewaysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVpnGatewaysOutcome(DescribeVpnGatewaysResult(outcome.result()));
	else
		return DescribeVpnGatewaysOutcome(outcome.error());
}

void VpcClient::describeVpnGatewaysAsync(const DescribeVpnGatewaysRequest& request, const DescribeVpnGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVpnGateways(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeVpnGatewaysOutcomeCallable VpcClient::describeVpnGatewaysCallable(const DescribeVpnGatewaysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVpnGatewaysOutcome()>>(
			[this, request]()
			{
			return this->describeVpnGateways(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeVirtualBorderRoutersOutcome VpcClient::describeVirtualBorderRouters(const DescribeVirtualBorderRoutersRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVirtualBorderRoutersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVirtualBorderRoutersOutcome(DescribeVirtualBorderRoutersResult(outcome.result()));
	else
		return DescribeVirtualBorderRoutersOutcome(outcome.error());
}

void VpcClient::describeVirtualBorderRoutersAsync(const DescribeVirtualBorderRoutersRequest& request, const DescribeVirtualBorderRoutersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVirtualBorderRouters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeVirtualBorderRoutersOutcomeCallable VpcClient::describeVirtualBorderRoutersCallable(const DescribeVirtualBorderRoutersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVirtualBorderRoutersOutcome()>>(
			[this, request]()
			{
			return this->describeVirtualBorderRouters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateGlobalAccelerationInstanceOutcome VpcClient::createGlobalAccelerationInstance(const CreateGlobalAccelerationInstanceRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateGlobalAccelerationInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateGlobalAccelerationInstanceOutcome(CreateGlobalAccelerationInstanceResult(outcome.result()));
	else
		return CreateGlobalAccelerationInstanceOutcome(outcome.error());
}

void VpcClient::createGlobalAccelerationInstanceAsync(const CreateGlobalAccelerationInstanceRequest& request, const CreateGlobalAccelerationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createGlobalAccelerationInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateGlobalAccelerationInstanceOutcomeCallable VpcClient::createGlobalAccelerationInstanceCallable(const CreateGlobalAccelerationInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateGlobalAccelerationInstanceOutcome()>>(
			[this, request]()
			{
			return this->createGlobalAccelerationInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CancelPhysicalConnectionOutcome VpcClient::cancelPhysicalConnection(const CancelPhysicalConnectionRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CancelPhysicalConnectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelPhysicalConnectionOutcome(CancelPhysicalConnectionResult(outcome.result()));
	else
		return CancelPhysicalConnectionOutcome(outcome.error());
}

void VpcClient::cancelPhysicalConnectionAsync(const CancelPhysicalConnectionRequest& request, const CancelPhysicalConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelPhysicalConnection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CancelPhysicalConnectionOutcomeCallable VpcClient::cancelPhysicalConnectionCallable(const CancelPhysicalConnectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelPhysicalConnectionOutcome()>>(
			[this, request]()
			{
			return this->cancelPhysicalConnection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::CreateBgpGroupOutcome VpcClient::createBgpGroup(const CreateBgpGroupRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return CreateBgpGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateBgpGroupOutcome(CreateBgpGroupResult(outcome.result()));
	else
		return CreateBgpGroupOutcome(outcome.error());
}

void VpcClient::createBgpGroupAsync(const CreateBgpGroupRequest& request, const CreateBgpGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createBgpGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::CreateBgpGroupOutcomeCallable VpcClient::createBgpGroupCallable(const CreateBgpGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateBgpGroupOutcome()>>(
			[this, request]()
			{
			return this->createBgpGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeVRoutersOutcome VpcClient::describeVRouters(const DescribeVRoutersRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVRoutersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVRoutersOutcome(DescribeVRoutersResult(outcome.result()));
	else
		return DescribeVRoutersOutcome(outcome.error());
}

void VpcClient::describeVRoutersAsync(const DescribeVRoutersRequest& request, const DescribeVRoutersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVRouters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeVRoutersOutcomeCallable VpcClient::describeVRoutersCallable(const DescribeVRoutersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVRoutersOutcome()>>(
			[this, request]()
			{
			return this->describeVRouters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeRouterInterfacesForGlobalOutcome VpcClient::describeRouterInterfacesForGlobal(const DescribeRouterInterfacesForGlobalRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRouterInterfacesForGlobalOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRouterInterfacesForGlobalOutcome(DescribeRouterInterfacesForGlobalResult(outcome.result()));
	else
		return DescribeRouterInterfacesForGlobalOutcome(outcome.error());
}

void VpcClient::describeRouterInterfacesForGlobalAsync(const DescribeRouterInterfacesForGlobalRequest& request, const DescribeRouterInterfacesForGlobalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRouterInterfacesForGlobal(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeRouterInterfacesForGlobalOutcomeCallable VpcClient::describeRouterInterfacesForGlobalCallable(const DescribeRouterInterfacesForGlobalRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRouterInterfacesForGlobalOutcome()>>(
			[this, request]()
			{
			return this->describeRouterInterfacesForGlobal(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyNqaOutcome VpcClient::modifyNqa(const ModifyNqaRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyNqaOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyNqaOutcome(ModifyNqaResult(outcome.result()));
	else
		return ModifyNqaOutcome(outcome.error());
}

void VpcClient::modifyNqaAsync(const ModifyNqaRequest& request, const ModifyNqaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyNqa(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyNqaOutcomeCallable VpcClient::modifyNqaCallable(const ModifyNqaRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyNqaOutcome()>>(
			[this, request]()
			{
			return this->modifyNqa(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::AllocateEipAddressOutcome VpcClient::allocateEipAddress(const AllocateEipAddressRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return AllocateEipAddressOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AllocateEipAddressOutcome(AllocateEipAddressResult(outcome.result()));
	else
		return AllocateEipAddressOutcome(outcome.error());
}

void VpcClient::allocateEipAddressAsync(const AllocateEipAddressRequest& request, const AllocateEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, allocateEipAddress(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::AllocateEipAddressOutcomeCallable VpcClient::allocateEipAddressCallable(const AllocateEipAddressRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AllocateEipAddressOutcome()>>(
			[this, request]()
			{
			return this->allocateEipAddress(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeSslVpnClientCertOutcome VpcClient::describeSslVpnClientCert(const DescribeSslVpnClientCertRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSslVpnClientCertOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSslVpnClientCertOutcome(DescribeSslVpnClientCertResult(outcome.result()));
	else
		return DescribeSslVpnClientCertOutcome(outcome.error());
}

void VpcClient::describeSslVpnClientCertAsync(const DescribeSslVpnClientCertRequest& request, const DescribeSslVpnClientCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSslVpnClientCert(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeSslVpnClientCertOutcomeCallable VpcClient::describeSslVpnClientCertCallable(const DescribeSslVpnClientCertRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSslVpnClientCertOutcome()>>(
			[this, request]()
			{
			return this->describeSslVpnClientCert(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeCommonBandwidthPackagesOutcome VpcClient::describeCommonBandwidthPackages(const DescribeCommonBandwidthPackagesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCommonBandwidthPackagesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCommonBandwidthPackagesOutcome(DescribeCommonBandwidthPackagesResult(outcome.result()));
	else
		return DescribeCommonBandwidthPackagesOutcome(outcome.error());
}

void VpcClient::describeCommonBandwidthPackagesAsync(const DescribeCommonBandwidthPackagesRequest& request, const DescribeCommonBandwidthPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCommonBandwidthPackages(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeCommonBandwidthPackagesOutcomeCallable VpcClient::describeCommonBandwidthPackagesCallable(const DescribeCommonBandwidthPackagesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCommonBandwidthPackagesOutcome()>>(
			[this, request]()
			{
			return this->describeCommonBandwidthPackages(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::UnassociateHaVipOutcome VpcClient::unassociateHaVip(const UnassociateHaVipRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return UnassociateHaVipOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnassociateHaVipOutcome(UnassociateHaVipResult(outcome.result()));
	else
		return UnassociateHaVipOutcome(outcome.error());
}

void VpcClient::unassociateHaVipAsync(const UnassociateHaVipRequest& request, const UnassociateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unassociateHaVip(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::UnassociateHaVipOutcomeCallable VpcClient::unassociateHaVipCallable(const UnassociateHaVipRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnassociateHaVipOutcome()>>(
			[this, request]()
			{
			return this->unassociateHaVip(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyHaVipAttributeOutcome VpcClient::modifyHaVipAttribute(const ModifyHaVipAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyHaVipAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyHaVipAttributeOutcome(ModifyHaVipAttributeResult(outcome.result()));
	else
		return ModifyHaVipAttributeOutcome(outcome.error());
}

void VpcClient::modifyHaVipAttributeAsync(const ModifyHaVipAttributeRequest& request, const ModifyHaVipAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyHaVipAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyHaVipAttributeOutcomeCallable VpcClient::modifyHaVipAttributeCallable(const ModifyHaVipAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyHaVipAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyHaVipAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::AssociateGlobalAccelerationInstanceOutcome VpcClient::associateGlobalAccelerationInstance(const AssociateGlobalAccelerationInstanceRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return AssociateGlobalAccelerationInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssociateGlobalAccelerationInstanceOutcome(AssociateGlobalAccelerationInstanceResult(outcome.result()));
	else
		return AssociateGlobalAccelerationInstanceOutcome(outcome.error());
}

void VpcClient::associateGlobalAccelerationInstanceAsync(const AssociateGlobalAccelerationInstanceRequest& request, const AssociateGlobalAccelerationInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, associateGlobalAccelerationInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::AssociateGlobalAccelerationInstanceOutcomeCallable VpcClient::associateGlobalAccelerationInstanceCallable(const AssociateGlobalAccelerationInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssociateGlobalAccelerationInstanceOutcome()>>(
			[this, request]()
			{
			return this->associateGlobalAccelerationInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeSslVpnServersOutcome VpcClient::describeSslVpnServers(const DescribeSslVpnServersRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSslVpnServersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSslVpnServersOutcome(DescribeSslVpnServersResult(outcome.result()));
	else
		return DescribeSslVpnServersOutcome(outcome.error());
}

void VpcClient::describeSslVpnServersAsync(const DescribeSslVpnServersRequest& request, const DescribeSslVpnServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSslVpnServers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeSslVpnServersOutcomeCallable VpcClient::describeSslVpnServersCallable(const DescribeSslVpnServersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSslVpnServersOutcome()>>(
			[this, request]()
			{
			return this->describeSslVpnServers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::ModifyVRouterAttributeOutcome VpcClient::modifyVRouterAttribute(const ModifyVRouterAttributeRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVRouterAttributeOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVRouterAttributeOutcome(ModifyVRouterAttributeResult(outcome.result()));
	else
		return ModifyVRouterAttributeOutcome(outcome.error());
}

void VpcClient::modifyVRouterAttributeAsync(const ModifyVRouterAttributeRequest& request, const ModifyVRouterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVRouterAttribute(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::ModifyVRouterAttributeOutcomeCallable VpcClient::modifyVRouterAttributeCallable(const ModifyVRouterAttributeRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVRouterAttributeOutcome()>>(
			[this, request]()
			{
			return this->modifyVRouterAttribute(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

VpcClient::DescribeSnatTableEntriesOutcome VpcClient::describeSnatTableEntries(const DescribeSnatTableEntriesRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSnatTableEntriesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSnatTableEntriesOutcome(DescribeSnatTableEntriesResult(outcome.result()));
	else
		return DescribeSnatTableEntriesOutcome(outcome.error());
}

void VpcClient::describeSnatTableEntriesAsync(const DescribeSnatTableEntriesRequest& request, const DescribeSnatTableEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSnatTableEntries(request), context);
	};

	asyncExecute(new Runnable(fn));
}

VpcClient::DescribeSnatTableEntriesOutcomeCallable VpcClient::describeSnatTableEntriesCallable(const DescribeSnatTableEntriesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSnatTableEntriesOutcome()>>(
			[this, request]()
			{
			return this->describeSnatTableEntries(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

