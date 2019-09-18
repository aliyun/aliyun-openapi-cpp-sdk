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

#ifndef ALIBABACLOUD_CAS_CASCLIENT_H_
#define ALIBABACLOUD_CAS_CASCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CasExport.h"
#include "model/CreateAliDnsRecordIdRequest.h"
#include "model/CreateAliDnsRecordIdResult.h"
#include "model/CreateCertificateRequest.h"
#include "model/CreateCertificateResult.h"
#include "model/CreateCertificateNameRequest.h"
#include "model/CreateCertificateNameResult.h"
#include "model/CreateCooperationOrderRequest.h"
#include "model/CreateCooperationOrderResult.h"
#include "model/CreateDeploymentRequest.h"
#include "model/CreateDeploymentResult.h"
#include "model/CreateDomainVerifyConfigurationStatusRequest.h"
#include "model/CreateDomainVerifyConfigurationStatusResult.h"
#include "model/CreateFilingSignatureDocumentRequest.h"
#include "model/CreateFilingSignatureDocumentResult.h"
#include "model/CreateOrderAuditRequest.h"
#include "model/CreateOrderAuditResult.h"
#include "model/CreateOrderCancelRequest.h"
#include "model/CreateOrderCancelResult.h"
#include "model/CreateOrderDocumentRequest.h"
#include "model/CreateOrderDocumentResult.h"
#include "model/CreateOrderMaterialRequest.h"
#include "model/CreateOrderMaterialResult.h"
#include "model/CreateOrderRefundRecordRequest.h"
#include "model/CreateOrderRefundRecordResult.h"
#include "model/CreateOrderRevokeRequest.h"
#include "model/CreateOrderRevokeResult.h"
#include "model/CreateSignatureRequest.h"
#include "model/CreateSignatureResult.h"
#include "model/CreateSignatureDocumentRequest.h"
#include "model/CreateSignatureDocumentResult.h"
#include "model/CreateSignaturePeopleCertificateRequest.h"
#include "model/CreateSignaturePeopleCertificateResult.h"
#include "model/CreateUnDeploymentRequest.h"
#include "model/CreateUnDeploymentResult.h"
#include "model/CreateWebSignatureRequest.h"
#include "model/CreateWebSignatureResult.h"
#include "model/DeleteCertificateRequest.h"
#include "model/DeleteCertificateResult.h"
#include "model/DeleteOrderRequest.h"
#include "model/DeleteOrderResult.h"
#include "model/DescribeCertificateBrandListRequest.h"
#include "model/DescribeCertificateBrandListResult.h"
#include "model/DescribeCertificateDetailRequest.h"
#include "model/DescribeCertificateDetailResult.h"
#include "model/DescribeCertificateListRequest.h"
#include "model/DescribeCertificateListResult.h"
#include "model/DescribeCertificateStatusCountRequest.h"
#include "model/DescribeCertificateStatusCountResult.h"
#include "model/DescribeDeploymentDetailRequest.h"
#include "model/DescribeDeploymentDetailResult.h"
#include "model/DescribeDeploymentDomainListRequest.h"
#include "model/DescribeDeploymentDomainListResult.h"
#include "model/DescribeDeploymentProductRequest.h"
#include "model/DescribeDeploymentProductResult.h"
#include "model/DescribeDeploymentRegionListRequest.h"
#include "model/DescribeDeploymentRegionListResult.h"
#include "model/DescribeDomainVerifyConfigurationStatusRequest.h"
#include "model/DescribeDomainVerifyConfigurationStatusResult.h"
#include "model/DescribeDomainVerifyInfoRequest.h"
#include "model/DescribeDomainVerifyInfoResult.h"
#include "model/DescribeDownloadCertificateRequest.h"
#include "model/DescribeDownloadCertificateResult.h"
#include "model/DescribeDownloadDomainVerifyConfigurationRequest.h"
#include "model/DescribeDownloadDomainVerifyConfigurationResult.h"
#include "model/DescribeExpectationResultRequest.h"
#include "model/DescribeExpectationResultResult.h"
#include "model/DescribeHelpListRequest.h"
#include "model/DescribeHelpListResult.h"
#include "model/DescribeLocationListRequest.h"
#include "model/DescribeLocationListResult.h"
#include "model/DescribeOSSDownloadInfoRequest.h"
#include "model/DescribeOSSDownloadInfoResult.h"
#include "model/DescribeOSSUploadInfoRequest.h"
#include "model/DescribeOSSUploadInfoResult.h"
#include "model/DescribeOrderAuditFailRecordRequest.h"
#include "model/DescribeOrderAuditFailRecordResult.h"
#include "model/DescribeOrderCountForConsoleIndexRequest.h"
#include "model/DescribeOrderCountForConsoleIndexResult.h"
#include "model/DescribeOrderDetailRequest.h"
#include "model/DescribeOrderDetailResult.h"
#include "model/DescribeOrderDocumentRequest.h"
#include "model/DescribeOrderDocumentResult.h"
#include "model/DescribeOrderListRequest.h"
#include "model/DescribeOrderListResult.h"
#include "model/DescribeOrderMaterialRequest.h"
#include "model/DescribeOrderMaterialResult.h"
#include "model/DescribeOrderRefundRecordRequest.h"
#include "model/DescribeOrderRefundRecordResult.h"
#include "model/DescribeRenewOrderRequest.h"
#include "model/DescribeRenewOrderResult.h"
#include "model/DescribeSignatureCapacityRequest.h"
#include "model/DescribeSignatureCapacityResult.h"
#include "model/DescribeSignatureProductStateRequest.h"
#include "model/DescribeSignatureProductStateResult.h"
#include "model/DescribeSignatureStatisticsRequest.h"
#include "model/DescribeSignatureStatisticsResult.h"
#include "model/DescribeSignatureTradeDetailRequest.h"
#include "model/DescribeSignatureTradeDetailResult.h"
#include "model/DescribeSignatureTradeListRequest.h"
#include "model/DescribeSignatureTradeListResult.h"
#include "model/DescribeStsAuthStatusRequest.h"
#include "model/DescribeStsAuthStatusResult.h"
#include "model/ListTagKeysRequest.h"
#include "model/ListTagKeysResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"


namespace AlibabaCloud
{
	namespace Cas
	{
		class ALIBABACLOUD_CAS_EXPORT CasClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateAliDnsRecordIdResult> CreateAliDnsRecordIdOutcome;
			typedef std::future<CreateAliDnsRecordIdOutcome> CreateAliDnsRecordIdOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateAliDnsRecordIdRequest&, const CreateAliDnsRecordIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAliDnsRecordIdAsyncHandler;
			typedef Outcome<Error, Model::CreateCertificateResult> CreateCertificateOutcome;
			typedef std::future<CreateCertificateOutcome> CreateCertificateOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateCertificateRequest&, const CreateCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCertificateAsyncHandler;
			typedef Outcome<Error, Model::CreateCertificateNameResult> CreateCertificateNameOutcome;
			typedef std::future<CreateCertificateNameOutcome> CreateCertificateNameOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateCertificateNameRequest&, const CreateCertificateNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCertificateNameAsyncHandler;
			typedef Outcome<Error, Model::CreateCooperationOrderResult> CreateCooperationOrderOutcome;
			typedef std::future<CreateCooperationOrderOutcome> CreateCooperationOrderOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateCooperationOrderRequest&, const CreateCooperationOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCooperationOrderAsyncHandler;
			typedef Outcome<Error, Model::CreateDeploymentResult> CreateDeploymentOutcome;
			typedef std::future<CreateDeploymentOutcome> CreateDeploymentOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateDeploymentRequest&, const CreateDeploymentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeploymentAsyncHandler;
			typedef Outcome<Error, Model::CreateDomainVerifyConfigurationStatusResult> CreateDomainVerifyConfigurationStatusOutcome;
			typedef std::future<CreateDomainVerifyConfigurationStatusOutcome> CreateDomainVerifyConfigurationStatusOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateDomainVerifyConfigurationStatusRequest&, const CreateDomainVerifyConfigurationStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainVerifyConfigurationStatusAsyncHandler;
			typedef Outcome<Error, Model::CreateFilingSignatureDocumentResult> CreateFilingSignatureDocumentOutcome;
			typedef std::future<CreateFilingSignatureDocumentOutcome> CreateFilingSignatureDocumentOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateFilingSignatureDocumentRequest&, const CreateFilingSignatureDocumentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFilingSignatureDocumentAsyncHandler;
			typedef Outcome<Error, Model::CreateOrderAuditResult> CreateOrderAuditOutcome;
			typedef std::future<CreateOrderAuditOutcome> CreateOrderAuditOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateOrderAuditRequest&, const CreateOrderAuditOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrderAuditAsyncHandler;
			typedef Outcome<Error, Model::CreateOrderCancelResult> CreateOrderCancelOutcome;
			typedef std::future<CreateOrderCancelOutcome> CreateOrderCancelOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateOrderCancelRequest&, const CreateOrderCancelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrderCancelAsyncHandler;
			typedef Outcome<Error, Model::CreateOrderDocumentResult> CreateOrderDocumentOutcome;
			typedef std::future<CreateOrderDocumentOutcome> CreateOrderDocumentOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateOrderDocumentRequest&, const CreateOrderDocumentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrderDocumentAsyncHandler;
			typedef Outcome<Error, Model::CreateOrderMaterialResult> CreateOrderMaterialOutcome;
			typedef std::future<CreateOrderMaterialOutcome> CreateOrderMaterialOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateOrderMaterialRequest&, const CreateOrderMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrderMaterialAsyncHandler;
			typedef Outcome<Error, Model::CreateOrderRefundRecordResult> CreateOrderRefundRecordOutcome;
			typedef std::future<CreateOrderRefundRecordOutcome> CreateOrderRefundRecordOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateOrderRefundRecordRequest&, const CreateOrderRefundRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrderRefundRecordAsyncHandler;
			typedef Outcome<Error, Model::CreateOrderRevokeResult> CreateOrderRevokeOutcome;
			typedef std::future<CreateOrderRevokeOutcome> CreateOrderRevokeOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateOrderRevokeRequest&, const CreateOrderRevokeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrderRevokeAsyncHandler;
			typedef Outcome<Error, Model::CreateSignatureResult> CreateSignatureOutcome;
			typedef std::future<CreateSignatureOutcome> CreateSignatureOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateSignatureRequest&, const CreateSignatureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSignatureAsyncHandler;
			typedef Outcome<Error, Model::CreateSignatureDocumentResult> CreateSignatureDocumentOutcome;
			typedef std::future<CreateSignatureDocumentOutcome> CreateSignatureDocumentOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateSignatureDocumentRequest&, const CreateSignatureDocumentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSignatureDocumentAsyncHandler;
			typedef Outcome<Error, Model::CreateSignaturePeopleCertificateResult> CreateSignaturePeopleCertificateOutcome;
			typedef std::future<CreateSignaturePeopleCertificateOutcome> CreateSignaturePeopleCertificateOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateSignaturePeopleCertificateRequest&, const CreateSignaturePeopleCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSignaturePeopleCertificateAsyncHandler;
			typedef Outcome<Error, Model::CreateUnDeploymentResult> CreateUnDeploymentOutcome;
			typedef std::future<CreateUnDeploymentOutcome> CreateUnDeploymentOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateUnDeploymentRequest&, const CreateUnDeploymentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUnDeploymentAsyncHandler;
			typedef Outcome<Error, Model::CreateWebSignatureResult> CreateWebSignatureOutcome;
			typedef std::future<CreateWebSignatureOutcome> CreateWebSignatureOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::CreateWebSignatureRequest&, const CreateWebSignatureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateWebSignatureAsyncHandler;
			typedef Outcome<Error, Model::DeleteCertificateResult> DeleteCertificateOutcome;
			typedef std::future<DeleteCertificateOutcome> DeleteCertificateOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DeleteCertificateRequest&, const DeleteCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCertificateAsyncHandler;
			typedef Outcome<Error, Model::DeleteOrderResult> DeleteOrderOutcome;
			typedef std::future<DeleteOrderOutcome> DeleteOrderOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DeleteOrderRequest&, const DeleteOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOrderAsyncHandler;
			typedef Outcome<Error, Model::DescribeCertificateBrandListResult> DescribeCertificateBrandListOutcome;
			typedef std::future<DescribeCertificateBrandListOutcome> DescribeCertificateBrandListOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeCertificateBrandListRequest&, const DescribeCertificateBrandListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateBrandListAsyncHandler;
			typedef Outcome<Error, Model::DescribeCertificateDetailResult> DescribeCertificateDetailOutcome;
			typedef std::future<DescribeCertificateDetailOutcome> DescribeCertificateDetailOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeCertificateDetailRequest&, const DescribeCertificateDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeCertificateListResult> DescribeCertificateListOutcome;
			typedef std::future<DescribeCertificateListOutcome> DescribeCertificateListOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeCertificateListRequest&, const DescribeCertificateListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateListAsyncHandler;
			typedef Outcome<Error, Model::DescribeCertificateStatusCountResult> DescribeCertificateStatusCountOutcome;
			typedef std::future<DescribeCertificateStatusCountOutcome> DescribeCertificateStatusCountOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeCertificateStatusCountRequest&, const DescribeCertificateStatusCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateStatusCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeDeploymentDetailResult> DescribeDeploymentDetailOutcome;
			typedef std::future<DescribeDeploymentDetailOutcome> DescribeDeploymentDetailOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeDeploymentDetailRequest&, const DescribeDeploymentDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeploymentDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeDeploymentDomainListResult> DescribeDeploymentDomainListOutcome;
			typedef std::future<DescribeDeploymentDomainListOutcome> DescribeDeploymentDomainListOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeDeploymentDomainListRequest&, const DescribeDeploymentDomainListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeploymentDomainListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDeploymentProductResult> DescribeDeploymentProductOutcome;
			typedef std::future<DescribeDeploymentProductOutcome> DescribeDeploymentProductOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeDeploymentProductRequest&, const DescribeDeploymentProductOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeploymentProductAsyncHandler;
			typedef Outcome<Error, Model::DescribeDeploymentRegionListResult> DescribeDeploymentRegionListOutcome;
			typedef std::future<DescribeDeploymentRegionListOutcome> DescribeDeploymentRegionListOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeDeploymentRegionListRequest&, const DescribeDeploymentRegionListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeploymentRegionListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainVerifyConfigurationStatusResult> DescribeDomainVerifyConfigurationStatusOutcome;
			typedef std::future<DescribeDomainVerifyConfigurationStatusOutcome> DescribeDomainVerifyConfigurationStatusOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeDomainVerifyConfigurationStatusRequest&, const DescribeDomainVerifyConfigurationStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainVerifyConfigurationStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainVerifyInfoResult> DescribeDomainVerifyInfoOutcome;
			typedef std::future<DescribeDomainVerifyInfoOutcome> DescribeDomainVerifyInfoOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeDomainVerifyInfoRequest&, const DescribeDomainVerifyInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainVerifyInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDownloadCertificateResult> DescribeDownloadCertificateOutcome;
			typedef std::future<DescribeDownloadCertificateOutcome> DescribeDownloadCertificateOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeDownloadCertificateRequest&, const DescribeDownloadCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDownloadCertificateAsyncHandler;
			typedef Outcome<Error, Model::DescribeDownloadDomainVerifyConfigurationResult> DescribeDownloadDomainVerifyConfigurationOutcome;
			typedef std::future<DescribeDownloadDomainVerifyConfigurationOutcome> DescribeDownloadDomainVerifyConfigurationOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeDownloadDomainVerifyConfigurationRequest&, const DescribeDownloadDomainVerifyConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDownloadDomainVerifyConfigurationAsyncHandler;
			typedef Outcome<Error, Model::DescribeExpectationResultResult> DescribeExpectationResultOutcome;
			typedef std::future<DescribeExpectationResultOutcome> DescribeExpectationResultOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeExpectationResultRequest&, const DescribeExpectationResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExpectationResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeHelpListResult> DescribeHelpListOutcome;
			typedef std::future<DescribeHelpListOutcome> DescribeHelpListOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeHelpListRequest&, const DescribeHelpListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHelpListAsyncHandler;
			typedef Outcome<Error, Model::DescribeLocationListResult> DescribeLocationListOutcome;
			typedef std::future<DescribeLocationListOutcome> DescribeLocationListOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeLocationListRequest&, const DescribeLocationListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLocationListAsyncHandler;
			typedef Outcome<Error, Model::DescribeOSSDownloadInfoResult> DescribeOSSDownloadInfoOutcome;
			typedef std::future<DescribeOSSDownloadInfoOutcome> DescribeOSSDownloadInfoOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeOSSDownloadInfoRequest&, const DescribeOSSDownloadInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOSSDownloadInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeOSSUploadInfoResult> DescribeOSSUploadInfoOutcome;
			typedef std::future<DescribeOSSUploadInfoOutcome> DescribeOSSUploadInfoOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeOSSUploadInfoRequest&, const DescribeOSSUploadInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOSSUploadInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeOrderAuditFailRecordResult> DescribeOrderAuditFailRecordOutcome;
			typedef std::future<DescribeOrderAuditFailRecordOutcome> DescribeOrderAuditFailRecordOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeOrderAuditFailRecordRequest&, const DescribeOrderAuditFailRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrderAuditFailRecordAsyncHandler;
			typedef Outcome<Error, Model::DescribeOrderCountForConsoleIndexResult> DescribeOrderCountForConsoleIndexOutcome;
			typedef std::future<DescribeOrderCountForConsoleIndexOutcome> DescribeOrderCountForConsoleIndexOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeOrderCountForConsoleIndexRequest&, const DescribeOrderCountForConsoleIndexOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrderCountForConsoleIndexAsyncHandler;
			typedef Outcome<Error, Model::DescribeOrderDetailResult> DescribeOrderDetailOutcome;
			typedef std::future<DescribeOrderDetailOutcome> DescribeOrderDetailOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeOrderDetailRequest&, const DescribeOrderDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrderDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeOrderDocumentResult> DescribeOrderDocumentOutcome;
			typedef std::future<DescribeOrderDocumentOutcome> DescribeOrderDocumentOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeOrderDocumentRequest&, const DescribeOrderDocumentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrderDocumentAsyncHandler;
			typedef Outcome<Error, Model::DescribeOrderListResult> DescribeOrderListOutcome;
			typedef std::future<DescribeOrderListOutcome> DescribeOrderListOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeOrderListRequest&, const DescribeOrderListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrderListAsyncHandler;
			typedef Outcome<Error, Model::DescribeOrderMaterialResult> DescribeOrderMaterialOutcome;
			typedef std::future<DescribeOrderMaterialOutcome> DescribeOrderMaterialOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeOrderMaterialRequest&, const DescribeOrderMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrderMaterialAsyncHandler;
			typedef Outcome<Error, Model::DescribeOrderRefundRecordResult> DescribeOrderRefundRecordOutcome;
			typedef std::future<DescribeOrderRefundRecordOutcome> DescribeOrderRefundRecordOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeOrderRefundRecordRequest&, const DescribeOrderRefundRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrderRefundRecordAsyncHandler;
			typedef Outcome<Error, Model::DescribeRenewOrderResult> DescribeRenewOrderOutcome;
			typedef std::future<DescribeRenewOrderOutcome> DescribeRenewOrderOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeRenewOrderRequest&, const DescribeRenewOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRenewOrderAsyncHandler;
			typedef Outcome<Error, Model::DescribeSignatureCapacityResult> DescribeSignatureCapacityOutcome;
			typedef std::future<DescribeSignatureCapacityOutcome> DescribeSignatureCapacityOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeSignatureCapacityRequest&, const DescribeSignatureCapacityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSignatureCapacityAsyncHandler;
			typedef Outcome<Error, Model::DescribeSignatureProductStateResult> DescribeSignatureProductStateOutcome;
			typedef std::future<DescribeSignatureProductStateOutcome> DescribeSignatureProductStateOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeSignatureProductStateRequest&, const DescribeSignatureProductStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSignatureProductStateAsyncHandler;
			typedef Outcome<Error, Model::DescribeSignatureStatisticsResult> DescribeSignatureStatisticsOutcome;
			typedef std::future<DescribeSignatureStatisticsOutcome> DescribeSignatureStatisticsOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeSignatureStatisticsRequest&, const DescribeSignatureStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSignatureStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSignatureTradeDetailResult> DescribeSignatureTradeDetailOutcome;
			typedef std::future<DescribeSignatureTradeDetailOutcome> DescribeSignatureTradeDetailOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeSignatureTradeDetailRequest&, const DescribeSignatureTradeDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSignatureTradeDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeSignatureTradeListResult> DescribeSignatureTradeListOutcome;
			typedef std::future<DescribeSignatureTradeListOutcome> DescribeSignatureTradeListOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeSignatureTradeListRequest&, const DescribeSignatureTradeListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSignatureTradeListAsyncHandler;
			typedef Outcome<Error, Model::DescribeStsAuthStatusResult> DescribeStsAuthStatusOutcome;
			typedef std::future<DescribeStsAuthStatusOutcome> DescribeStsAuthStatusOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::DescribeStsAuthStatusRequest&, const DescribeStsAuthStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStsAuthStatusAsyncHandler;
			typedef Outcome<Error, Model::ListTagKeysResult> ListTagKeysOutcome;
			typedef std::future<ListTagKeysOutcome> ListTagKeysOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::ListTagKeysRequest&, const ListTagKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagKeysAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const CasClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;

			CasClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CasClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CasClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CasClient();
			CreateAliDnsRecordIdOutcome createAliDnsRecordId(const Model::CreateAliDnsRecordIdRequest &request)const;
			void createAliDnsRecordIdAsync(const Model::CreateAliDnsRecordIdRequest& request, const CreateAliDnsRecordIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAliDnsRecordIdOutcomeCallable createAliDnsRecordIdCallable(const Model::CreateAliDnsRecordIdRequest& request) const;
			CreateCertificateOutcome createCertificate(const Model::CreateCertificateRequest &request)const;
			void createCertificateAsync(const Model::CreateCertificateRequest& request, const CreateCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCertificateOutcomeCallable createCertificateCallable(const Model::CreateCertificateRequest& request) const;
			CreateCertificateNameOutcome createCertificateName(const Model::CreateCertificateNameRequest &request)const;
			void createCertificateNameAsync(const Model::CreateCertificateNameRequest& request, const CreateCertificateNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCertificateNameOutcomeCallable createCertificateNameCallable(const Model::CreateCertificateNameRequest& request) const;
			CreateCooperationOrderOutcome createCooperationOrder(const Model::CreateCooperationOrderRequest &request)const;
			void createCooperationOrderAsync(const Model::CreateCooperationOrderRequest& request, const CreateCooperationOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCooperationOrderOutcomeCallable createCooperationOrderCallable(const Model::CreateCooperationOrderRequest& request) const;
			CreateDeploymentOutcome createDeployment(const Model::CreateDeploymentRequest &request)const;
			void createDeploymentAsync(const Model::CreateDeploymentRequest& request, const CreateDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDeploymentOutcomeCallable createDeploymentCallable(const Model::CreateDeploymentRequest& request) const;
			CreateDomainVerifyConfigurationStatusOutcome createDomainVerifyConfigurationStatus(const Model::CreateDomainVerifyConfigurationStatusRequest &request)const;
			void createDomainVerifyConfigurationStatusAsync(const Model::CreateDomainVerifyConfigurationStatusRequest& request, const CreateDomainVerifyConfigurationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDomainVerifyConfigurationStatusOutcomeCallable createDomainVerifyConfigurationStatusCallable(const Model::CreateDomainVerifyConfigurationStatusRequest& request) const;
			CreateFilingSignatureDocumentOutcome createFilingSignatureDocument(const Model::CreateFilingSignatureDocumentRequest &request)const;
			void createFilingSignatureDocumentAsync(const Model::CreateFilingSignatureDocumentRequest& request, const CreateFilingSignatureDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFilingSignatureDocumentOutcomeCallable createFilingSignatureDocumentCallable(const Model::CreateFilingSignatureDocumentRequest& request) const;
			CreateOrderAuditOutcome createOrderAudit(const Model::CreateOrderAuditRequest &request)const;
			void createOrderAuditAsync(const Model::CreateOrderAuditRequest& request, const CreateOrderAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrderAuditOutcomeCallable createOrderAuditCallable(const Model::CreateOrderAuditRequest& request) const;
			CreateOrderCancelOutcome createOrderCancel(const Model::CreateOrderCancelRequest &request)const;
			void createOrderCancelAsync(const Model::CreateOrderCancelRequest& request, const CreateOrderCancelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrderCancelOutcomeCallable createOrderCancelCallable(const Model::CreateOrderCancelRequest& request) const;
			CreateOrderDocumentOutcome createOrderDocument(const Model::CreateOrderDocumentRequest &request)const;
			void createOrderDocumentAsync(const Model::CreateOrderDocumentRequest& request, const CreateOrderDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrderDocumentOutcomeCallable createOrderDocumentCallable(const Model::CreateOrderDocumentRequest& request) const;
			CreateOrderMaterialOutcome createOrderMaterial(const Model::CreateOrderMaterialRequest &request)const;
			void createOrderMaterialAsync(const Model::CreateOrderMaterialRequest& request, const CreateOrderMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrderMaterialOutcomeCallable createOrderMaterialCallable(const Model::CreateOrderMaterialRequest& request) const;
			CreateOrderRefundRecordOutcome createOrderRefundRecord(const Model::CreateOrderRefundRecordRequest &request)const;
			void createOrderRefundRecordAsync(const Model::CreateOrderRefundRecordRequest& request, const CreateOrderRefundRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrderRefundRecordOutcomeCallable createOrderRefundRecordCallable(const Model::CreateOrderRefundRecordRequest& request) const;
			CreateOrderRevokeOutcome createOrderRevoke(const Model::CreateOrderRevokeRequest &request)const;
			void createOrderRevokeAsync(const Model::CreateOrderRevokeRequest& request, const CreateOrderRevokeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrderRevokeOutcomeCallable createOrderRevokeCallable(const Model::CreateOrderRevokeRequest& request) const;
			CreateSignatureOutcome createSignature(const Model::CreateSignatureRequest &request)const;
			void createSignatureAsync(const Model::CreateSignatureRequest& request, const CreateSignatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSignatureOutcomeCallable createSignatureCallable(const Model::CreateSignatureRequest& request) const;
			CreateSignatureDocumentOutcome createSignatureDocument(const Model::CreateSignatureDocumentRequest &request)const;
			void createSignatureDocumentAsync(const Model::CreateSignatureDocumentRequest& request, const CreateSignatureDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSignatureDocumentOutcomeCallable createSignatureDocumentCallable(const Model::CreateSignatureDocumentRequest& request) const;
			CreateSignaturePeopleCertificateOutcome createSignaturePeopleCertificate(const Model::CreateSignaturePeopleCertificateRequest &request)const;
			void createSignaturePeopleCertificateAsync(const Model::CreateSignaturePeopleCertificateRequest& request, const CreateSignaturePeopleCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSignaturePeopleCertificateOutcomeCallable createSignaturePeopleCertificateCallable(const Model::CreateSignaturePeopleCertificateRequest& request) const;
			CreateUnDeploymentOutcome createUnDeployment(const Model::CreateUnDeploymentRequest &request)const;
			void createUnDeploymentAsync(const Model::CreateUnDeploymentRequest& request, const CreateUnDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUnDeploymentOutcomeCallable createUnDeploymentCallable(const Model::CreateUnDeploymentRequest& request) const;
			CreateWebSignatureOutcome createWebSignature(const Model::CreateWebSignatureRequest &request)const;
			void createWebSignatureAsync(const Model::CreateWebSignatureRequest& request, const CreateWebSignatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateWebSignatureOutcomeCallable createWebSignatureCallable(const Model::CreateWebSignatureRequest& request) const;
			DeleteCertificateOutcome deleteCertificate(const Model::DeleteCertificateRequest &request)const;
			void deleteCertificateAsync(const Model::DeleteCertificateRequest& request, const DeleteCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCertificateOutcomeCallable deleteCertificateCallable(const Model::DeleteCertificateRequest& request) const;
			DeleteOrderOutcome deleteOrder(const Model::DeleteOrderRequest &request)const;
			void deleteOrderAsync(const Model::DeleteOrderRequest& request, const DeleteOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteOrderOutcomeCallable deleteOrderCallable(const Model::DeleteOrderRequest& request) const;
			DescribeCertificateBrandListOutcome describeCertificateBrandList(const Model::DescribeCertificateBrandListRequest &request)const;
			void describeCertificateBrandListAsync(const Model::DescribeCertificateBrandListRequest& request, const DescribeCertificateBrandListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCertificateBrandListOutcomeCallable describeCertificateBrandListCallable(const Model::DescribeCertificateBrandListRequest& request) const;
			DescribeCertificateDetailOutcome describeCertificateDetail(const Model::DescribeCertificateDetailRequest &request)const;
			void describeCertificateDetailAsync(const Model::DescribeCertificateDetailRequest& request, const DescribeCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCertificateDetailOutcomeCallable describeCertificateDetailCallable(const Model::DescribeCertificateDetailRequest& request) const;
			DescribeCertificateListOutcome describeCertificateList(const Model::DescribeCertificateListRequest &request)const;
			void describeCertificateListAsync(const Model::DescribeCertificateListRequest& request, const DescribeCertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCertificateListOutcomeCallable describeCertificateListCallable(const Model::DescribeCertificateListRequest& request) const;
			DescribeCertificateStatusCountOutcome describeCertificateStatusCount(const Model::DescribeCertificateStatusCountRequest &request)const;
			void describeCertificateStatusCountAsync(const Model::DescribeCertificateStatusCountRequest& request, const DescribeCertificateStatusCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCertificateStatusCountOutcomeCallable describeCertificateStatusCountCallable(const Model::DescribeCertificateStatusCountRequest& request) const;
			DescribeDeploymentDetailOutcome describeDeploymentDetail(const Model::DescribeDeploymentDetailRequest &request)const;
			void describeDeploymentDetailAsync(const Model::DescribeDeploymentDetailRequest& request, const DescribeDeploymentDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDeploymentDetailOutcomeCallable describeDeploymentDetailCallable(const Model::DescribeDeploymentDetailRequest& request) const;
			DescribeDeploymentDomainListOutcome describeDeploymentDomainList(const Model::DescribeDeploymentDomainListRequest &request)const;
			void describeDeploymentDomainListAsync(const Model::DescribeDeploymentDomainListRequest& request, const DescribeDeploymentDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDeploymentDomainListOutcomeCallable describeDeploymentDomainListCallable(const Model::DescribeDeploymentDomainListRequest& request) const;
			DescribeDeploymentProductOutcome describeDeploymentProduct(const Model::DescribeDeploymentProductRequest &request)const;
			void describeDeploymentProductAsync(const Model::DescribeDeploymentProductRequest& request, const DescribeDeploymentProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDeploymentProductOutcomeCallable describeDeploymentProductCallable(const Model::DescribeDeploymentProductRequest& request) const;
			DescribeDeploymentRegionListOutcome describeDeploymentRegionList(const Model::DescribeDeploymentRegionListRequest &request)const;
			void describeDeploymentRegionListAsync(const Model::DescribeDeploymentRegionListRequest& request, const DescribeDeploymentRegionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDeploymentRegionListOutcomeCallable describeDeploymentRegionListCallable(const Model::DescribeDeploymentRegionListRequest& request) const;
			DescribeDomainVerifyConfigurationStatusOutcome describeDomainVerifyConfigurationStatus(const Model::DescribeDomainVerifyConfigurationStatusRequest &request)const;
			void describeDomainVerifyConfigurationStatusAsync(const Model::DescribeDomainVerifyConfigurationStatusRequest& request, const DescribeDomainVerifyConfigurationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainVerifyConfigurationStatusOutcomeCallable describeDomainVerifyConfigurationStatusCallable(const Model::DescribeDomainVerifyConfigurationStatusRequest& request) const;
			DescribeDomainVerifyInfoOutcome describeDomainVerifyInfo(const Model::DescribeDomainVerifyInfoRequest &request)const;
			void describeDomainVerifyInfoAsync(const Model::DescribeDomainVerifyInfoRequest& request, const DescribeDomainVerifyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainVerifyInfoOutcomeCallable describeDomainVerifyInfoCallable(const Model::DescribeDomainVerifyInfoRequest& request) const;
			DescribeDownloadCertificateOutcome describeDownloadCertificate(const Model::DescribeDownloadCertificateRequest &request)const;
			void describeDownloadCertificateAsync(const Model::DescribeDownloadCertificateRequest& request, const DescribeDownloadCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDownloadCertificateOutcomeCallable describeDownloadCertificateCallable(const Model::DescribeDownloadCertificateRequest& request) const;
			DescribeDownloadDomainVerifyConfigurationOutcome describeDownloadDomainVerifyConfiguration(const Model::DescribeDownloadDomainVerifyConfigurationRequest &request)const;
			void describeDownloadDomainVerifyConfigurationAsync(const Model::DescribeDownloadDomainVerifyConfigurationRequest& request, const DescribeDownloadDomainVerifyConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDownloadDomainVerifyConfigurationOutcomeCallable describeDownloadDomainVerifyConfigurationCallable(const Model::DescribeDownloadDomainVerifyConfigurationRequest& request) const;
			DescribeExpectationResultOutcome describeExpectationResult(const Model::DescribeExpectationResultRequest &request)const;
			void describeExpectationResultAsync(const Model::DescribeExpectationResultRequest& request, const DescribeExpectationResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExpectationResultOutcomeCallable describeExpectationResultCallable(const Model::DescribeExpectationResultRequest& request) const;
			DescribeHelpListOutcome describeHelpList(const Model::DescribeHelpListRequest &request)const;
			void describeHelpListAsync(const Model::DescribeHelpListRequest& request, const DescribeHelpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHelpListOutcomeCallable describeHelpListCallable(const Model::DescribeHelpListRequest& request) const;
			DescribeLocationListOutcome describeLocationList(const Model::DescribeLocationListRequest &request)const;
			void describeLocationListAsync(const Model::DescribeLocationListRequest& request, const DescribeLocationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLocationListOutcomeCallable describeLocationListCallable(const Model::DescribeLocationListRequest& request) const;
			DescribeOSSDownloadInfoOutcome describeOSSDownloadInfo(const Model::DescribeOSSDownloadInfoRequest &request)const;
			void describeOSSDownloadInfoAsync(const Model::DescribeOSSDownloadInfoRequest& request, const DescribeOSSDownloadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOSSDownloadInfoOutcomeCallable describeOSSDownloadInfoCallable(const Model::DescribeOSSDownloadInfoRequest& request) const;
			DescribeOSSUploadInfoOutcome describeOSSUploadInfo(const Model::DescribeOSSUploadInfoRequest &request)const;
			void describeOSSUploadInfoAsync(const Model::DescribeOSSUploadInfoRequest& request, const DescribeOSSUploadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOSSUploadInfoOutcomeCallable describeOSSUploadInfoCallable(const Model::DescribeOSSUploadInfoRequest& request) const;
			DescribeOrderAuditFailRecordOutcome describeOrderAuditFailRecord(const Model::DescribeOrderAuditFailRecordRequest &request)const;
			void describeOrderAuditFailRecordAsync(const Model::DescribeOrderAuditFailRecordRequest& request, const DescribeOrderAuditFailRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOrderAuditFailRecordOutcomeCallable describeOrderAuditFailRecordCallable(const Model::DescribeOrderAuditFailRecordRequest& request) const;
			DescribeOrderCountForConsoleIndexOutcome describeOrderCountForConsoleIndex(const Model::DescribeOrderCountForConsoleIndexRequest &request)const;
			void describeOrderCountForConsoleIndexAsync(const Model::DescribeOrderCountForConsoleIndexRequest& request, const DescribeOrderCountForConsoleIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOrderCountForConsoleIndexOutcomeCallable describeOrderCountForConsoleIndexCallable(const Model::DescribeOrderCountForConsoleIndexRequest& request) const;
			DescribeOrderDetailOutcome describeOrderDetail(const Model::DescribeOrderDetailRequest &request)const;
			void describeOrderDetailAsync(const Model::DescribeOrderDetailRequest& request, const DescribeOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOrderDetailOutcomeCallable describeOrderDetailCallable(const Model::DescribeOrderDetailRequest& request) const;
			DescribeOrderDocumentOutcome describeOrderDocument(const Model::DescribeOrderDocumentRequest &request)const;
			void describeOrderDocumentAsync(const Model::DescribeOrderDocumentRequest& request, const DescribeOrderDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOrderDocumentOutcomeCallable describeOrderDocumentCallable(const Model::DescribeOrderDocumentRequest& request) const;
			DescribeOrderListOutcome describeOrderList(const Model::DescribeOrderListRequest &request)const;
			void describeOrderListAsync(const Model::DescribeOrderListRequest& request, const DescribeOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOrderListOutcomeCallable describeOrderListCallable(const Model::DescribeOrderListRequest& request) const;
			DescribeOrderMaterialOutcome describeOrderMaterial(const Model::DescribeOrderMaterialRequest &request)const;
			void describeOrderMaterialAsync(const Model::DescribeOrderMaterialRequest& request, const DescribeOrderMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOrderMaterialOutcomeCallable describeOrderMaterialCallable(const Model::DescribeOrderMaterialRequest& request) const;
			DescribeOrderRefundRecordOutcome describeOrderRefundRecord(const Model::DescribeOrderRefundRecordRequest &request)const;
			void describeOrderRefundRecordAsync(const Model::DescribeOrderRefundRecordRequest& request, const DescribeOrderRefundRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOrderRefundRecordOutcomeCallable describeOrderRefundRecordCallable(const Model::DescribeOrderRefundRecordRequest& request) const;
			DescribeRenewOrderOutcome describeRenewOrder(const Model::DescribeRenewOrderRequest &request)const;
			void describeRenewOrderAsync(const Model::DescribeRenewOrderRequest& request, const DescribeRenewOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRenewOrderOutcomeCallable describeRenewOrderCallable(const Model::DescribeRenewOrderRequest& request) const;
			DescribeSignatureCapacityOutcome describeSignatureCapacity(const Model::DescribeSignatureCapacityRequest &request)const;
			void describeSignatureCapacityAsync(const Model::DescribeSignatureCapacityRequest& request, const DescribeSignatureCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSignatureCapacityOutcomeCallable describeSignatureCapacityCallable(const Model::DescribeSignatureCapacityRequest& request) const;
			DescribeSignatureProductStateOutcome describeSignatureProductState(const Model::DescribeSignatureProductStateRequest &request)const;
			void describeSignatureProductStateAsync(const Model::DescribeSignatureProductStateRequest& request, const DescribeSignatureProductStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSignatureProductStateOutcomeCallable describeSignatureProductStateCallable(const Model::DescribeSignatureProductStateRequest& request) const;
			DescribeSignatureStatisticsOutcome describeSignatureStatistics(const Model::DescribeSignatureStatisticsRequest &request)const;
			void describeSignatureStatisticsAsync(const Model::DescribeSignatureStatisticsRequest& request, const DescribeSignatureStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSignatureStatisticsOutcomeCallable describeSignatureStatisticsCallable(const Model::DescribeSignatureStatisticsRequest& request) const;
			DescribeSignatureTradeDetailOutcome describeSignatureTradeDetail(const Model::DescribeSignatureTradeDetailRequest &request)const;
			void describeSignatureTradeDetailAsync(const Model::DescribeSignatureTradeDetailRequest& request, const DescribeSignatureTradeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSignatureTradeDetailOutcomeCallable describeSignatureTradeDetailCallable(const Model::DescribeSignatureTradeDetailRequest& request) const;
			DescribeSignatureTradeListOutcome describeSignatureTradeList(const Model::DescribeSignatureTradeListRequest &request)const;
			void describeSignatureTradeListAsync(const Model::DescribeSignatureTradeListRequest& request, const DescribeSignatureTradeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSignatureTradeListOutcomeCallable describeSignatureTradeListCallable(const Model::DescribeSignatureTradeListRequest& request) const;
			DescribeStsAuthStatusOutcome describeStsAuthStatus(const Model::DescribeStsAuthStatusRequest &request)const;
			void describeStsAuthStatusAsync(const Model::DescribeStsAuthStatusRequest& request, const DescribeStsAuthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStsAuthStatusOutcomeCallable describeStsAuthStatusCallable(const Model::DescribeStsAuthStatusRequest& request) const;
			ListTagKeysOutcome listTagKeys(const Model::ListTagKeysRequest &request)const;
			void listTagKeysAsync(const Model::ListTagKeysRequest& request, const ListTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagKeysOutcomeCallable listTagKeysCallable(const Model::ListTagKeysRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CAS_CASCLIENT_H_
