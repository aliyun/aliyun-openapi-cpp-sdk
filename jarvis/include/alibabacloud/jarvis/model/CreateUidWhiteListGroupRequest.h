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

#ifndef ALIBABACLOUD_JARVIS_MODEL_CREATEUIDWHITELISTGROUPREQUEST_H_
#define ALIBABACLOUD_JARVIS_MODEL_CREATEUIDWHITELISTGROUPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/jarvis/JarvisExport.h>

namespace AlibabaCloud
{
	namespace Jarvis
	{
		namespace Model
		{
			class ALIBABACLOUD_JARVIS_EXPORT CreateUidWhiteListGroupRequest : public RpcServiceRequest
			{

			public:
				CreateUidWhiteListGroupRequest();
				~CreateUidWhiteListGroupRequest();

				std::string getNote()const;
				void setNote(const std::string& note);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getDstPort()const;
				void setDstPort(int dstPort);
				std::string getInstanceIdList()const;
				void setInstanceIdList(const std::string& instanceIdList);
				int getLiveTime()const;
				void setLiveTime(int liveTime);
				std::string getProductName()const;
				void setProductName(const std::string& productName);
				int getWhiteListType()const;
				void setWhiteListType(int whiteListType);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getSrcUid()const;
				void setSrcUid(const std::string& srcUid);
				std::string getSourceCode()const;
				void setSourceCode(const std::string& sourceCode);

            private:
				std::string note_;
				long resourceOwnerId_;
				std::string sourceIp_;
				int dstPort_;
				std::string instanceIdList_;
				int liveTime_;
				std::string productName_;
				int whiteListType_;
				std::string lang_;
				std::string srcUid_;
				std::string sourceCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_JARVIS_MODEL_CREATEUIDWHITELISTGROUPREQUEST_H_