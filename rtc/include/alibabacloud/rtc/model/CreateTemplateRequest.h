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

#ifndef ALIBABACLOUD_RTC_MODEL_CREATETEMPLATEREQUEST_H_
#define ALIBABACLOUD_RTC_MODEL_CREATETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/rtc/RtcExport.h>

namespace AlibabaCloud
{
	namespace Rtc
	{
		namespace Model
		{
			class ALIBABACLOUD_RTC_EXPORT CreateTemplateRequest : public RpcServiceRequest
			{
				struct LiveConfig
				{
					std::string domainName;
					std::string appName;
				};
				struct RecordConfig
				{
					std::string storageType;
					int fileFormat;
					std::string ossEndPoint;
					std::string ossBucket;
					int vodTransCodeGroupId;
				};
				struct LayOut
				{
					std::string color;
					int cutMode;
					int layOutId;
				};

			public:
				CreateTemplateRequest();
				~CreateTemplateRequest();

				int getServiceMode()const;
				void setServiceMode(int serviceMode);
				std::vector<LiveConfig> getLiveConfig()const;
				void setLiveConfig(const std::vector<LiveConfig>& liveConfig);
				long getCallerParentId()const;
				void setCallerParentId(long callerParentId);
				bool getProxy_original_security_transport()const;
				void setProxy_original_security_transport(bool proxy_original_security_transport);
				int getMediaConfig()const;
				void setMediaConfig(int mediaConfig);
				int getMaxMixStreamCount()const;
				void setMaxMixStreamCount(int maxMixStreamCount);
				std::string getProxy_original_source_ip()const;
				void setProxy_original_source_ip(const std::string& proxy_original_source_ip);
				std::string getOwnerIdLoginEmail()const;
				void setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail);
				std::string getCallerType()const;
				void setCallerType(const std::string& callerType);
				std::vector<RecordConfig> getRecordConfig()const;
				void setRecordConfig(const std::vector<RecordConfig>& recordConfig);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getRequestContent()const;
				void setRequestContent(const std::string& requestContent);
				std::string getCallerBidEmail()const;
				void setCallerBidEmail(const std::string& callerBidEmail);
				std::string getCallerUidEmail()const;
				void setCallerUidEmail(const std::string& callerUidEmail);
				long getCallerUid()const;
				void setCallerUid(long callerUid);
				std::string getApp_ip()const;
				void setApp_ip(const std::string& app_ip);
				std::string getPopProduct()const;
				void setPopProduct(const std::string& popProduct);
				std::string getCallerBid()const;
				void setCallerBid(const std::string& callerBid);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getVersion()const;
				void setVersion(const std::string& version);
				bool getProxy_trust_transport_info()const;
				void setProxy_trust_transport_info(bool proxy_trust_transport_info);
				bool getAk_mfa_present()const;
				void setAk_mfa_present(bool ak_mfa_present);
				bool getSecurity_transport()const;
				void setSecurity_transport(bool security_transport);
				std::vector<LayOut> getLayOut()const;
				void setLayOut(const std::vector<LayOut>& layOut);
				std::string getRequestId()const;
				void setRequestId(const std::string& requestId);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				std::string getCallBack()const;
				void setCallBack(const std::string& callBack);
				int getMixMode()const;
				void setMixMode(int mixMode);

            private:
				int serviceMode_;
				std::vector<LiveConfig> liveConfig_;
				long callerParentId_;
				bool proxy_original_security_transport_;
				int mediaConfig_;
				int maxMixStreamCount_;
				std::string proxy_original_source_ip_;
				std::string ownerIdLoginEmail_;
				std::string callerType_;
				std::vector<RecordConfig> recordConfig_;
				std::string accessKeyId_;
				std::string securityToken_;
				std::string requestContent_;
				std::string callerBidEmail_;
				std::string callerUidEmail_;
				long callerUid_;
				std::string app_ip_;
				std::string popProduct_;
				std::string callerBid_;
				long ownerId_;
				std::string version_;
				bool proxy_trust_transport_info_;
				bool ak_mfa_present_;
				bool security_transport_;
				std::vector<LayOut> layOut_;
				std::string requestId_;
				std::string appId_;
				std::string callBack_;
				int mixMode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RTC_MODEL_CREATETEMPLATEREQUEST_H_