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

#ifndef ALIBABACLOUD_WEBSITEBUILD_WEBSITEBUILDCLIENT_H_
#define ALIBABACLOUD_WEBSITEBUILD_WEBSITEBUILDCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "WebsiteBuildExport.h"
#include "model/BindAppDomainRequest.h"
#include "model/BindAppDomainResult.h"
#include "model/CreateAppInstanceRequest.h"
#include "model/CreateAppInstanceResult.h"
#include "model/CreateAppInstanceTicketRequest.h"
#include "model/CreateAppInstanceTicketResult.h"
#include "model/CreateLogoTaskRequest.h"
#include "model/CreateLogoTaskResult.h"
#include "model/DeleteAppDomainCertificateRequest.h"
#include "model/DeleteAppDomainCertificateResult.h"
#include "model/DeleteAppDomainRedirectRequest.h"
#include "model/DeleteAppDomainRedirectResult.h"
#include "model/DescribeAppDomainDnsRecordRequest.h"
#include "model/DescribeAppDomainDnsRecordResult.h"
#include "model/DispatchConsoleAPIForPartnerRequest.h"
#include "model/DispatchConsoleAPIForPartnerResult.h"
#include "model/GetAppInstanceRequest.h"
#include "model/GetAppInstanceResult.h"
#include "model/GetCreateLogoTaskRequest.h"
#include "model/GetCreateLogoTaskResult.h"
#include "model/GetDomainInfoForPartnerRequest.h"
#include "model/GetDomainInfoForPartnerResult.h"
#include "model/GetIcpFilingInfoForPartnerRequest.h"
#include "model/GetIcpFilingInfoForPartnerResult.h"
#include "model/GetUserAccessTokenForPartnerRequest.h"
#include "model/GetUserAccessTokenForPartnerResult.h"
#include "model/GetUserTmpIdentityForPartnerRequest.h"
#include "model/GetUserTmpIdentityForPartnerResult.h"
#include "model/ListAppDomainRedirectRecordsRequest.h"
#include "model/ListAppDomainRedirectRecordsResult.h"
#include "model/ListAppInstanceDomainsRequest.h"
#include "model/ListAppInstanceDomainsResult.h"
#include "model/ListAppInstancesRequest.h"
#include "model/ListAppInstancesResult.h"
#include "model/ModifyAppInstanceSpecRequest.h"
#include "model/ModifyAppInstanceSpecResult.h"
#include "model/OperateAppInstanceForPartnerRequest.h"
#include "model/OperateAppInstanceForPartnerResult.h"
#include "model/OperateAppServiceForPartnerRequest.h"
#include "model/OperateAppServiceForPartnerResult.h"
#include "model/RefreshAppInstanceTicketRequest.h"
#include "model/RefreshAppInstanceTicketResult.h"
#include "model/RefundAppInstanceForPartnerRequest.h"
#include "model/RefundAppInstanceForPartnerResult.h"
#include "model/RenewAppInstanceRequest.h"
#include "model/RenewAppInstanceResult.h"
#include "model/SearchImageRequest.h"
#include "model/SearchImageResult.h"
#include "model/SetAppDomainCertificateRequest.h"
#include "model/SetAppDomainCertificateResult.h"
#include "model/SyncAppInstanceForPartnerRequest.h"
#include "model/SyncAppInstanceForPartnerResult.h"
#include "model/UnbindAppDomainRequest.h"
#include "model/UnbindAppDomainResult.h"


namespace AlibabaCloud
{
	namespace WebsiteBuild
	{
		class ALIBABACLOUD_WEBSITEBUILD_EXPORT WebsiteBuildClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::BindAppDomainResult> BindAppDomainOutcome;
			typedef std::future<BindAppDomainOutcome> BindAppDomainOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::BindAppDomainRequest&, const BindAppDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindAppDomainAsyncHandler;
			typedef Outcome<Error, Model::CreateAppInstanceResult> CreateAppInstanceOutcome;
			typedef std::future<CreateAppInstanceOutcome> CreateAppInstanceOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::CreateAppInstanceRequest&, const CreateAppInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateAppInstanceTicketResult> CreateAppInstanceTicketOutcome;
			typedef std::future<CreateAppInstanceTicketOutcome> CreateAppInstanceTicketOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::CreateAppInstanceTicketRequest&, const CreateAppInstanceTicketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppInstanceTicketAsyncHandler;
			typedef Outcome<Error, Model::CreateLogoTaskResult> CreateLogoTaskOutcome;
			typedef std::future<CreateLogoTaskOutcome> CreateLogoTaskOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::CreateLogoTaskRequest&, const CreateLogoTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLogoTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteAppDomainCertificateResult> DeleteAppDomainCertificateOutcome;
			typedef std::future<DeleteAppDomainCertificateOutcome> DeleteAppDomainCertificateOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::DeleteAppDomainCertificateRequest&, const DeleteAppDomainCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppDomainCertificateAsyncHandler;
			typedef Outcome<Error, Model::DeleteAppDomainRedirectResult> DeleteAppDomainRedirectOutcome;
			typedef std::future<DeleteAppDomainRedirectOutcome> DeleteAppDomainRedirectOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::DeleteAppDomainRedirectRequest&, const DeleteAppDomainRedirectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppDomainRedirectAsyncHandler;
			typedef Outcome<Error, Model::DescribeAppDomainDnsRecordResult> DescribeAppDomainDnsRecordOutcome;
			typedef std::future<DescribeAppDomainDnsRecordOutcome> DescribeAppDomainDnsRecordOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::DescribeAppDomainDnsRecordRequest&, const DescribeAppDomainDnsRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppDomainDnsRecordAsyncHandler;
			typedef Outcome<Error, Model::DispatchConsoleAPIForPartnerResult> DispatchConsoleAPIForPartnerOutcome;
			typedef std::future<DispatchConsoleAPIForPartnerOutcome> DispatchConsoleAPIForPartnerOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::DispatchConsoleAPIForPartnerRequest&, const DispatchConsoleAPIForPartnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DispatchConsoleAPIForPartnerAsyncHandler;
			typedef Outcome<Error, Model::GetAppInstanceResult> GetAppInstanceOutcome;
			typedef std::future<GetAppInstanceOutcome> GetAppInstanceOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::GetAppInstanceRequest&, const GetAppInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAppInstanceAsyncHandler;
			typedef Outcome<Error, Model::GetCreateLogoTaskResult> GetCreateLogoTaskOutcome;
			typedef std::future<GetCreateLogoTaskOutcome> GetCreateLogoTaskOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::GetCreateLogoTaskRequest&, const GetCreateLogoTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCreateLogoTaskAsyncHandler;
			typedef Outcome<Error, Model::GetDomainInfoForPartnerResult> GetDomainInfoForPartnerOutcome;
			typedef std::future<GetDomainInfoForPartnerOutcome> GetDomainInfoForPartnerOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::GetDomainInfoForPartnerRequest&, const GetDomainInfoForPartnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDomainInfoForPartnerAsyncHandler;
			typedef Outcome<Error, Model::GetIcpFilingInfoForPartnerResult> GetIcpFilingInfoForPartnerOutcome;
			typedef std::future<GetIcpFilingInfoForPartnerOutcome> GetIcpFilingInfoForPartnerOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::GetIcpFilingInfoForPartnerRequest&, const GetIcpFilingInfoForPartnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetIcpFilingInfoForPartnerAsyncHandler;
			typedef Outcome<Error, Model::GetUserAccessTokenForPartnerResult> GetUserAccessTokenForPartnerOutcome;
			typedef std::future<GetUserAccessTokenForPartnerOutcome> GetUserAccessTokenForPartnerOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::GetUserAccessTokenForPartnerRequest&, const GetUserAccessTokenForPartnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserAccessTokenForPartnerAsyncHandler;
			typedef Outcome<Error, Model::GetUserTmpIdentityForPartnerResult> GetUserTmpIdentityForPartnerOutcome;
			typedef std::future<GetUserTmpIdentityForPartnerOutcome> GetUserTmpIdentityForPartnerOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::GetUserTmpIdentityForPartnerRequest&, const GetUserTmpIdentityForPartnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserTmpIdentityForPartnerAsyncHandler;
			typedef Outcome<Error, Model::ListAppDomainRedirectRecordsResult> ListAppDomainRedirectRecordsOutcome;
			typedef std::future<ListAppDomainRedirectRecordsOutcome> ListAppDomainRedirectRecordsOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::ListAppDomainRedirectRecordsRequest&, const ListAppDomainRedirectRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppDomainRedirectRecordsAsyncHandler;
			typedef Outcome<Error, Model::ListAppInstanceDomainsResult> ListAppInstanceDomainsOutcome;
			typedef std::future<ListAppInstanceDomainsOutcome> ListAppInstanceDomainsOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::ListAppInstanceDomainsRequest&, const ListAppInstanceDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppInstanceDomainsAsyncHandler;
			typedef Outcome<Error, Model::ListAppInstancesResult> ListAppInstancesOutcome;
			typedef std::future<ListAppInstancesOutcome> ListAppInstancesOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::ListAppInstancesRequest&, const ListAppInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppInstancesAsyncHandler;
			typedef Outcome<Error, Model::ModifyAppInstanceSpecResult> ModifyAppInstanceSpecOutcome;
			typedef std::future<ModifyAppInstanceSpecOutcome> ModifyAppInstanceSpecOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::ModifyAppInstanceSpecRequest&, const ModifyAppInstanceSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAppInstanceSpecAsyncHandler;
			typedef Outcome<Error, Model::OperateAppInstanceForPartnerResult> OperateAppInstanceForPartnerOutcome;
			typedef std::future<OperateAppInstanceForPartnerOutcome> OperateAppInstanceForPartnerOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::OperateAppInstanceForPartnerRequest&, const OperateAppInstanceForPartnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateAppInstanceForPartnerAsyncHandler;
			typedef Outcome<Error, Model::OperateAppServiceForPartnerResult> OperateAppServiceForPartnerOutcome;
			typedef std::future<OperateAppServiceForPartnerOutcome> OperateAppServiceForPartnerOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::OperateAppServiceForPartnerRequest&, const OperateAppServiceForPartnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateAppServiceForPartnerAsyncHandler;
			typedef Outcome<Error, Model::RefreshAppInstanceTicketResult> RefreshAppInstanceTicketOutcome;
			typedef std::future<RefreshAppInstanceTicketOutcome> RefreshAppInstanceTicketOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::RefreshAppInstanceTicketRequest&, const RefreshAppInstanceTicketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefreshAppInstanceTicketAsyncHandler;
			typedef Outcome<Error, Model::RefundAppInstanceForPartnerResult> RefundAppInstanceForPartnerOutcome;
			typedef std::future<RefundAppInstanceForPartnerOutcome> RefundAppInstanceForPartnerOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::RefundAppInstanceForPartnerRequest&, const RefundAppInstanceForPartnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RefundAppInstanceForPartnerAsyncHandler;
			typedef Outcome<Error, Model::RenewAppInstanceResult> RenewAppInstanceOutcome;
			typedef std::future<RenewAppInstanceOutcome> RenewAppInstanceOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::RenewAppInstanceRequest&, const RenewAppInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewAppInstanceAsyncHandler;
			typedef Outcome<Error, Model::SearchImageResult> SearchImageOutcome;
			typedef std::future<SearchImageOutcome> SearchImageOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::SearchImageRequest&, const SearchImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchImageAsyncHandler;
			typedef Outcome<Error, Model::SetAppDomainCertificateResult> SetAppDomainCertificateOutcome;
			typedef std::future<SetAppDomainCertificateOutcome> SetAppDomainCertificateOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::SetAppDomainCertificateRequest&, const SetAppDomainCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetAppDomainCertificateAsyncHandler;
			typedef Outcome<Error, Model::SyncAppInstanceForPartnerResult> SyncAppInstanceForPartnerOutcome;
			typedef std::future<SyncAppInstanceForPartnerOutcome> SyncAppInstanceForPartnerOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::SyncAppInstanceForPartnerRequest&, const SyncAppInstanceForPartnerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SyncAppInstanceForPartnerAsyncHandler;
			typedef Outcome<Error, Model::UnbindAppDomainResult> UnbindAppDomainOutcome;
			typedef std::future<UnbindAppDomainOutcome> UnbindAppDomainOutcomeCallable;
			typedef std::function<void(const WebsiteBuildClient*, const Model::UnbindAppDomainRequest&, const UnbindAppDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindAppDomainAsyncHandler;

			WebsiteBuildClient(const Credentials &credentials, const ClientConfiguration &configuration);
			WebsiteBuildClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			WebsiteBuildClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~WebsiteBuildClient();
			BindAppDomainOutcome bindAppDomain(const Model::BindAppDomainRequest &request)const;
			void bindAppDomainAsync(const Model::BindAppDomainRequest& request, const BindAppDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindAppDomainOutcomeCallable bindAppDomainCallable(const Model::BindAppDomainRequest& request) const;
			CreateAppInstanceOutcome createAppInstance(const Model::CreateAppInstanceRequest &request)const;
			void createAppInstanceAsync(const Model::CreateAppInstanceRequest& request, const CreateAppInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAppInstanceOutcomeCallable createAppInstanceCallable(const Model::CreateAppInstanceRequest& request) const;
			CreateAppInstanceTicketOutcome createAppInstanceTicket(const Model::CreateAppInstanceTicketRequest &request)const;
			void createAppInstanceTicketAsync(const Model::CreateAppInstanceTicketRequest& request, const CreateAppInstanceTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAppInstanceTicketOutcomeCallable createAppInstanceTicketCallable(const Model::CreateAppInstanceTicketRequest& request) const;
			CreateLogoTaskOutcome createLogoTask(const Model::CreateLogoTaskRequest &request)const;
			void createLogoTaskAsync(const Model::CreateLogoTaskRequest& request, const CreateLogoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLogoTaskOutcomeCallable createLogoTaskCallable(const Model::CreateLogoTaskRequest& request) const;
			DeleteAppDomainCertificateOutcome deleteAppDomainCertificate(const Model::DeleteAppDomainCertificateRequest &request)const;
			void deleteAppDomainCertificateAsync(const Model::DeleteAppDomainCertificateRequest& request, const DeleteAppDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAppDomainCertificateOutcomeCallable deleteAppDomainCertificateCallable(const Model::DeleteAppDomainCertificateRequest& request) const;
			DeleteAppDomainRedirectOutcome deleteAppDomainRedirect(const Model::DeleteAppDomainRedirectRequest &request)const;
			void deleteAppDomainRedirectAsync(const Model::DeleteAppDomainRedirectRequest& request, const DeleteAppDomainRedirectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAppDomainRedirectOutcomeCallable deleteAppDomainRedirectCallable(const Model::DeleteAppDomainRedirectRequest& request) const;
			DescribeAppDomainDnsRecordOutcome describeAppDomainDnsRecord(const Model::DescribeAppDomainDnsRecordRequest &request)const;
			void describeAppDomainDnsRecordAsync(const Model::DescribeAppDomainDnsRecordRequest& request, const DescribeAppDomainDnsRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAppDomainDnsRecordOutcomeCallable describeAppDomainDnsRecordCallable(const Model::DescribeAppDomainDnsRecordRequest& request) const;
			DispatchConsoleAPIForPartnerOutcome dispatchConsoleAPIForPartner(const Model::DispatchConsoleAPIForPartnerRequest &request)const;
			void dispatchConsoleAPIForPartnerAsync(const Model::DispatchConsoleAPIForPartnerRequest& request, const DispatchConsoleAPIForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DispatchConsoleAPIForPartnerOutcomeCallable dispatchConsoleAPIForPartnerCallable(const Model::DispatchConsoleAPIForPartnerRequest& request) const;
			GetAppInstanceOutcome getAppInstance(const Model::GetAppInstanceRequest &request)const;
			void getAppInstanceAsync(const Model::GetAppInstanceRequest& request, const GetAppInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAppInstanceOutcomeCallable getAppInstanceCallable(const Model::GetAppInstanceRequest& request) const;
			GetCreateLogoTaskOutcome getCreateLogoTask(const Model::GetCreateLogoTaskRequest &request)const;
			void getCreateLogoTaskAsync(const Model::GetCreateLogoTaskRequest& request, const GetCreateLogoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCreateLogoTaskOutcomeCallable getCreateLogoTaskCallable(const Model::GetCreateLogoTaskRequest& request) const;
			GetDomainInfoForPartnerOutcome getDomainInfoForPartner(const Model::GetDomainInfoForPartnerRequest &request)const;
			void getDomainInfoForPartnerAsync(const Model::GetDomainInfoForPartnerRequest& request, const GetDomainInfoForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDomainInfoForPartnerOutcomeCallable getDomainInfoForPartnerCallable(const Model::GetDomainInfoForPartnerRequest& request) const;
			GetIcpFilingInfoForPartnerOutcome getIcpFilingInfoForPartner(const Model::GetIcpFilingInfoForPartnerRequest &request)const;
			void getIcpFilingInfoForPartnerAsync(const Model::GetIcpFilingInfoForPartnerRequest& request, const GetIcpFilingInfoForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetIcpFilingInfoForPartnerOutcomeCallable getIcpFilingInfoForPartnerCallable(const Model::GetIcpFilingInfoForPartnerRequest& request) const;
			GetUserAccessTokenForPartnerOutcome getUserAccessTokenForPartner(const Model::GetUserAccessTokenForPartnerRequest &request)const;
			void getUserAccessTokenForPartnerAsync(const Model::GetUserAccessTokenForPartnerRequest& request, const GetUserAccessTokenForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserAccessTokenForPartnerOutcomeCallable getUserAccessTokenForPartnerCallable(const Model::GetUserAccessTokenForPartnerRequest& request) const;
			GetUserTmpIdentityForPartnerOutcome getUserTmpIdentityForPartner(const Model::GetUserTmpIdentityForPartnerRequest &request)const;
			void getUserTmpIdentityForPartnerAsync(const Model::GetUserTmpIdentityForPartnerRequest& request, const GetUserTmpIdentityForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserTmpIdentityForPartnerOutcomeCallable getUserTmpIdentityForPartnerCallable(const Model::GetUserTmpIdentityForPartnerRequest& request) const;
			ListAppDomainRedirectRecordsOutcome listAppDomainRedirectRecords(const Model::ListAppDomainRedirectRecordsRequest &request)const;
			void listAppDomainRedirectRecordsAsync(const Model::ListAppDomainRedirectRecordsRequest& request, const ListAppDomainRedirectRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppDomainRedirectRecordsOutcomeCallable listAppDomainRedirectRecordsCallable(const Model::ListAppDomainRedirectRecordsRequest& request) const;
			ListAppInstanceDomainsOutcome listAppInstanceDomains(const Model::ListAppInstanceDomainsRequest &request)const;
			void listAppInstanceDomainsAsync(const Model::ListAppInstanceDomainsRequest& request, const ListAppInstanceDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppInstanceDomainsOutcomeCallable listAppInstanceDomainsCallable(const Model::ListAppInstanceDomainsRequest& request) const;
			ListAppInstancesOutcome listAppInstances(const Model::ListAppInstancesRequest &request)const;
			void listAppInstancesAsync(const Model::ListAppInstancesRequest& request, const ListAppInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppInstancesOutcomeCallable listAppInstancesCallable(const Model::ListAppInstancesRequest& request) const;
			ModifyAppInstanceSpecOutcome modifyAppInstanceSpec(const Model::ModifyAppInstanceSpecRequest &request)const;
			void modifyAppInstanceSpecAsync(const Model::ModifyAppInstanceSpecRequest& request, const ModifyAppInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAppInstanceSpecOutcomeCallable modifyAppInstanceSpecCallable(const Model::ModifyAppInstanceSpecRequest& request) const;
			OperateAppInstanceForPartnerOutcome operateAppInstanceForPartner(const Model::OperateAppInstanceForPartnerRequest &request)const;
			void operateAppInstanceForPartnerAsync(const Model::OperateAppInstanceForPartnerRequest& request, const OperateAppInstanceForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateAppInstanceForPartnerOutcomeCallable operateAppInstanceForPartnerCallable(const Model::OperateAppInstanceForPartnerRequest& request) const;
			OperateAppServiceForPartnerOutcome operateAppServiceForPartner(const Model::OperateAppServiceForPartnerRequest &request)const;
			void operateAppServiceForPartnerAsync(const Model::OperateAppServiceForPartnerRequest& request, const OperateAppServiceForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateAppServiceForPartnerOutcomeCallable operateAppServiceForPartnerCallable(const Model::OperateAppServiceForPartnerRequest& request) const;
			RefreshAppInstanceTicketOutcome refreshAppInstanceTicket(const Model::RefreshAppInstanceTicketRequest &request)const;
			void refreshAppInstanceTicketAsync(const Model::RefreshAppInstanceTicketRequest& request, const RefreshAppInstanceTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefreshAppInstanceTicketOutcomeCallable refreshAppInstanceTicketCallable(const Model::RefreshAppInstanceTicketRequest& request) const;
			RefundAppInstanceForPartnerOutcome refundAppInstanceForPartner(const Model::RefundAppInstanceForPartnerRequest &request)const;
			void refundAppInstanceForPartnerAsync(const Model::RefundAppInstanceForPartnerRequest& request, const RefundAppInstanceForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RefundAppInstanceForPartnerOutcomeCallable refundAppInstanceForPartnerCallable(const Model::RefundAppInstanceForPartnerRequest& request) const;
			RenewAppInstanceOutcome renewAppInstance(const Model::RenewAppInstanceRequest &request)const;
			void renewAppInstanceAsync(const Model::RenewAppInstanceRequest& request, const RenewAppInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewAppInstanceOutcomeCallable renewAppInstanceCallable(const Model::RenewAppInstanceRequest& request) const;
			SearchImageOutcome searchImage(const Model::SearchImageRequest &request)const;
			void searchImageAsync(const Model::SearchImageRequest& request, const SearchImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchImageOutcomeCallable searchImageCallable(const Model::SearchImageRequest& request) const;
			SetAppDomainCertificateOutcome setAppDomainCertificate(const Model::SetAppDomainCertificateRequest &request)const;
			void setAppDomainCertificateAsync(const Model::SetAppDomainCertificateRequest& request, const SetAppDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetAppDomainCertificateOutcomeCallable setAppDomainCertificateCallable(const Model::SetAppDomainCertificateRequest& request) const;
			SyncAppInstanceForPartnerOutcome syncAppInstanceForPartner(const Model::SyncAppInstanceForPartnerRequest &request)const;
			void syncAppInstanceForPartnerAsync(const Model::SyncAppInstanceForPartnerRequest& request, const SyncAppInstanceForPartnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SyncAppInstanceForPartnerOutcomeCallable syncAppInstanceForPartnerCallable(const Model::SyncAppInstanceForPartnerRequest& request) const;
			UnbindAppDomainOutcome unbindAppDomain(const Model::UnbindAppDomainRequest &request)const;
			void unbindAppDomainAsync(const Model::UnbindAppDomainRequest& request, const UnbindAppDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindAppDomainOutcomeCallable unbindAppDomainCallable(const Model::UnbindAppDomainRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_WEBSITEBUILD_WEBSITEBUILDCLIENT_H_
