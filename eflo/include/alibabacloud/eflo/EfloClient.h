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

#ifndef ALIBABACLOUD_EFLO_EFLOCLIENT_H_
#define ALIBABACLOUD_EFLO_EFLOCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "EfloExport.h"
#include "model/AssignLeniPrivateIpAddressRequest.h"
#include "model/AssignLeniPrivateIpAddressResult.h"
#include "model/AssignPrivateIpAddressRequest.h"
#include "model/AssignPrivateIpAddressResult.h"
#include "model/AssociateVpdCidrBlockRequest.h"
#include "model/AssociateVpdCidrBlockResult.h"
#include "model/CreateElasticNetworkInterfaceRequest.h"
#include "model/CreateElasticNetworkInterfaceResult.h"
#include "model/CreateErRequest.h"
#include "model/CreateErResult.h"
#include "model/CreateErAttachmentRequest.h"
#include "model/CreateErAttachmentResult.h"
#include "model/CreateErRouteMapRequest.h"
#include "model/CreateErRouteMapResult.h"
#include "model/CreateSubnetRequest.h"
#include "model/CreateSubnetResult.h"
#include "model/CreateVccRequest.h"
#include "model/CreateVccResult.h"
#include "model/CreateVccGrantRuleRequest.h"
#include "model/CreateVccGrantRuleResult.h"
#include "model/CreateVccRouteEntryRequest.h"
#include "model/CreateVccRouteEntryResult.h"
#include "model/CreateVpdRequest.h"
#include "model/CreateVpdResult.h"
#include "model/CreateVpdGrantRuleRequest.h"
#include "model/CreateVpdGrantRuleResult.h"
#include "model/DeleteElasticNetworkInterfaceRequest.h"
#include "model/DeleteElasticNetworkInterfaceResult.h"
#include "model/DeleteErRequest.h"
#include "model/DeleteErResult.h"
#include "model/DeleteErAttachmentRequest.h"
#include "model/DeleteErAttachmentResult.h"
#include "model/DeleteErRouteMapRequest.h"
#include "model/DeleteErRouteMapResult.h"
#include "model/DeleteSubnetRequest.h"
#include "model/DeleteSubnetResult.h"
#include "model/DeleteVccGrantRuleRequest.h"
#include "model/DeleteVccGrantRuleResult.h"
#include "model/DeleteVccRouteEntryRequest.h"
#include "model/DeleteVccRouteEntryResult.h"
#include "model/DeleteVpdRequest.h"
#include "model/DeleteVpdResult.h"
#include "model/DeleteVpdGrantRuleRequest.h"
#include "model/DeleteVpdGrantRuleResult.h"
#include "model/DescribeSlrRequest.h"
#include "model/DescribeSlrResult.h"
#include "model/GetElasticNetworkInterfaceRequest.h"
#include "model/GetElasticNetworkInterfaceResult.h"
#include "model/GetErRequest.h"
#include "model/GetErResult.h"
#include "model/GetErAttachmentRequest.h"
#include "model/GetErAttachmentResult.h"
#include "model/GetErRouteEntryRequest.h"
#include "model/GetErRouteEntryResult.h"
#include "model/GetErRouteMapRequest.h"
#include "model/GetErRouteMapResult.h"
#include "model/GetFabricTopologyRequest.h"
#include "model/GetFabricTopologyResult.h"
#include "model/GetLeniPrivateIpAddressRequest.h"
#include "model/GetLeniPrivateIpAddressResult.h"
#include "model/GetLniPrivateIpAddressRequest.h"
#include "model/GetLniPrivateIpAddressResult.h"
#include "model/GetNetworkInterfaceRequest.h"
#include "model/GetNetworkInterfaceResult.h"
#include "model/GetNodeInfoForPodRequest.h"
#include "model/GetNodeInfoForPodResult.h"
#include "model/GetSubnetRequest.h"
#include "model/GetSubnetResult.h"
#include "model/GetVccRequest.h"
#include "model/GetVccResult.h"
#include "model/GetVccGrantRuleRequest.h"
#include "model/GetVccGrantRuleResult.h"
#include "model/GetVccRouteEntryRequest.h"
#include "model/GetVccRouteEntryResult.h"
#include "model/GetVpdRequest.h"
#include "model/GetVpdResult.h"
#include "model/GetVpdGrantRuleRequest.h"
#include "model/GetVpdGrantRuleResult.h"
#include "model/GetVpdRouteEntryRequest.h"
#include "model/GetVpdRouteEntryResult.h"
#include "model/InitializeVccRequest.h"
#include "model/InitializeVccResult.h"
#include "model/ListElasticNetworkInterfacesRequest.h"
#include "model/ListElasticNetworkInterfacesResult.h"
#include "model/ListErAttachmentsRequest.h"
#include "model/ListErAttachmentsResult.h"
#include "model/ListErRouteEntriesRequest.h"
#include "model/ListErRouteEntriesResult.h"
#include "model/ListErRouteMapsRequest.h"
#include "model/ListErRouteMapsResult.h"
#include "model/ListErsRequest.h"
#include "model/ListErsResult.h"
#include "model/ListInstancesByNcdRequest.h"
#include "model/ListInstancesByNcdResult.h"
#include "model/ListLeniPrivateIpAddressesRequest.h"
#include "model/ListLeniPrivateIpAddressesResult.h"
#include "model/ListLniPrivateIpAddressRequest.h"
#include "model/ListLniPrivateIpAddressResult.h"
#include "model/ListNetworkInterfacesRequest.h"
#include "model/ListNetworkInterfacesResult.h"
#include "model/ListNodeInfosForPodRequest.h"
#include "model/ListNodeInfosForPodResult.h"
#include "model/ListSubnetsRequest.h"
#include "model/ListSubnetsResult.h"
#include "model/ListVccFlowInfosRequest.h"
#include "model/ListVccFlowInfosResult.h"
#include "model/ListVccGrantRulesRequest.h"
#include "model/ListVccGrantRulesResult.h"
#include "model/ListVccRouteEntriesRequest.h"
#include "model/ListVccRouteEntriesResult.h"
#include "model/ListVccsRequest.h"
#include "model/ListVccsResult.h"
#include "model/ListVpdGrantRulesRequest.h"
#include "model/ListVpdGrantRulesResult.h"
#include "model/ListVpdRouteEntriesRequest.h"
#include "model/ListVpdRouteEntriesResult.h"
#include "model/ListVpdsRequest.h"
#include "model/ListVpdsResult.h"
#include "model/QueryInstanceNcdRequest.h"
#include "model/QueryInstanceNcdResult.h"
#include "model/UnAssignPrivateIpAddressRequest.h"
#include "model/UnAssignPrivateIpAddressResult.h"
#include "model/UnAssociateVpdCidrBlockRequest.h"
#include "model/UnAssociateVpdCidrBlockResult.h"
#include "model/UnassignLeniPrivateIpAddressRequest.h"
#include "model/UnassignLeniPrivateIpAddressResult.h"
#include "model/UpdateElasticNetworkInterfaceRequest.h"
#include "model/UpdateElasticNetworkInterfaceResult.h"
#include "model/UpdateErRequest.h"
#include "model/UpdateErResult.h"
#include "model/UpdateErAttachmentRequest.h"
#include "model/UpdateErAttachmentResult.h"
#include "model/UpdateErRouteMapRequest.h"
#include "model/UpdateErRouteMapResult.h"
#include "model/UpdateLeniPrivateIpAddressRequest.h"
#include "model/UpdateLeniPrivateIpAddressResult.h"
#include "model/UpdateSubnetRequest.h"
#include "model/UpdateSubnetResult.h"
#include "model/UpdateVccRequest.h"
#include "model/UpdateVccResult.h"
#include "model/UpdateVpdRequest.h"
#include "model/UpdateVpdResult.h"


namespace AlibabaCloud
{
	namespace Eflo
	{
		class ALIBABACLOUD_EFLO_EXPORT EfloClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AssignLeniPrivateIpAddressResult> AssignLeniPrivateIpAddressOutcome;
			typedef std::future<AssignLeniPrivateIpAddressOutcome> AssignLeniPrivateIpAddressOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::AssignLeniPrivateIpAddressRequest&, const AssignLeniPrivateIpAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssignLeniPrivateIpAddressAsyncHandler;
			typedef Outcome<Error, Model::AssignPrivateIpAddressResult> AssignPrivateIpAddressOutcome;
			typedef std::future<AssignPrivateIpAddressOutcome> AssignPrivateIpAddressOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::AssignPrivateIpAddressRequest&, const AssignPrivateIpAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssignPrivateIpAddressAsyncHandler;
			typedef Outcome<Error, Model::AssociateVpdCidrBlockResult> AssociateVpdCidrBlockOutcome;
			typedef std::future<AssociateVpdCidrBlockOutcome> AssociateVpdCidrBlockOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::AssociateVpdCidrBlockRequest&, const AssociateVpdCidrBlockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateVpdCidrBlockAsyncHandler;
			typedef Outcome<Error, Model::CreateElasticNetworkInterfaceResult> CreateElasticNetworkInterfaceOutcome;
			typedef std::future<CreateElasticNetworkInterfaceOutcome> CreateElasticNetworkInterfaceOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::CreateElasticNetworkInterfaceRequest&, const CreateElasticNetworkInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateElasticNetworkInterfaceAsyncHandler;
			typedef Outcome<Error, Model::CreateErResult> CreateErOutcome;
			typedef std::future<CreateErOutcome> CreateErOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::CreateErRequest&, const CreateErOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateErAsyncHandler;
			typedef Outcome<Error, Model::CreateErAttachmentResult> CreateErAttachmentOutcome;
			typedef std::future<CreateErAttachmentOutcome> CreateErAttachmentOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::CreateErAttachmentRequest&, const CreateErAttachmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateErAttachmentAsyncHandler;
			typedef Outcome<Error, Model::CreateErRouteMapResult> CreateErRouteMapOutcome;
			typedef std::future<CreateErRouteMapOutcome> CreateErRouteMapOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::CreateErRouteMapRequest&, const CreateErRouteMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateErRouteMapAsyncHandler;
			typedef Outcome<Error, Model::CreateSubnetResult> CreateSubnetOutcome;
			typedef std::future<CreateSubnetOutcome> CreateSubnetOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::CreateSubnetRequest&, const CreateSubnetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubnetAsyncHandler;
			typedef Outcome<Error, Model::CreateVccResult> CreateVccOutcome;
			typedef std::future<CreateVccOutcome> CreateVccOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::CreateVccRequest&, const CreateVccOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVccAsyncHandler;
			typedef Outcome<Error, Model::CreateVccGrantRuleResult> CreateVccGrantRuleOutcome;
			typedef std::future<CreateVccGrantRuleOutcome> CreateVccGrantRuleOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::CreateVccGrantRuleRequest&, const CreateVccGrantRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVccGrantRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateVccRouteEntryResult> CreateVccRouteEntryOutcome;
			typedef std::future<CreateVccRouteEntryOutcome> CreateVccRouteEntryOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::CreateVccRouteEntryRequest&, const CreateVccRouteEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVccRouteEntryAsyncHandler;
			typedef Outcome<Error, Model::CreateVpdResult> CreateVpdOutcome;
			typedef std::future<CreateVpdOutcome> CreateVpdOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::CreateVpdRequest&, const CreateVpdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpdAsyncHandler;
			typedef Outcome<Error, Model::CreateVpdGrantRuleResult> CreateVpdGrantRuleOutcome;
			typedef std::future<CreateVpdGrantRuleOutcome> CreateVpdGrantRuleOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::CreateVpdGrantRuleRequest&, const CreateVpdGrantRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpdGrantRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteElasticNetworkInterfaceResult> DeleteElasticNetworkInterfaceOutcome;
			typedef std::future<DeleteElasticNetworkInterfaceOutcome> DeleteElasticNetworkInterfaceOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::DeleteElasticNetworkInterfaceRequest&, const DeleteElasticNetworkInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteElasticNetworkInterfaceAsyncHandler;
			typedef Outcome<Error, Model::DeleteErResult> DeleteErOutcome;
			typedef std::future<DeleteErOutcome> DeleteErOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::DeleteErRequest&, const DeleteErOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteErAsyncHandler;
			typedef Outcome<Error, Model::DeleteErAttachmentResult> DeleteErAttachmentOutcome;
			typedef std::future<DeleteErAttachmentOutcome> DeleteErAttachmentOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::DeleteErAttachmentRequest&, const DeleteErAttachmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteErAttachmentAsyncHandler;
			typedef Outcome<Error, Model::DeleteErRouteMapResult> DeleteErRouteMapOutcome;
			typedef std::future<DeleteErRouteMapOutcome> DeleteErRouteMapOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::DeleteErRouteMapRequest&, const DeleteErRouteMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteErRouteMapAsyncHandler;
			typedef Outcome<Error, Model::DeleteSubnetResult> DeleteSubnetOutcome;
			typedef std::future<DeleteSubnetOutcome> DeleteSubnetOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::DeleteSubnetRequest&, const DeleteSubnetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSubnetAsyncHandler;
			typedef Outcome<Error, Model::DeleteVccGrantRuleResult> DeleteVccGrantRuleOutcome;
			typedef std::future<DeleteVccGrantRuleOutcome> DeleteVccGrantRuleOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::DeleteVccGrantRuleRequest&, const DeleteVccGrantRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVccGrantRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteVccRouteEntryResult> DeleteVccRouteEntryOutcome;
			typedef std::future<DeleteVccRouteEntryOutcome> DeleteVccRouteEntryOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::DeleteVccRouteEntryRequest&, const DeleteVccRouteEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVccRouteEntryAsyncHandler;
			typedef Outcome<Error, Model::DeleteVpdResult> DeleteVpdOutcome;
			typedef std::future<DeleteVpdOutcome> DeleteVpdOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::DeleteVpdRequest&, const DeleteVpdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpdAsyncHandler;
			typedef Outcome<Error, Model::DeleteVpdGrantRuleResult> DeleteVpdGrantRuleOutcome;
			typedef std::future<DeleteVpdGrantRuleOutcome> DeleteVpdGrantRuleOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::DeleteVpdGrantRuleRequest&, const DeleteVpdGrantRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpdGrantRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlrResult> DescribeSlrOutcome;
			typedef std::future<DescribeSlrOutcome> DescribeSlrOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::DescribeSlrRequest&, const DescribeSlrOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlrAsyncHandler;
			typedef Outcome<Error, Model::GetElasticNetworkInterfaceResult> GetElasticNetworkInterfaceOutcome;
			typedef std::future<GetElasticNetworkInterfaceOutcome> GetElasticNetworkInterfaceOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::GetElasticNetworkInterfaceRequest&, const GetElasticNetworkInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetElasticNetworkInterfaceAsyncHandler;
			typedef Outcome<Error, Model::GetErResult> GetErOutcome;
			typedef std::future<GetErOutcome> GetErOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::GetErRequest&, const GetErOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetErAsyncHandler;
			typedef Outcome<Error, Model::GetErAttachmentResult> GetErAttachmentOutcome;
			typedef std::future<GetErAttachmentOutcome> GetErAttachmentOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::GetErAttachmentRequest&, const GetErAttachmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetErAttachmentAsyncHandler;
			typedef Outcome<Error, Model::GetErRouteEntryResult> GetErRouteEntryOutcome;
			typedef std::future<GetErRouteEntryOutcome> GetErRouteEntryOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::GetErRouteEntryRequest&, const GetErRouteEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetErRouteEntryAsyncHandler;
			typedef Outcome<Error, Model::GetErRouteMapResult> GetErRouteMapOutcome;
			typedef std::future<GetErRouteMapOutcome> GetErRouteMapOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::GetErRouteMapRequest&, const GetErRouteMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetErRouteMapAsyncHandler;
			typedef Outcome<Error, Model::GetFabricTopologyResult> GetFabricTopologyOutcome;
			typedef std::future<GetFabricTopologyOutcome> GetFabricTopologyOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::GetFabricTopologyRequest&, const GetFabricTopologyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFabricTopologyAsyncHandler;
			typedef Outcome<Error, Model::GetLeniPrivateIpAddressResult> GetLeniPrivateIpAddressOutcome;
			typedef std::future<GetLeniPrivateIpAddressOutcome> GetLeniPrivateIpAddressOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::GetLeniPrivateIpAddressRequest&, const GetLeniPrivateIpAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLeniPrivateIpAddressAsyncHandler;
			typedef Outcome<Error, Model::GetLniPrivateIpAddressResult> GetLniPrivateIpAddressOutcome;
			typedef std::future<GetLniPrivateIpAddressOutcome> GetLniPrivateIpAddressOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::GetLniPrivateIpAddressRequest&, const GetLniPrivateIpAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLniPrivateIpAddressAsyncHandler;
			typedef Outcome<Error, Model::GetNetworkInterfaceResult> GetNetworkInterfaceOutcome;
			typedef std::future<GetNetworkInterfaceOutcome> GetNetworkInterfaceOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::GetNetworkInterfaceRequest&, const GetNetworkInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNetworkInterfaceAsyncHandler;
			typedef Outcome<Error, Model::GetNodeInfoForPodResult> GetNodeInfoForPodOutcome;
			typedef std::future<GetNodeInfoForPodOutcome> GetNodeInfoForPodOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::GetNodeInfoForPodRequest&, const GetNodeInfoForPodOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNodeInfoForPodAsyncHandler;
			typedef Outcome<Error, Model::GetSubnetResult> GetSubnetOutcome;
			typedef std::future<GetSubnetOutcome> GetSubnetOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::GetSubnetRequest&, const GetSubnetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSubnetAsyncHandler;
			typedef Outcome<Error, Model::GetVccResult> GetVccOutcome;
			typedef std::future<GetVccOutcome> GetVccOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::GetVccRequest&, const GetVccOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVccAsyncHandler;
			typedef Outcome<Error, Model::GetVccGrantRuleResult> GetVccGrantRuleOutcome;
			typedef std::future<GetVccGrantRuleOutcome> GetVccGrantRuleOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::GetVccGrantRuleRequest&, const GetVccGrantRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVccGrantRuleAsyncHandler;
			typedef Outcome<Error, Model::GetVccRouteEntryResult> GetVccRouteEntryOutcome;
			typedef std::future<GetVccRouteEntryOutcome> GetVccRouteEntryOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::GetVccRouteEntryRequest&, const GetVccRouteEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVccRouteEntryAsyncHandler;
			typedef Outcome<Error, Model::GetVpdResult> GetVpdOutcome;
			typedef std::future<GetVpdOutcome> GetVpdOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::GetVpdRequest&, const GetVpdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVpdAsyncHandler;
			typedef Outcome<Error, Model::GetVpdGrantRuleResult> GetVpdGrantRuleOutcome;
			typedef std::future<GetVpdGrantRuleOutcome> GetVpdGrantRuleOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::GetVpdGrantRuleRequest&, const GetVpdGrantRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVpdGrantRuleAsyncHandler;
			typedef Outcome<Error, Model::GetVpdRouteEntryResult> GetVpdRouteEntryOutcome;
			typedef std::future<GetVpdRouteEntryOutcome> GetVpdRouteEntryOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::GetVpdRouteEntryRequest&, const GetVpdRouteEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVpdRouteEntryAsyncHandler;
			typedef Outcome<Error, Model::InitializeVccResult> InitializeVccOutcome;
			typedef std::future<InitializeVccOutcome> InitializeVccOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::InitializeVccRequest&, const InitializeVccOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InitializeVccAsyncHandler;
			typedef Outcome<Error, Model::ListElasticNetworkInterfacesResult> ListElasticNetworkInterfacesOutcome;
			typedef std::future<ListElasticNetworkInterfacesOutcome> ListElasticNetworkInterfacesOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::ListElasticNetworkInterfacesRequest&, const ListElasticNetworkInterfacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListElasticNetworkInterfacesAsyncHandler;
			typedef Outcome<Error, Model::ListErAttachmentsResult> ListErAttachmentsOutcome;
			typedef std::future<ListErAttachmentsOutcome> ListErAttachmentsOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::ListErAttachmentsRequest&, const ListErAttachmentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListErAttachmentsAsyncHandler;
			typedef Outcome<Error, Model::ListErRouteEntriesResult> ListErRouteEntriesOutcome;
			typedef std::future<ListErRouteEntriesOutcome> ListErRouteEntriesOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::ListErRouteEntriesRequest&, const ListErRouteEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListErRouteEntriesAsyncHandler;
			typedef Outcome<Error, Model::ListErRouteMapsResult> ListErRouteMapsOutcome;
			typedef std::future<ListErRouteMapsOutcome> ListErRouteMapsOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::ListErRouteMapsRequest&, const ListErRouteMapsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListErRouteMapsAsyncHandler;
			typedef Outcome<Error, Model::ListErsResult> ListErsOutcome;
			typedef std::future<ListErsOutcome> ListErsOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::ListErsRequest&, const ListErsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListErsAsyncHandler;
			typedef Outcome<Error, Model::ListInstancesByNcdResult> ListInstancesByNcdOutcome;
			typedef std::future<ListInstancesByNcdOutcome> ListInstancesByNcdOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::ListInstancesByNcdRequest&, const ListInstancesByNcdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstancesByNcdAsyncHandler;
			typedef Outcome<Error, Model::ListLeniPrivateIpAddressesResult> ListLeniPrivateIpAddressesOutcome;
			typedef std::future<ListLeniPrivateIpAddressesOutcome> ListLeniPrivateIpAddressesOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::ListLeniPrivateIpAddressesRequest&, const ListLeniPrivateIpAddressesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLeniPrivateIpAddressesAsyncHandler;
			typedef Outcome<Error, Model::ListLniPrivateIpAddressResult> ListLniPrivateIpAddressOutcome;
			typedef std::future<ListLniPrivateIpAddressOutcome> ListLniPrivateIpAddressOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::ListLniPrivateIpAddressRequest&, const ListLniPrivateIpAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLniPrivateIpAddressAsyncHandler;
			typedef Outcome<Error, Model::ListNetworkInterfacesResult> ListNetworkInterfacesOutcome;
			typedef std::future<ListNetworkInterfacesOutcome> ListNetworkInterfacesOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::ListNetworkInterfacesRequest&, const ListNetworkInterfacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNetworkInterfacesAsyncHandler;
			typedef Outcome<Error, Model::ListNodeInfosForPodResult> ListNodeInfosForPodOutcome;
			typedef std::future<ListNodeInfosForPodOutcome> ListNodeInfosForPodOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::ListNodeInfosForPodRequest&, const ListNodeInfosForPodOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodeInfosForPodAsyncHandler;
			typedef Outcome<Error, Model::ListSubnetsResult> ListSubnetsOutcome;
			typedef std::future<ListSubnetsOutcome> ListSubnetsOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::ListSubnetsRequest&, const ListSubnetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSubnetsAsyncHandler;
			typedef Outcome<Error, Model::ListVccFlowInfosResult> ListVccFlowInfosOutcome;
			typedef std::future<ListVccFlowInfosOutcome> ListVccFlowInfosOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::ListVccFlowInfosRequest&, const ListVccFlowInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVccFlowInfosAsyncHandler;
			typedef Outcome<Error, Model::ListVccGrantRulesResult> ListVccGrantRulesOutcome;
			typedef std::future<ListVccGrantRulesOutcome> ListVccGrantRulesOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::ListVccGrantRulesRequest&, const ListVccGrantRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVccGrantRulesAsyncHandler;
			typedef Outcome<Error, Model::ListVccRouteEntriesResult> ListVccRouteEntriesOutcome;
			typedef std::future<ListVccRouteEntriesOutcome> ListVccRouteEntriesOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::ListVccRouteEntriesRequest&, const ListVccRouteEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVccRouteEntriesAsyncHandler;
			typedef Outcome<Error, Model::ListVccsResult> ListVccsOutcome;
			typedef std::future<ListVccsOutcome> ListVccsOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::ListVccsRequest&, const ListVccsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVccsAsyncHandler;
			typedef Outcome<Error, Model::ListVpdGrantRulesResult> ListVpdGrantRulesOutcome;
			typedef std::future<ListVpdGrantRulesOutcome> ListVpdGrantRulesOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::ListVpdGrantRulesRequest&, const ListVpdGrantRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVpdGrantRulesAsyncHandler;
			typedef Outcome<Error, Model::ListVpdRouteEntriesResult> ListVpdRouteEntriesOutcome;
			typedef std::future<ListVpdRouteEntriesOutcome> ListVpdRouteEntriesOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::ListVpdRouteEntriesRequest&, const ListVpdRouteEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVpdRouteEntriesAsyncHandler;
			typedef Outcome<Error, Model::ListVpdsResult> ListVpdsOutcome;
			typedef std::future<ListVpdsOutcome> ListVpdsOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::ListVpdsRequest&, const ListVpdsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVpdsAsyncHandler;
			typedef Outcome<Error, Model::QueryInstanceNcdResult> QueryInstanceNcdOutcome;
			typedef std::future<QueryInstanceNcdOutcome> QueryInstanceNcdOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::QueryInstanceNcdRequest&, const QueryInstanceNcdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryInstanceNcdAsyncHandler;
			typedef Outcome<Error, Model::UnAssignPrivateIpAddressResult> UnAssignPrivateIpAddressOutcome;
			typedef std::future<UnAssignPrivateIpAddressOutcome> UnAssignPrivateIpAddressOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::UnAssignPrivateIpAddressRequest&, const UnAssignPrivateIpAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnAssignPrivateIpAddressAsyncHandler;
			typedef Outcome<Error, Model::UnAssociateVpdCidrBlockResult> UnAssociateVpdCidrBlockOutcome;
			typedef std::future<UnAssociateVpdCidrBlockOutcome> UnAssociateVpdCidrBlockOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::UnAssociateVpdCidrBlockRequest&, const UnAssociateVpdCidrBlockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnAssociateVpdCidrBlockAsyncHandler;
			typedef Outcome<Error, Model::UnassignLeniPrivateIpAddressResult> UnassignLeniPrivateIpAddressOutcome;
			typedef std::future<UnassignLeniPrivateIpAddressOutcome> UnassignLeniPrivateIpAddressOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::UnassignLeniPrivateIpAddressRequest&, const UnassignLeniPrivateIpAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnassignLeniPrivateIpAddressAsyncHandler;
			typedef Outcome<Error, Model::UpdateElasticNetworkInterfaceResult> UpdateElasticNetworkInterfaceOutcome;
			typedef std::future<UpdateElasticNetworkInterfaceOutcome> UpdateElasticNetworkInterfaceOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::UpdateElasticNetworkInterfaceRequest&, const UpdateElasticNetworkInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateElasticNetworkInterfaceAsyncHandler;
			typedef Outcome<Error, Model::UpdateErResult> UpdateErOutcome;
			typedef std::future<UpdateErOutcome> UpdateErOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::UpdateErRequest&, const UpdateErOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateErAsyncHandler;
			typedef Outcome<Error, Model::UpdateErAttachmentResult> UpdateErAttachmentOutcome;
			typedef std::future<UpdateErAttachmentOutcome> UpdateErAttachmentOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::UpdateErAttachmentRequest&, const UpdateErAttachmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateErAttachmentAsyncHandler;
			typedef Outcome<Error, Model::UpdateErRouteMapResult> UpdateErRouteMapOutcome;
			typedef std::future<UpdateErRouteMapOutcome> UpdateErRouteMapOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::UpdateErRouteMapRequest&, const UpdateErRouteMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateErRouteMapAsyncHandler;
			typedef Outcome<Error, Model::UpdateLeniPrivateIpAddressResult> UpdateLeniPrivateIpAddressOutcome;
			typedef std::future<UpdateLeniPrivateIpAddressOutcome> UpdateLeniPrivateIpAddressOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::UpdateLeniPrivateIpAddressRequest&, const UpdateLeniPrivateIpAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLeniPrivateIpAddressAsyncHandler;
			typedef Outcome<Error, Model::UpdateSubnetResult> UpdateSubnetOutcome;
			typedef std::future<UpdateSubnetOutcome> UpdateSubnetOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::UpdateSubnetRequest&, const UpdateSubnetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSubnetAsyncHandler;
			typedef Outcome<Error, Model::UpdateVccResult> UpdateVccOutcome;
			typedef std::future<UpdateVccOutcome> UpdateVccOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::UpdateVccRequest&, const UpdateVccOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVccAsyncHandler;
			typedef Outcome<Error, Model::UpdateVpdResult> UpdateVpdOutcome;
			typedef std::future<UpdateVpdOutcome> UpdateVpdOutcomeCallable;
			typedef std::function<void(const EfloClient*, const Model::UpdateVpdRequest&, const UpdateVpdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVpdAsyncHandler;

			EfloClient(const Credentials &credentials, const ClientConfiguration &configuration);
			EfloClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			EfloClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~EfloClient();
			AssignLeniPrivateIpAddressOutcome assignLeniPrivateIpAddress(const Model::AssignLeniPrivateIpAddressRequest &request)const;
			void assignLeniPrivateIpAddressAsync(const Model::AssignLeniPrivateIpAddressRequest& request, const AssignLeniPrivateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssignLeniPrivateIpAddressOutcomeCallable assignLeniPrivateIpAddressCallable(const Model::AssignLeniPrivateIpAddressRequest& request) const;
			AssignPrivateIpAddressOutcome assignPrivateIpAddress(const Model::AssignPrivateIpAddressRequest &request)const;
			void assignPrivateIpAddressAsync(const Model::AssignPrivateIpAddressRequest& request, const AssignPrivateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssignPrivateIpAddressOutcomeCallable assignPrivateIpAddressCallable(const Model::AssignPrivateIpAddressRequest& request) const;
			AssociateVpdCidrBlockOutcome associateVpdCidrBlock(const Model::AssociateVpdCidrBlockRequest &request)const;
			void associateVpdCidrBlockAsync(const Model::AssociateVpdCidrBlockRequest& request, const AssociateVpdCidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateVpdCidrBlockOutcomeCallable associateVpdCidrBlockCallable(const Model::AssociateVpdCidrBlockRequest& request) const;
			CreateElasticNetworkInterfaceOutcome createElasticNetworkInterface(const Model::CreateElasticNetworkInterfaceRequest &request)const;
			void createElasticNetworkInterfaceAsync(const Model::CreateElasticNetworkInterfaceRequest& request, const CreateElasticNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateElasticNetworkInterfaceOutcomeCallable createElasticNetworkInterfaceCallable(const Model::CreateElasticNetworkInterfaceRequest& request) const;
			CreateErOutcome createEr(const Model::CreateErRequest &request)const;
			void createErAsync(const Model::CreateErRequest& request, const CreateErAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateErOutcomeCallable createErCallable(const Model::CreateErRequest& request) const;
			CreateErAttachmentOutcome createErAttachment(const Model::CreateErAttachmentRequest &request)const;
			void createErAttachmentAsync(const Model::CreateErAttachmentRequest& request, const CreateErAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateErAttachmentOutcomeCallable createErAttachmentCallable(const Model::CreateErAttachmentRequest& request) const;
			CreateErRouteMapOutcome createErRouteMap(const Model::CreateErRouteMapRequest &request)const;
			void createErRouteMapAsync(const Model::CreateErRouteMapRequest& request, const CreateErRouteMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateErRouteMapOutcomeCallable createErRouteMapCallable(const Model::CreateErRouteMapRequest& request) const;
			CreateSubnetOutcome createSubnet(const Model::CreateSubnetRequest &request)const;
			void createSubnetAsync(const Model::CreateSubnetRequest& request, const CreateSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSubnetOutcomeCallable createSubnetCallable(const Model::CreateSubnetRequest& request) const;
			CreateVccOutcome createVcc(const Model::CreateVccRequest &request)const;
			void createVccAsync(const Model::CreateVccRequest& request, const CreateVccAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVccOutcomeCallable createVccCallable(const Model::CreateVccRequest& request) const;
			CreateVccGrantRuleOutcome createVccGrantRule(const Model::CreateVccGrantRuleRequest &request)const;
			void createVccGrantRuleAsync(const Model::CreateVccGrantRuleRequest& request, const CreateVccGrantRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVccGrantRuleOutcomeCallable createVccGrantRuleCallable(const Model::CreateVccGrantRuleRequest& request) const;
			CreateVccRouteEntryOutcome createVccRouteEntry(const Model::CreateVccRouteEntryRequest &request)const;
			void createVccRouteEntryAsync(const Model::CreateVccRouteEntryRequest& request, const CreateVccRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVccRouteEntryOutcomeCallable createVccRouteEntryCallable(const Model::CreateVccRouteEntryRequest& request) const;
			CreateVpdOutcome createVpd(const Model::CreateVpdRequest &request)const;
			void createVpdAsync(const Model::CreateVpdRequest& request, const CreateVpdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVpdOutcomeCallable createVpdCallable(const Model::CreateVpdRequest& request) const;
			CreateVpdGrantRuleOutcome createVpdGrantRule(const Model::CreateVpdGrantRuleRequest &request)const;
			void createVpdGrantRuleAsync(const Model::CreateVpdGrantRuleRequest& request, const CreateVpdGrantRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVpdGrantRuleOutcomeCallable createVpdGrantRuleCallable(const Model::CreateVpdGrantRuleRequest& request) const;
			DeleteElasticNetworkInterfaceOutcome deleteElasticNetworkInterface(const Model::DeleteElasticNetworkInterfaceRequest &request)const;
			void deleteElasticNetworkInterfaceAsync(const Model::DeleteElasticNetworkInterfaceRequest& request, const DeleteElasticNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteElasticNetworkInterfaceOutcomeCallable deleteElasticNetworkInterfaceCallable(const Model::DeleteElasticNetworkInterfaceRequest& request) const;
			DeleteErOutcome deleteEr(const Model::DeleteErRequest &request)const;
			void deleteErAsync(const Model::DeleteErRequest& request, const DeleteErAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteErOutcomeCallable deleteErCallable(const Model::DeleteErRequest& request) const;
			DeleteErAttachmentOutcome deleteErAttachment(const Model::DeleteErAttachmentRequest &request)const;
			void deleteErAttachmentAsync(const Model::DeleteErAttachmentRequest& request, const DeleteErAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteErAttachmentOutcomeCallable deleteErAttachmentCallable(const Model::DeleteErAttachmentRequest& request) const;
			DeleteErRouteMapOutcome deleteErRouteMap(const Model::DeleteErRouteMapRequest &request)const;
			void deleteErRouteMapAsync(const Model::DeleteErRouteMapRequest& request, const DeleteErRouteMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteErRouteMapOutcomeCallable deleteErRouteMapCallable(const Model::DeleteErRouteMapRequest& request) const;
			DeleteSubnetOutcome deleteSubnet(const Model::DeleteSubnetRequest &request)const;
			void deleteSubnetAsync(const Model::DeleteSubnetRequest& request, const DeleteSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSubnetOutcomeCallable deleteSubnetCallable(const Model::DeleteSubnetRequest& request) const;
			DeleteVccGrantRuleOutcome deleteVccGrantRule(const Model::DeleteVccGrantRuleRequest &request)const;
			void deleteVccGrantRuleAsync(const Model::DeleteVccGrantRuleRequest& request, const DeleteVccGrantRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVccGrantRuleOutcomeCallable deleteVccGrantRuleCallable(const Model::DeleteVccGrantRuleRequest& request) const;
			DeleteVccRouteEntryOutcome deleteVccRouteEntry(const Model::DeleteVccRouteEntryRequest &request)const;
			void deleteVccRouteEntryAsync(const Model::DeleteVccRouteEntryRequest& request, const DeleteVccRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVccRouteEntryOutcomeCallable deleteVccRouteEntryCallable(const Model::DeleteVccRouteEntryRequest& request) const;
			DeleteVpdOutcome deleteVpd(const Model::DeleteVpdRequest &request)const;
			void deleteVpdAsync(const Model::DeleteVpdRequest& request, const DeleteVpdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVpdOutcomeCallable deleteVpdCallable(const Model::DeleteVpdRequest& request) const;
			DeleteVpdGrantRuleOutcome deleteVpdGrantRule(const Model::DeleteVpdGrantRuleRequest &request)const;
			void deleteVpdGrantRuleAsync(const Model::DeleteVpdGrantRuleRequest& request, const DeleteVpdGrantRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVpdGrantRuleOutcomeCallable deleteVpdGrantRuleCallable(const Model::DeleteVpdGrantRuleRequest& request) const;
			DescribeSlrOutcome describeSlr(const Model::DescribeSlrRequest &request)const;
			void describeSlrAsync(const Model::DescribeSlrRequest& request, const DescribeSlrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlrOutcomeCallable describeSlrCallable(const Model::DescribeSlrRequest& request) const;
			GetElasticNetworkInterfaceOutcome getElasticNetworkInterface(const Model::GetElasticNetworkInterfaceRequest &request)const;
			void getElasticNetworkInterfaceAsync(const Model::GetElasticNetworkInterfaceRequest& request, const GetElasticNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetElasticNetworkInterfaceOutcomeCallable getElasticNetworkInterfaceCallable(const Model::GetElasticNetworkInterfaceRequest& request) const;
			GetErOutcome getEr(const Model::GetErRequest &request)const;
			void getErAsync(const Model::GetErRequest& request, const GetErAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetErOutcomeCallable getErCallable(const Model::GetErRequest& request) const;
			GetErAttachmentOutcome getErAttachment(const Model::GetErAttachmentRequest &request)const;
			void getErAttachmentAsync(const Model::GetErAttachmentRequest& request, const GetErAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetErAttachmentOutcomeCallable getErAttachmentCallable(const Model::GetErAttachmentRequest& request) const;
			GetErRouteEntryOutcome getErRouteEntry(const Model::GetErRouteEntryRequest &request)const;
			void getErRouteEntryAsync(const Model::GetErRouteEntryRequest& request, const GetErRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetErRouteEntryOutcomeCallable getErRouteEntryCallable(const Model::GetErRouteEntryRequest& request) const;
			GetErRouteMapOutcome getErRouteMap(const Model::GetErRouteMapRequest &request)const;
			void getErRouteMapAsync(const Model::GetErRouteMapRequest& request, const GetErRouteMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetErRouteMapOutcomeCallable getErRouteMapCallable(const Model::GetErRouteMapRequest& request) const;
			GetFabricTopologyOutcome getFabricTopology(const Model::GetFabricTopologyRequest &request)const;
			void getFabricTopologyAsync(const Model::GetFabricTopologyRequest& request, const GetFabricTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFabricTopologyOutcomeCallable getFabricTopologyCallable(const Model::GetFabricTopologyRequest& request) const;
			GetLeniPrivateIpAddressOutcome getLeniPrivateIpAddress(const Model::GetLeniPrivateIpAddressRequest &request)const;
			void getLeniPrivateIpAddressAsync(const Model::GetLeniPrivateIpAddressRequest& request, const GetLeniPrivateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLeniPrivateIpAddressOutcomeCallable getLeniPrivateIpAddressCallable(const Model::GetLeniPrivateIpAddressRequest& request) const;
			GetLniPrivateIpAddressOutcome getLniPrivateIpAddress(const Model::GetLniPrivateIpAddressRequest &request)const;
			void getLniPrivateIpAddressAsync(const Model::GetLniPrivateIpAddressRequest& request, const GetLniPrivateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLniPrivateIpAddressOutcomeCallable getLniPrivateIpAddressCallable(const Model::GetLniPrivateIpAddressRequest& request) const;
			GetNetworkInterfaceOutcome getNetworkInterface(const Model::GetNetworkInterfaceRequest &request)const;
			void getNetworkInterfaceAsync(const Model::GetNetworkInterfaceRequest& request, const GetNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNetworkInterfaceOutcomeCallable getNetworkInterfaceCallable(const Model::GetNetworkInterfaceRequest& request) const;
			GetNodeInfoForPodOutcome getNodeInfoForPod(const Model::GetNodeInfoForPodRequest &request)const;
			void getNodeInfoForPodAsync(const Model::GetNodeInfoForPodRequest& request, const GetNodeInfoForPodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNodeInfoForPodOutcomeCallable getNodeInfoForPodCallable(const Model::GetNodeInfoForPodRequest& request) const;
			GetSubnetOutcome getSubnet(const Model::GetSubnetRequest &request)const;
			void getSubnetAsync(const Model::GetSubnetRequest& request, const GetSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSubnetOutcomeCallable getSubnetCallable(const Model::GetSubnetRequest& request) const;
			GetVccOutcome getVcc(const Model::GetVccRequest &request)const;
			void getVccAsync(const Model::GetVccRequest& request, const GetVccAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVccOutcomeCallable getVccCallable(const Model::GetVccRequest& request) const;
			GetVccGrantRuleOutcome getVccGrantRule(const Model::GetVccGrantRuleRequest &request)const;
			void getVccGrantRuleAsync(const Model::GetVccGrantRuleRequest& request, const GetVccGrantRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVccGrantRuleOutcomeCallable getVccGrantRuleCallable(const Model::GetVccGrantRuleRequest& request) const;
			GetVccRouteEntryOutcome getVccRouteEntry(const Model::GetVccRouteEntryRequest &request)const;
			void getVccRouteEntryAsync(const Model::GetVccRouteEntryRequest& request, const GetVccRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVccRouteEntryOutcomeCallable getVccRouteEntryCallable(const Model::GetVccRouteEntryRequest& request) const;
			GetVpdOutcome getVpd(const Model::GetVpdRequest &request)const;
			void getVpdAsync(const Model::GetVpdRequest& request, const GetVpdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVpdOutcomeCallable getVpdCallable(const Model::GetVpdRequest& request) const;
			GetVpdGrantRuleOutcome getVpdGrantRule(const Model::GetVpdGrantRuleRequest &request)const;
			void getVpdGrantRuleAsync(const Model::GetVpdGrantRuleRequest& request, const GetVpdGrantRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVpdGrantRuleOutcomeCallable getVpdGrantRuleCallable(const Model::GetVpdGrantRuleRequest& request) const;
			GetVpdRouteEntryOutcome getVpdRouteEntry(const Model::GetVpdRouteEntryRequest &request)const;
			void getVpdRouteEntryAsync(const Model::GetVpdRouteEntryRequest& request, const GetVpdRouteEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVpdRouteEntryOutcomeCallable getVpdRouteEntryCallable(const Model::GetVpdRouteEntryRequest& request) const;
			InitializeVccOutcome initializeVcc(const Model::InitializeVccRequest &request)const;
			void initializeVccAsync(const Model::InitializeVccRequest& request, const InitializeVccAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InitializeVccOutcomeCallable initializeVccCallable(const Model::InitializeVccRequest& request) const;
			ListElasticNetworkInterfacesOutcome listElasticNetworkInterfaces(const Model::ListElasticNetworkInterfacesRequest &request)const;
			void listElasticNetworkInterfacesAsync(const Model::ListElasticNetworkInterfacesRequest& request, const ListElasticNetworkInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListElasticNetworkInterfacesOutcomeCallable listElasticNetworkInterfacesCallable(const Model::ListElasticNetworkInterfacesRequest& request) const;
			ListErAttachmentsOutcome listErAttachments(const Model::ListErAttachmentsRequest &request)const;
			void listErAttachmentsAsync(const Model::ListErAttachmentsRequest& request, const ListErAttachmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListErAttachmentsOutcomeCallable listErAttachmentsCallable(const Model::ListErAttachmentsRequest& request) const;
			ListErRouteEntriesOutcome listErRouteEntries(const Model::ListErRouteEntriesRequest &request)const;
			void listErRouteEntriesAsync(const Model::ListErRouteEntriesRequest& request, const ListErRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListErRouteEntriesOutcomeCallable listErRouteEntriesCallable(const Model::ListErRouteEntriesRequest& request) const;
			ListErRouteMapsOutcome listErRouteMaps(const Model::ListErRouteMapsRequest &request)const;
			void listErRouteMapsAsync(const Model::ListErRouteMapsRequest& request, const ListErRouteMapsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListErRouteMapsOutcomeCallable listErRouteMapsCallable(const Model::ListErRouteMapsRequest& request) const;
			ListErsOutcome listErs(const Model::ListErsRequest &request)const;
			void listErsAsync(const Model::ListErsRequest& request, const ListErsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListErsOutcomeCallable listErsCallable(const Model::ListErsRequest& request) const;
			ListInstancesByNcdOutcome listInstancesByNcd(const Model::ListInstancesByNcdRequest &request)const;
			void listInstancesByNcdAsync(const Model::ListInstancesByNcdRequest& request, const ListInstancesByNcdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstancesByNcdOutcomeCallable listInstancesByNcdCallable(const Model::ListInstancesByNcdRequest& request) const;
			ListLeniPrivateIpAddressesOutcome listLeniPrivateIpAddresses(const Model::ListLeniPrivateIpAddressesRequest &request)const;
			void listLeniPrivateIpAddressesAsync(const Model::ListLeniPrivateIpAddressesRequest& request, const ListLeniPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLeniPrivateIpAddressesOutcomeCallable listLeniPrivateIpAddressesCallable(const Model::ListLeniPrivateIpAddressesRequest& request) const;
			ListLniPrivateIpAddressOutcome listLniPrivateIpAddress(const Model::ListLniPrivateIpAddressRequest &request)const;
			void listLniPrivateIpAddressAsync(const Model::ListLniPrivateIpAddressRequest& request, const ListLniPrivateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLniPrivateIpAddressOutcomeCallable listLniPrivateIpAddressCallable(const Model::ListLniPrivateIpAddressRequest& request) const;
			ListNetworkInterfacesOutcome listNetworkInterfaces(const Model::ListNetworkInterfacesRequest &request)const;
			void listNetworkInterfacesAsync(const Model::ListNetworkInterfacesRequest& request, const ListNetworkInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNetworkInterfacesOutcomeCallable listNetworkInterfacesCallable(const Model::ListNetworkInterfacesRequest& request) const;
			ListNodeInfosForPodOutcome listNodeInfosForPod(const Model::ListNodeInfosForPodRequest &request)const;
			void listNodeInfosForPodAsync(const Model::ListNodeInfosForPodRequest& request, const ListNodeInfosForPodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodeInfosForPodOutcomeCallable listNodeInfosForPodCallable(const Model::ListNodeInfosForPodRequest& request) const;
			ListSubnetsOutcome listSubnets(const Model::ListSubnetsRequest &request)const;
			void listSubnetsAsync(const Model::ListSubnetsRequest& request, const ListSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSubnetsOutcomeCallable listSubnetsCallable(const Model::ListSubnetsRequest& request) const;
			ListVccFlowInfosOutcome listVccFlowInfos(const Model::ListVccFlowInfosRequest &request)const;
			void listVccFlowInfosAsync(const Model::ListVccFlowInfosRequest& request, const ListVccFlowInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVccFlowInfosOutcomeCallable listVccFlowInfosCallable(const Model::ListVccFlowInfosRequest& request) const;
			ListVccGrantRulesOutcome listVccGrantRules(const Model::ListVccGrantRulesRequest &request)const;
			void listVccGrantRulesAsync(const Model::ListVccGrantRulesRequest& request, const ListVccGrantRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVccGrantRulesOutcomeCallable listVccGrantRulesCallable(const Model::ListVccGrantRulesRequest& request) const;
			ListVccRouteEntriesOutcome listVccRouteEntries(const Model::ListVccRouteEntriesRequest &request)const;
			void listVccRouteEntriesAsync(const Model::ListVccRouteEntriesRequest& request, const ListVccRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVccRouteEntriesOutcomeCallable listVccRouteEntriesCallable(const Model::ListVccRouteEntriesRequest& request) const;
			ListVccsOutcome listVccs(const Model::ListVccsRequest &request)const;
			void listVccsAsync(const Model::ListVccsRequest& request, const ListVccsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVccsOutcomeCallable listVccsCallable(const Model::ListVccsRequest& request) const;
			ListVpdGrantRulesOutcome listVpdGrantRules(const Model::ListVpdGrantRulesRequest &request)const;
			void listVpdGrantRulesAsync(const Model::ListVpdGrantRulesRequest& request, const ListVpdGrantRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVpdGrantRulesOutcomeCallable listVpdGrantRulesCallable(const Model::ListVpdGrantRulesRequest& request) const;
			ListVpdRouteEntriesOutcome listVpdRouteEntries(const Model::ListVpdRouteEntriesRequest &request)const;
			void listVpdRouteEntriesAsync(const Model::ListVpdRouteEntriesRequest& request, const ListVpdRouteEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVpdRouteEntriesOutcomeCallable listVpdRouteEntriesCallable(const Model::ListVpdRouteEntriesRequest& request) const;
			ListVpdsOutcome listVpds(const Model::ListVpdsRequest &request)const;
			void listVpdsAsync(const Model::ListVpdsRequest& request, const ListVpdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVpdsOutcomeCallable listVpdsCallable(const Model::ListVpdsRequest& request) const;
			QueryInstanceNcdOutcome queryInstanceNcd(const Model::QueryInstanceNcdRequest &request)const;
			void queryInstanceNcdAsync(const Model::QueryInstanceNcdRequest& request, const QueryInstanceNcdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryInstanceNcdOutcomeCallable queryInstanceNcdCallable(const Model::QueryInstanceNcdRequest& request) const;
			UnAssignPrivateIpAddressOutcome unAssignPrivateIpAddress(const Model::UnAssignPrivateIpAddressRequest &request)const;
			void unAssignPrivateIpAddressAsync(const Model::UnAssignPrivateIpAddressRequest& request, const UnAssignPrivateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnAssignPrivateIpAddressOutcomeCallable unAssignPrivateIpAddressCallable(const Model::UnAssignPrivateIpAddressRequest& request) const;
			UnAssociateVpdCidrBlockOutcome unAssociateVpdCidrBlock(const Model::UnAssociateVpdCidrBlockRequest &request)const;
			void unAssociateVpdCidrBlockAsync(const Model::UnAssociateVpdCidrBlockRequest& request, const UnAssociateVpdCidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnAssociateVpdCidrBlockOutcomeCallable unAssociateVpdCidrBlockCallable(const Model::UnAssociateVpdCidrBlockRequest& request) const;
			UnassignLeniPrivateIpAddressOutcome unassignLeniPrivateIpAddress(const Model::UnassignLeniPrivateIpAddressRequest &request)const;
			void unassignLeniPrivateIpAddressAsync(const Model::UnassignLeniPrivateIpAddressRequest& request, const UnassignLeniPrivateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnassignLeniPrivateIpAddressOutcomeCallable unassignLeniPrivateIpAddressCallable(const Model::UnassignLeniPrivateIpAddressRequest& request) const;
			UpdateElasticNetworkInterfaceOutcome updateElasticNetworkInterface(const Model::UpdateElasticNetworkInterfaceRequest &request)const;
			void updateElasticNetworkInterfaceAsync(const Model::UpdateElasticNetworkInterfaceRequest& request, const UpdateElasticNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateElasticNetworkInterfaceOutcomeCallable updateElasticNetworkInterfaceCallable(const Model::UpdateElasticNetworkInterfaceRequest& request) const;
			UpdateErOutcome updateEr(const Model::UpdateErRequest &request)const;
			void updateErAsync(const Model::UpdateErRequest& request, const UpdateErAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateErOutcomeCallable updateErCallable(const Model::UpdateErRequest& request) const;
			UpdateErAttachmentOutcome updateErAttachment(const Model::UpdateErAttachmentRequest &request)const;
			void updateErAttachmentAsync(const Model::UpdateErAttachmentRequest& request, const UpdateErAttachmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateErAttachmentOutcomeCallable updateErAttachmentCallable(const Model::UpdateErAttachmentRequest& request) const;
			UpdateErRouteMapOutcome updateErRouteMap(const Model::UpdateErRouteMapRequest &request)const;
			void updateErRouteMapAsync(const Model::UpdateErRouteMapRequest& request, const UpdateErRouteMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateErRouteMapOutcomeCallable updateErRouteMapCallable(const Model::UpdateErRouteMapRequest& request) const;
			UpdateLeniPrivateIpAddressOutcome updateLeniPrivateIpAddress(const Model::UpdateLeniPrivateIpAddressRequest &request)const;
			void updateLeniPrivateIpAddressAsync(const Model::UpdateLeniPrivateIpAddressRequest& request, const UpdateLeniPrivateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLeniPrivateIpAddressOutcomeCallable updateLeniPrivateIpAddressCallable(const Model::UpdateLeniPrivateIpAddressRequest& request) const;
			UpdateSubnetOutcome updateSubnet(const Model::UpdateSubnetRequest &request)const;
			void updateSubnetAsync(const Model::UpdateSubnetRequest& request, const UpdateSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSubnetOutcomeCallable updateSubnetCallable(const Model::UpdateSubnetRequest& request) const;
			UpdateVccOutcome updateVcc(const Model::UpdateVccRequest &request)const;
			void updateVccAsync(const Model::UpdateVccRequest& request, const UpdateVccAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateVccOutcomeCallable updateVccCallable(const Model::UpdateVccRequest& request) const;
			UpdateVpdOutcome updateVpd(const Model::UpdateVpdRequest &request)const;
			void updateVpdAsync(const Model::UpdateVpdRequest& request, const UpdateVpdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateVpdOutcomeCallable updateVpdCallable(const Model::UpdateVpdRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_EFLO_EFLOCLIENT_H_
