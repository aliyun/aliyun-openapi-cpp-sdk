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

#ifndef ALIBABACLOUD_GA_GACLIENT_H_
#define ALIBABACLOUD_GA_GACLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "GaExport.h"
#include "model/AddEntriesToAclRequest.h"
#include "model/AddEntriesToAclResult.h"
#include "model/AssociateAclsWithListenerRequest.h"
#include "model/AssociateAclsWithListenerResult.h"
#include "model/AttachDdosToAcceleratorRequest.h"
#include "model/AttachDdosToAcceleratorResult.h"
#include "model/AttachLogStoreToEndpointGroupRequest.h"
#include "model/AttachLogStoreToEndpointGroupResult.h"
#include "model/BandwidthPackageAddAcceleratorRequest.h"
#include "model/BandwidthPackageAddAcceleratorResult.h"
#include "model/BandwidthPackageRemoveAcceleratorRequest.h"
#include "model/BandwidthPackageRemoveAcceleratorResult.h"
#include "model/ConfigEndpointProbeRequest.h"
#include "model/ConfigEndpointProbeResult.h"
#include "model/CreateAcceleratorRequest.h"
#include "model/CreateAcceleratorResult.h"
#include "model/CreateAclRequest.h"
#include "model/CreateAclResult.h"
#include "model/CreateBandwidthPackageRequest.h"
#include "model/CreateBandwidthPackageResult.h"
#include "model/CreateEndpointGroupRequest.h"
#include "model/CreateEndpointGroupResult.h"
#include "model/CreateForwardingRulesRequest.h"
#include "model/CreateForwardingRulesResult.h"
#include "model/CreateIpSetsRequest.h"
#include "model/CreateIpSetsResult.h"
#include "model/CreateListenerRequest.h"
#include "model/CreateListenerResult.h"
#include "model/DeleteAcceleratorRequest.h"
#include "model/DeleteAcceleratorResult.h"
#include "model/DeleteAclRequest.h"
#include "model/DeleteAclResult.h"
#include "model/DeleteBandwidthPackageRequest.h"
#include "model/DeleteBandwidthPackageResult.h"
#include "model/DeleteEndpointGroupRequest.h"
#include "model/DeleteEndpointGroupResult.h"
#include "model/DeleteForwardingRulesRequest.h"
#include "model/DeleteForwardingRulesResult.h"
#include "model/DeleteIpSetRequest.h"
#include "model/DeleteIpSetResult.h"
#include "model/DeleteIpSetsRequest.h"
#include "model/DeleteIpSetsResult.h"
#include "model/DeleteListenerRequest.h"
#include "model/DeleteListenerResult.h"
#include "model/DescribeAcceleratorRequest.h"
#include "model/DescribeAcceleratorResult.h"
#include "model/DescribeBandwidthPackageRequest.h"
#include "model/DescribeBandwidthPackageResult.h"
#include "model/DescribeEndpointGroupRequest.h"
#include "model/DescribeEndpointGroupResult.h"
#include "model/DescribeIpSetRequest.h"
#include "model/DescribeIpSetResult.h"
#include "model/DescribeListenerRequest.h"
#include "model/DescribeListenerResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DetachDdosFromAcceleratorRequest.h"
#include "model/DetachDdosFromAcceleratorResult.h"
#include "model/DetachLogStoreFromEndpointGroupRequest.h"
#include "model/DetachLogStoreFromEndpointGroupResult.h"
#include "model/DissociateAclsFromListenerRequest.h"
#include "model/DissociateAclsFromListenerResult.h"
#include "model/GetAclRequest.h"
#include "model/GetAclResult.h"
#include "model/ListAccelerateAreasRequest.h"
#include "model/ListAccelerateAreasResult.h"
#include "model/ListAcceleratorsRequest.h"
#include "model/ListAcceleratorsResult.h"
#include "model/ListAclsRequest.h"
#include "model/ListAclsResult.h"
#include "model/ListAvailableAccelerateAreasRequest.h"
#include "model/ListAvailableAccelerateAreasResult.h"
#include "model/ListAvailableBusiRegionsRequest.h"
#include "model/ListAvailableBusiRegionsResult.h"
#include "model/ListBandwidthPackagesRequest.h"
#include "model/ListBandwidthPackagesResult.h"
#include "model/ListBandwidthackagesRequest.h"
#include "model/ListBandwidthackagesResult.h"
#include "model/ListBusiRegionsRequest.h"
#include "model/ListBusiRegionsResult.h"
#include "model/ListEndpointGroupsRequest.h"
#include "model/ListEndpointGroupsResult.h"
#include "model/ListForwardingRulesRequest.h"
#include "model/ListForwardingRulesResult.h"
#include "model/ListIpSetsRequest.h"
#include "model/ListIpSetsResult.h"
#include "model/ListListenersRequest.h"
#include "model/ListListenersResult.h"
#include "model/RemoveEntriesFromAclRequest.h"
#include "model/RemoveEntriesFromAclResult.h"
#include "model/ReplaceBandwidthPackageRequest.h"
#include "model/ReplaceBandwidthPackageResult.h"
#include "model/UpdateAcceleratorRequest.h"
#include "model/UpdateAcceleratorResult.h"
#include "model/UpdateAclAttributeRequest.h"
#include "model/UpdateAclAttributeResult.h"
#include "model/UpdateBandwidthPackageRequest.h"
#include "model/UpdateBandwidthPackageResult.h"
#include "model/UpdateEndpointGroupRequest.h"
#include "model/UpdateEndpointGroupResult.h"
#include "model/UpdateEndpointGroupAttributeRequest.h"
#include "model/UpdateEndpointGroupAttributeResult.h"
#include "model/UpdateForwardingRulesRequest.h"
#include "model/UpdateForwardingRulesResult.h"
#include "model/UpdateIpSetRequest.h"
#include "model/UpdateIpSetResult.h"
#include "model/UpdateIpSetsRequest.h"
#include "model/UpdateIpSetsResult.h"
#include "model/UpdateListenerRequest.h"
#include "model/UpdateListenerResult.h"


namespace AlibabaCloud
{
	namespace Ga
	{
		class ALIBABACLOUD_GA_EXPORT GaClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddEntriesToAclResult> AddEntriesToAclOutcome;
			typedef std::future<AddEntriesToAclOutcome> AddEntriesToAclOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::AddEntriesToAclRequest&, const AddEntriesToAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddEntriesToAclAsyncHandler;
			typedef Outcome<Error, Model::AssociateAclsWithListenerResult> AssociateAclsWithListenerOutcome;
			typedef std::future<AssociateAclsWithListenerOutcome> AssociateAclsWithListenerOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::AssociateAclsWithListenerRequest&, const AssociateAclsWithListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateAclsWithListenerAsyncHandler;
			typedef Outcome<Error, Model::AttachDdosToAcceleratorResult> AttachDdosToAcceleratorOutcome;
			typedef std::future<AttachDdosToAcceleratorOutcome> AttachDdosToAcceleratorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::AttachDdosToAcceleratorRequest&, const AttachDdosToAcceleratorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachDdosToAcceleratorAsyncHandler;
			typedef Outcome<Error, Model::AttachLogStoreToEndpointGroupResult> AttachLogStoreToEndpointGroupOutcome;
			typedef std::future<AttachLogStoreToEndpointGroupOutcome> AttachLogStoreToEndpointGroupOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::AttachLogStoreToEndpointGroupRequest&, const AttachLogStoreToEndpointGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachLogStoreToEndpointGroupAsyncHandler;
			typedef Outcome<Error, Model::BandwidthPackageAddAcceleratorResult> BandwidthPackageAddAcceleratorOutcome;
			typedef std::future<BandwidthPackageAddAcceleratorOutcome> BandwidthPackageAddAcceleratorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::BandwidthPackageAddAcceleratorRequest&, const BandwidthPackageAddAcceleratorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BandwidthPackageAddAcceleratorAsyncHandler;
			typedef Outcome<Error, Model::BandwidthPackageRemoveAcceleratorResult> BandwidthPackageRemoveAcceleratorOutcome;
			typedef std::future<BandwidthPackageRemoveAcceleratorOutcome> BandwidthPackageRemoveAcceleratorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::BandwidthPackageRemoveAcceleratorRequest&, const BandwidthPackageRemoveAcceleratorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BandwidthPackageRemoveAcceleratorAsyncHandler;
			typedef Outcome<Error, Model::ConfigEndpointProbeResult> ConfigEndpointProbeOutcome;
			typedef std::future<ConfigEndpointProbeOutcome> ConfigEndpointProbeOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ConfigEndpointProbeRequest&, const ConfigEndpointProbeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigEndpointProbeAsyncHandler;
			typedef Outcome<Error, Model::CreateAcceleratorResult> CreateAcceleratorOutcome;
			typedef std::future<CreateAcceleratorOutcome> CreateAcceleratorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateAcceleratorRequest&, const CreateAcceleratorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAcceleratorAsyncHandler;
			typedef Outcome<Error, Model::CreateAclResult> CreateAclOutcome;
			typedef std::future<CreateAclOutcome> CreateAclOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateAclRequest&, const CreateAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAclAsyncHandler;
			typedef Outcome<Error, Model::CreateBandwidthPackageResult> CreateBandwidthPackageOutcome;
			typedef std::future<CreateBandwidthPackageOutcome> CreateBandwidthPackageOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateBandwidthPackageRequest&, const CreateBandwidthPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBandwidthPackageAsyncHandler;
			typedef Outcome<Error, Model::CreateEndpointGroupResult> CreateEndpointGroupOutcome;
			typedef std::future<CreateEndpointGroupOutcome> CreateEndpointGroupOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateEndpointGroupRequest&, const CreateEndpointGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEndpointGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateForwardingRulesResult> CreateForwardingRulesOutcome;
			typedef std::future<CreateForwardingRulesOutcome> CreateForwardingRulesOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateForwardingRulesRequest&, const CreateForwardingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateForwardingRulesAsyncHandler;
			typedef Outcome<Error, Model::CreateIpSetsResult> CreateIpSetsOutcome;
			typedef std::future<CreateIpSetsOutcome> CreateIpSetsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateIpSetsRequest&, const CreateIpSetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIpSetsAsyncHandler;
			typedef Outcome<Error, Model::CreateListenerResult> CreateListenerOutcome;
			typedef std::future<CreateListenerOutcome> CreateListenerOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::CreateListenerRequest&, const CreateListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateListenerAsyncHandler;
			typedef Outcome<Error, Model::DeleteAcceleratorResult> DeleteAcceleratorOutcome;
			typedef std::future<DeleteAcceleratorOutcome> DeleteAcceleratorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteAcceleratorRequest&, const DeleteAcceleratorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAcceleratorAsyncHandler;
			typedef Outcome<Error, Model::DeleteAclResult> DeleteAclOutcome;
			typedef std::future<DeleteAclOutcome> DeleteAclOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteAclRequest&, const DeleteAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAclAsyncHandler;
			typedef Outcome<Error, Model::DeleteBandwidthPackageResult> DeleteBandwidthPackageOutcome;
			typedef std::future<DeleteBandwidthPackageOutcome> DeleteBandwidthPackageOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteBandwidthPackageRequest&, const DeleteBandwidthPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBandwidthPackageAsyncHandler;
			typedef Outcome<Error, Model::DeleteEndpointGroupResult> DeleteEndpointGroupOutcome;
			typedef std::future<DeleteEndpointGroupOutcome> DeleteEndpointGroupOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteEndpointGroupRequest&, const DeleteEndpointGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEndpointGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteForwardingRulesResult> DeleteForwardingRulesOutcome;
			typedef std::future<DeleteForwardingRulesOutcome> DeleteForwardingRulesOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteForwardingRulesRequest&, const DeleteForwardingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteForwardingRulesAsyncHandler;
			typedef Outcome<Error, Model::DeleteIpSetResult> DeleteIpSetOutcome;
			typedef std::future<DeleteIpSetOutcome> DeleteIpSetOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteIpSetRequest&, const DeleteIpSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIpSetAsyncHandler;
			typedef Outcome<Error, Model::DeleteIpSetsResult> DeleteIpSetsOutcome;
			typedef std::future<DeleteIpSetsOutcome> DeleteIpSetsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteIpSetsRequest&, const DeleteIpSetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIpSetsAsyncHandler;
			typedef Outcome<Error, Model::DeleteListenerResult> DeleteListenerOutcome;
			typedef std::future<DeleteListenerOutcome> DeleteListenerOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DeleteListenerRequest&, const DeleteListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteListenerAsyncHandler;
			typedef Outcome<Error, Model::DescribeAcceleratorResult> DescribeAcceleratorOutcome;
			typedef std::future<DescribeAcceleratorOutcome> DescribeAcceleratorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DescribeAcceleratorRequest&, const DescribeAcceleratorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAcceleratorAsyncHandler;
			typedef Outcome<Error, Model::DescribeBandwidthPackageResult> DescribeBandwidthPackageOutcome;
			typedef std::future<DescribeBandwidthPackageOutcome> DescribeBandwidthPackageOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DescribeBandwidthPackageRequest&, const DescribeBandwidthPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBandwidthPackageAsyncHandler;
			typedef Outcome<Error, Model::DescribeEndpointGroupResult> DescribeEndpointGroupOutcome;
			typedef std::future<DescribeEndpointGroupOutcome> DescribeEndpointGroupOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DescribeEndpointGroupRequest&, const DescribeEndpointGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEndpointGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeIpSetResult> DescribeIpSetOutcome;
			typedef std::future<DescribeIpSetOutcome> DescribeIpSetOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DescribeIpSetRequest&, const DescribeIpSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpSetAsyncHandler;
			typedef Outcome<Error, Model::DescribeListenerResult> DescribeListenerOutcome;
			typedef std::future<DescribeListenerOutcome> DescribeListenerOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DescribeListenerRequest&, const DescribeListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenerAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DetachDdosFromAcceleratorResult> DetachDdosFromAcceleratorOutcome;
			typedef std::future<DetachDdosFromAcceleratorOutcome> DetachDdosFromAcceleratorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DetachDdosFromAcceleratorRequest&, const DetachDdosFromAcceleratorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachDdosFromAcceleratorAsyncHandler;
			typedef Outcome<Error, Model::DetachLogStoreFromEndpointGroupResult> DetachLogStoreFromEndpointGroupOutcome;
			typedef std::future<DetachLogStoreFromEndpointGroupOutcome> DetachLogStoreFromEndpointGroupOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DetachLogStoreFromEndpointGroupRequest&, const DetachLogStoreFromEndpointGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachLogStoreFromEndpointGroupAsyncHandler;
			typedef Outcome<Error, Model::DissociateAclsFromListenerResult> DissociateAclsFromListenerOutcome;
			typedef std::future<DissociateAclsFromListenerOutcome> DissociateAclsFromListenerOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::DissociateAclsFromListenerRequest&, const DissociateAclsFromListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DissociateAclsFromListenerAsyncHandler;
			typedef Outcome<Error, Model::GetAclResult> GetAclOutcome;
			typedef std::future<GetAclOutcome> GetAclOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::GetAclRequest&, const GetAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAclAsyncHandler;
			typedef Outcome<Error, Model::ListAccelerateAreasResult> ListAccelerateAreasOutcome;
			typedef std::future<ListAccelerateAreasOutcome> ListAccelerateAreasOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListAccelerateAreasRequest&, const ListAccelerateAreasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAccelerateAreasAsyncHandler;
			typedef Outcome<Error, Model::ListAcceleratorsResult> ListAcceleratorsOutcome;
			typedef std::future<ListAcceleratorsOutcome> ListAcceleratorsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListAcceleratorsRequest&, const ListAcceleratorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAcceleratorsAsyncHandler;
			typedef Outcome<Error, Model::ListAclsResult> ListAclsOutcome;
			typedef std::future<ListAclsOutcome> ListAclsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListAclsRequest&, const ListAclsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAclsAsyncHandler;
			typedef Outcome<Error, Model::ListAvailableAccelerateAreasResult> ListAvailableAccelerateAreasOutcome;
			typedef std::future<ListAvailableAccelerateAreasOutcome> ListAvailableAccelerateAreasOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListAvailableAccelerateAreasRequest&, const ListAvailableAccelerateAreasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAvailableAccelerateAreasAsyncHandler;
			typedef Outcome<Error, Model::ListAvailableBusiRegionsResult> ListAvailableBusiRegionsOutcome;
			typedef std::future<ListAvailableBusiRegionsOutcome> ListAvailableBusiRegionsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListAvailableBusiRegionsRequest&, const ListAvailableBusiRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAvailableBusiRegionsAsyncHandler;
			typedef Outcome<Error, Model::ListBandwidthPackagesResult> ListBandwidthPackagesOutcome;
			typedef std::future<ListBandwidthPackagesOutcome> ListBandwidthPackagesOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListBandwidthPackagesRequest&, const ListBandwidthPackagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBandwidthPackagesAsyncHandler;
			typedef Outcome<Error, Model::ListBandwidthackagesResult> ListBandwidthackagesOutcome;
			typedef std::future<ListBandwidthackagesOutcome> ListBandwidthackagesOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListBandwidthackagesRequest&, const ListBandwidthackagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBandwidthackagesAsyncHandler;
			typedef Outcome<Error, Model::ListBusiRegionsResult> ListBusiRegionsOutcome;
			typedef std::future<ListBusiRegionsOutcome> ListBusiRegionsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListBusiRegionsRequest&, const ListBusiRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBusiRegionsAsyncHandler;
			typedef Outcome<Error, Model::ListEndpointGroupsResult> ListEndpointGroupsOutcome;
			typedef std::future<ListEndpointGroupsOutcome> ListEndpointGroupsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListEndpointGroupsRequest&, const ListEndpointGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEndpointGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListForwardingRulesResult> ListForwardingRulesOutcome;
			typedef std::future<ListForwardingRulesOutcome> ListForwardingRulesOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListForwardingRulesRequest&, const ListForwardingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListForwardingRulesAsyncHandler;
			typedef Outcome<Error, Model::ListIpSetsResult> ListIpSetsOutcome;
			typedef std::future<ListIpSetsOutcome> ListIpSetsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListIpSetsRequest&, const ListIpSetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIpSetsAsyncHandler;
			typedef Outcome<Error, Model::ListListenersResult> ListListenersOutcome;
			typedef std::future<ListListenersOutcome> ListListenersOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ListListenersRequest&, const ListListenersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListListenersAsyncHandler;
			typedef Outcome<Error, Model::RemoveEntriesFromAclResult> RemoveEntriesFromAclOutcome;
			typedef std::future<RemoveEntriesFromAclOutcome> RemoveEntriesFromAclOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::RemoveEntriesFromAclRequest&, const RemoveEntriesFromAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveEntriesFromAclAsyncHandler;
			typedef Outcome<Error, Model::ReplaceBandwidthPackageResult> ReplaceBandwidthPackageOutcome;
			typedef std::future<ReplaceBandwidthPackageOutcome> ReplaceBandwidthPackageOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::ReplaceBandwidthPackageRequest&, const ReplaceBandwidthPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceBandwidthPackageAsyncHandler;
			typedef Outcome<Error, Model::UpdateAcceleratorResult> UpdateAcceleratorOutcome;
			typedef std::future<UpdateAcceleratorOutcome> UpdateAcceleratorOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateAcceleratorRequest&, const UpdateAcceleratorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAcceleratorAsyncHandler;
			typedef Outcome<Error, Model::UpdateAclAttributeResult> UpdateAclAttributeOutcome;
			typedef std::future<UpdateAclAttributeOutcome> UpdateAclAttributeOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateAclAttributeRequest&, const UpdateAclAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAclAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateBandwidthPackageResult> UpdateBandwidthPackageOutcome;
			typedef std::future<UpdateBandwidthPackageOutcome> UpdateBandwidthPackageOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateBandwidthPackageRequest&, const UpdateBandwidthPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBandwidthPackageAsyncHandler;
			typedef Outcome<Error, Model::UpdateEndpointGroupResult> UpdateEndpointGroupOutcome;
			typedef std::future<UpdateEndpointGroupOutcome> UpdateEndpointGroupOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateEndpointGroupRequest&, const UpdateEndpointGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEndpointGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateEndpointGroupAttributeResult> UpdateEndpointGroupAttributeOutcome;
			typedef std::future<UpdateEndpointGroupAttributeOutcome> UpdateEndpointGroupAttributeOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateEndpointGroupAttributeRequest&, const UpdateEndpointGroupAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEndpointGroupAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateForwardingRulesResult> UpdateForwardingRulesOutcome;
			typedef std::future<UpdateForwardingRulesOutcome> UpdateForwardingRulesOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateForwardingRulesRequest&, const UpdateForwardingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateForwardingRulesAsyncHandler;
			typedef Outcome<Error, Model::UpdateIpSetResult> UpdateIpSetOutcome;
			typedef std::future<UpdateIpSetOutcome> UpdateIpSetOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateIpSetRequest&, const UpdateIpSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateIpSetAsyncHandler;
			typedef Outcome<Error, Model::UpdateIpSetsResult> UpdateIpSetsOutcome;
			typedef std::future<UpdateIpSetsOutcome> UpdateIpSetsOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateIpSetsRequest&, const UpdateIpSetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateIpSetsAsyncHandler;
			typedef Outcome<Error, Model::UpdateListenerResult> UpdateListenerOutcome;
			typedef std::future<UpdateListenerOutcome> UpdateListenerOutcomeCallable;
			typedef std::function<void(const GaClient*, const Model::UpdateListenerRequest&, const UpdateListenerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateListenerAsyncHandler;

			GaClient(const Credentials &credentials, const ClientConfiguration &configuration);
			GaClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			GaClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~GaClient();
			AddEntriesToAclOutcome addEntriesToAcl(const Model::AddEntriesToAclRequest &request)const;
			void addEntriesToAclAsync(const Model::AddEntriesToAclRequest& request, const AddEntriesToAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddEntriesToAclOutcomeCallable addEntriesToAclCallable(const Model::AddEntriesToAclRequest& request) const;
			AssociateAclsWithListenerOutcome associateAclsWithListener(const Model::AssociateAclsWithListenerRequest &request)const;
			void associateAclsWithListenerAsync(const Model::AssociateAclsWithListenerRequest& request, const AssociateAclsWithListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateAclsWithListenerOutcomeCallable associateAclsWithListenerCallable(const Model::AssociateAclsWithListenerRequest& request) const;
			AttachDdosToAcceleratorOutcome attachDdosToAccelerator(const Model::AttachDdosToAcceleratorRequest &request)const;
			void attachDdosToAcceleratorAsync(const Model::AttachDdosToAcceleratorRequest& request, const AttachDdosToAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachDdosToAcceleratorOutcomeCallable attachDdosToAcceleratorCallable(const Model::AttachDdosToAcceleratorRequest& request) const;
			AttachLogStoreToEndpointGroupOutcome attachLogStoreToEndpointGroup(const Model::AttachLogStoreToEndpointGroupRequest &request)const;
			void attachLogStoreToEndpointGroupAsync(const Model::AttachLogStoreToEndpointGroupRequest& request, const AttachLogStoreToEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachLogStoreToEndpointGroupOutcomeCallable attachLogStoreToEndpointGroupCallable(const Model::AttachLogStoreToEndpointGroupRequest& request) const;
			BandwidthPackageAddAcceleratorOutcome bandwidthPackageAddAccelerator(const Model::BandwidthPackageAddAcceleratorRequest &request)const;
			void bandwidthPackageAddAcceleratorAsync(const Model::BandwidthPackageAddAcceleratorRequest& request, const BandwidthPackageAddAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BandwidthPackageAddAcceleratorOutcomeCallable bandwidthPackageAddAcceleratorCallable(const Model::BandwidthPackageAddAcceleratorRequest& request) const;
			BandwidthPackageRemoveAcceleratorOutcome bandwidthPackageRemoveAccelerator(const Model::BandwidthPackageRemoveAcceleratorRequest &request)const;
			void bandwidthPackageRemoveAcceleratorAsync(const Model::BandwidthPackageRemoveAcceleratorRequest& request, const BandwidthPackageRemoveAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BandwidthPackageRemoveAcceleratorOutcomeCallable bandwidthPackageRemoveAcceleratorCallable(const Model::BandwidthPackageRemoveAcceleratorRequest& request) const;
			ConfigEndpointProbeOutcome configEndpointProbe(const Model::ConfigEndpointProbeRequest &request)const;
			void configEndpointProbeAsync(const Model::ConfigEndpointProbeRequest& request, const ConfigEndpointProbeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigEndpointProbeOutcomeCallable configEndpointProbeCallable(const Model::ConfigEndpointProbeRequest& request) const;
			CreateAcceleratorOutcome createAccelerator(const Model::CreateAcceleratorRequest &request)const;
			void createAcceleratorAsync(const Model::CreateAcceleratorRequest& request, const CreateAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAcceleratorOutcomeCallable createAcceleratorCallable(const Model::CreateAcceleratorRequest& request) const;
			CreateAclOutcome createAcl(const Model::CreateAclRequest &request)const;
			void createAclAsync(const Model::CreateAclRequest& request, const CreateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAclOutcomeCallable createAclCallable(const Model::CreateAclRequest& request) const;
			CreateBandwidthPackageOutcome createBandwidthPackage(const Model::CreateBandwidthPackageRequest &request)const;
			void createBandwidthPackageAsync(const Model::CreateBandwidthPackageRequest& request, const CreateBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBandwidthPackageOutcomeCallable createBandwidthPackageCallable(const Model::CreateBandwidthPackageRequest& request) const;
			CreateEndpointGroupOutcome createEndpointGroup(const Model::CreateEndpointGroupRequest &request)const;
			void createEndpointGroupAsync(const Model::CreateEndpointGroupRequest& request, const CreateEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEndpointGroupOutcomeCallable createEndpointGroupCallable(const Model::CreateEndpointGroupRequest& request) const;
			CreateForwardingRulesOutcome createForwardingRules(const Model::CreateForwardingRulesRequest &request)const;
			void createForwardingRulesAsync(const Model::CreateForwardingRulesRequest& request, const CreateForwardingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateForwardingRulesOutcomeCallable createForwardingRulesCallable(const Model::CreateForwardingRulesRequest& request) const;
			CreateIpSetsOutcome createIpSets(const Model::CreateIpSetsRequest &request)const;
			void createIpSetsAsync(const Model::CreateIpSetsRequest& request, const CreateIpSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIpSetsOutcomeCallable createIpSetsCallable(const Model::CreateIpSetsRequest& request) const;
			CreateListenerOutcome createListener(const Model::CreateListenerRequest &request)const;
			void createListenerAsync(const Model::CreateListenerRequest& request, const CreateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateListenerOutcomeCallable createListenerCallable(const Model::CreateListenerRequest& request) const;
			DeleteAcceleratorOutcome deleteAccelerator(const Model::DeleteAcceleratorRequest &request)const;
			void deleteAcceleratorAsync(const Model::DeleteAcceleratorRequest& request, const DeleteAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAcceleratorOutcomeCallable deleteAcceleratorCallable(const Model::DeleteAcceleratorRequest& request) const;
			DeleteAclOutcome deleteAcl(const Model::DeleteAclRequest &request)const;
			void deleteAclAsync(const Model::DeleteAclRequest& request, const DeleteAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAclOutcomeCallable deleteAclCallable(const Model::DeleteAclRequest& request) const;
			DeleteBandwidthPackageOutcome deleteBandwidthPackage(const Model::DeleteBandwidthPackageRequest &request)const;
			void deleteBandwidthPackageAsync(const Model::DeleteBandwidthPackageRequest& request, const DeleteBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBandwidthPackageOutcomeCallable deleteBandwidthPackageCallable(const Model::DeleteBandwidthPackageRequest& request) const;
			DeleteEndpointGroupOutcome deleteEndpointGroup(const Model::DeleteEndpointGroupRequest &request)const;
			void deleteEndpointGroupAsync(const Model::DeleteEndpointGroupRequest& request, const DeleteEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEndpointGroupOutcomeCallable deleteEndpointGroupCallable(const Model::DeleteEndpointGroupRequest& request) const;
			DeleteForwardingRulesOutcome deleteForwardingRules(const Model::DeleteForwardingRulesRequest &request)const;
			void deleteForwardingRulesAsync(const Model::DeleteForwardingRulesRequest& request, const DeleteForwardingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteForwardingRulesOutcomeCallable deleteForwardingRulesCallable(const Model::DeleteForwardingRulesRequest& request) const;
			DeleteIpSetOutcome deleteIpSet(const Model::DeleteIpSetRequest &request)const;
			void deleteIpSetAsync(const Model::DeleteIpSetRequest& request, const DeleteIpSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIpSetOutcomeCallable deleteIpSetCallable(const Model::DeleteIpSetRequest& request) const;
			DeleteIpSetsOutcome deleteIpSets(const Model::DeleteIpSetsRequest &request)const;
			void deleteIpSetsAsync(const Model::DeleteIpSetsRequest& request, const DeleteIpSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIpSetsOutcomeCallable deleteIpSetsCallable(const Model::DeleteIpSetsRequest& request) const;
			DeleteListenerOutcome deleteListener(const Model::DeleteListenerRequest &request)const;
			void deleteListenerAsync(const Model::DeleteListenerRequest& request, const DeleteListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteListenerOutcomeCallable deleteListenerCallable(const Model::DeleteListenerRequest& request) const;
			DescribeAcceleratorOutcome describeAccelerator(const Model::DescribeAcceleratorRequest &request)const;
			void describeAcceleratorAsync(const Model::DescribeAcceleratorRequest& request, const DescribeAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAcceleratorOutcomeCallable describeAcceleratorCallable(const Model::DescribeAcceleratorRequest& request) const;
			DescribeBandwidthPackageOutcome describeBandwidthPackage(const Model::DescribeBandwidthPackageRequest &request)const;
			void describeBandwidthPackageAsync(const Model::DescribeBandwidthPackageRequest& request, const DescribeBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBandwidthPackageOutcomeCallable describeBandwidthPackageCallable(const Model::DescribeBandwidthPackageRequest& request) const;
			DescribeEndpointGroupOutcome describeEndpointGroup(const Model::DescribeEndpointGroupRequest &request)const;
			void describeEndpointGroupAsync(const Model::DescribeEndpointGroupRequest& request, const DescribeEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEndpointGroupOutcomeCallable describeEndpointGroupCallable(const Model::DescribeEndpointGroupRequest& request) const;
			DescribeIpSetOutcome describeIpSet(const Model::DescribeIpSetRequest &request)const;
			void describeIpSetAsync(const Model::DescribeIpSetRequest& request, const DescribeIpSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIpSetOutcomeCallable describeIpSetCallable(const Model::DescribeIpSetRequest& request) const;
			DescribeListenerOutcome describeListener(const Model::DescribeListenerRequest &request)const;
			void describeListenerAsync(const Model::DescribeListenerRequest& request, const DescribeListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeListenerOutcomeCallable describeListenerCallable(const Model::DescribeListenerRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DetachDdosFromAcceleratorOutcome detachDdosFromAccelerator(const Model::DetachDdosFromAcceleratorRequest &request)const;
			void detachDdosFromAcceleratorAsync(const Model::DetachDdosFromAcceleratorRequest& request, const DetachDdosFromAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachDdosFromAcceleratorOutcomeCallable detachDdosFromAcceleratorCallable(const Model::DetachDdosFromAcceleratorRequest& request) const;
			DetachLogStoreFromEndpointGroupOutcome detachLogStoreFromEndpointGroup(const Model::DetachLogStoreFromEndpointGroupRequest &request)const;
			void detachLogStoreFromEndpointGroupAsync(const Model::DetachLogStoreFromEndpointGroupRequest& request, const DetachLogStoreFromEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachLogStoreFromEndpointGroupOutcomeCallable detachLogStoreFromEndpointGroupCallable(const Model::DetachLogStoreFromEndpointGroupRequest& request) const;
			DissociateAclsFromListenerOutcome dissociateAclsFromListener(const Model::DissociateAclsFromListenerRequest &request)const;
			void dissociateAclsFromListenerAsync(const Model::DissociateAclsFromListenerRequest& request, const DissociateAclsFromListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DissociateAclsFromListenerOutcomeCallable dissociateAclsFromListenerCallable(const Model::DissociateAclsFromListenerRequest& request) const;
			GetAclOutcome getAcl(const Model::GetAclRequest &request)const;
			void getAclAsync(const Model::GetAclRequest& request, const GetAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAclOutcomeCallable getAclCallable(const Model::GetAclRequest& request) const;
			ListAccelerateAreasOutcome listAccelerateAreas(const Model::ListAccelerateAreasRequest &request)const;
			void listAccelerateAreasAsync(const Model::ListAccelerateAreasRequest& request, const ListAccelerateAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAccelerateAreasOutcomeCallable listAccelerateAreasCallable(const Model::ListAccelerateAreasRequest& request) const;
			ListAcceleratorsOutcome listAccelerators(const Model::ListAcceleratorsRequest &request)const;
			void listAcceleratorsAsync(const Model::ListAcceleratorsRequest& request, const ListAcceleratorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAcceleratorsOutcomeCallable listAcceleratorsCallable(const Model::ListAcceleratorsRequest& request) const;
			ListAclsOutcome listAcls(const Model::ListAclsRequest &request)const;
			void listAclsAsync(const Model::ListAclsRequest& request, const ListAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAclsOutcomeCallable listAclsCallable(const Model::ListAclsRequest& request) const;
			ListAvailableAccelerateAreasOutcome listAvailableAccelerateAreas(const Model::ListAvailableAccelerateAreasRequest &request)const;
			void listAvailableAccelerateAreasAsync(const Model::ListAvailableAccelerateAreasRequest& request, const ListAvailableAccelerateAreasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAvailableAccelerateAreasOutcomeCallable listAvailableAccelerateAreasCallable(const Model::ListAvailableAccelerateAreasRequest& request) const;
			ListAvailableBusiRegionsOutcome listAvailableBusiRegions(const Model::ListAvailableBusiRegionsRequest &request)const;
			void listAvailableBusiRegionsAsync(const Model::ListAvailableBusiRegionsRequest& request, const ListAvailableBusiRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAvailableBusiRegionsOutcomeCallable listAvailableBusiRegionsCallable(const Model::ListAvailableBusiRegionsRequest& request) const;
			ListBandwidthPackagesOutcome listBandwidthPackages(const Model::ListBandwidthPackagesRequest &request)const;
			void listBandwidthPackagesAsync(const Model::ListBandwidthPackagesRequest& request, const ListBandwidthPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBandwidthPackagesOutcomeCallable listBandwidthPackagesCallable(const Model::ListBandwidthPackagesRequest& request) const;
			ListBandwidthackagesOutcome listBandwidthackages(const Model::ListBandwidthackagesRequest &request)const;
			void listBandwidthackagesAsync(const Model::ListBandwidthackagesRequest& request, const ListBandwidthackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBandwidthackagesOutcomeCallable listBandwidthackagesCallable(const Model::ListBandwidthackagesRequest& request) const;
			ListBusiRegionsOutcome listBusiRegions(const Model::ListBusiRegionsRequest &request)const;
			void listBusiRegionsAsync(const Model::ListBusiRegionsRequest& request, const ListBusiRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBusiRegionsOutcomeCallable listBusiRegionsCallable(const Model::ListBusiRegionsRequest& request) const;
			ListEndpointGroupsOutcome listEndpointGroups(const Model::ListEndpointGroupsRequest &request)const;
			void listEndpointGroupsAsync(const Model::ListEndpointGroupsRequest& request, const ListEndpointGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEndpointGroupsOutcomeCallable listEndpointGroupsCallable(const Model::ListEndpointGroupsRequest& request) const;
			ListForwardingRulesOutcome listForwardingRules(const Model::ListForwardingRulesRequest &request)const;
			void listForwardingRulesAsync(const Model::ListForwardingRulesRequest& request, const ListForwardingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListForwardingRulesOutcomeCallable listForwardingRulesCallable(const Model::ListForwardingRulesRequest& request) const;
			ListIpSetsOutcome listIpSets(const Model::ListIpSetsRequest &request)const;
			void listIpSetsAsync(const Model::ListIpSetsRequest& request, const ListIpSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIpSetsOutcomeCallable listIpSetsCallable(const Model::ListIpSetsRequest& request) const;
			ListListenersOutcome listListeners(const Model::ListListenersRequest &request)const;
			void listListenersAsync(const Model::ListListenersRequest& request, const ListListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListListenersOutcomeCallable listListenersCallable(const Model::ListListenersRequest& request) const;
			RemoveEntriesFromAclOutcome removeEntriesFromAcl(const Model::RemoveEntriesFromAclRequest &request)const;
			void removeEntriesFromAclAsync(const Model::RemoveEntriesFromAclRequest& request, const RemoveEntriesFromAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveEntriesFromAclOutcomeCallable removeEntriesFromAclCallable(const Model::RemoveEntriesFromAclRequest& request) const;
			ReplaceBandwidthPackageOutcome replaceBandwidthPackage(const Model::ReplaceBandwidthPackageRequest &request)const;
			void replaceBandwidthPackageAsync(const Model::ReplaceBandwidthPackageRequest& request, const ReplaceBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReplaceBandwidthPackageOutcomeCallable replaceBandwidthPackageCallable(const Model::ReplaceBandwidthPackageRequest& request) const;
			UpdateAcceleratorOutcome updateAccelerator(const Model::UpdateAcceleratorRequest &request)const;
			void updateAcceleratorAsync(const Model::UpdateAcceleratorRequest& request, const UpdateAcceleratorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAcceleratorOutcomeCallable updateAcceleratorCallable(const Model::UpdateAcceleratorRequest& request) const;
			UpdateAclAttributeOutcome updateAclAttribute(const Model::UpdateAclAttributeRequest &request)const;
			void updateAclAttributeAsync(const Model::UpdateAclAttributeRequest& request, const UpdateAclAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAclAttributeOutcomeCallable updateAclAttributeCallable(const Model::UpdateAclAttributeRequest& request) const;
			UpdateBandwidthPackageOutcome updateBandwidthPackage(const Model::UpdateBandwidthPackageRequest &request)const;
			void updateBandwidthPackageAsync(const Model::UpdateBandwidthPackageRequest& request, const UpdateBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateBandwidthPackageOutcomeCallable updateBandwidthPackageCallable(const Model::UpdateBandwidthPackageRequest& request) const;
			UpdateEndpointGroupOutcome updateEndpointGroup(const Model::UpdateEndpointGroupRequest &request)const;
			void updateEndpointGroupAsync(const Model::UpdateEndpointGroupRequest& request, const UpdateEndpointGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEndpointGroupOutcomeCallable updateEndpointGroupCallable(const Model::UpdateEndpointGroupRequest& request) const;
			UpdateEndpointGroupAttributeOutcome updateEndpointGroupAttribute(const Model::UpdateEndpointGroupAttributeRequest &request)const;
			void updateEndpointGroupAttributeAsync(const Model::UpdateEndpointGroupAttributeRequest& request, const UpdateEndpointGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEndpointGroupAttributeOutcomeCallable updateEndpointGroupAttributeCallable(const Model::UpdateEndpointGroupAttributeRequest& request) const;
			UpdateForwardingRulesOutcome updateForwardingRules(const Model::UpdateForwardingRulesRequest &request)const;
			void updateForwardingRulesAsync(const Model::UpdateForwardingRulesRequest& request, const UpdateForwardingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateForwardingRulesOutcomeCallable updateForwardingRulesCallable(const Model::UpdateForwardingRulesRequest& request) const;
			UpdateIpSetOutcome updateIpSet(const Model::UpdateIpSetRequest &request)const;
			void updateIpSetAsync(const Model::UpdateIpSetRequest& request, const UpdateIpSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateIpSetOutcomeCallable updateIpSetCallable(const Model::UpdateIpSetRequest& request) const;
			UpdateIpSetsOutcome updateIpSets(const Model::UpdateIpSetsRequest &request)const;
			void updateIpSetsAsync(const Model::UpdateIpSetsRequest& request, const UpdateIpSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateIpSetsOutcomeCallable updateIpSetsCallable(const Model::UpdateIpSetsRequest& request) const;
			UpdateListenerOutcome updateListener(const Model::UpdateListenerRequest &request)const;
			void updateListenerAsync(const Model::UpdateListenerRequest& request, const UpdateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateListenerOutcomeCallable updateListenerCallable(const Model::UpdateListenerRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_GA_GACLIENT_H_
