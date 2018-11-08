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

#ifndef ALIBABACLOUD_LUBANCLOUD_MODEL_SUBMITGENERATETASKREQUEST_H_
#define ALIBABACLOUD_LUBANCLOUD_MODEL_SUBMITGENERATETASKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/lubancloud/LubancloudExport.h>

namespace AlibabaCloud
{
	namespace Lubancloud
	{
		namespace Model
		{
			class ALIBABACLOUD_LUBANCLOUD_EXPORT SubmitGenerateTaskRequest : public RpcServiceRequest
			{

			public:
				SubmitGenerateTaskRequest();
				~SubmitGenerateTaskRequest();

				std::string getApp_ip()const;
				void setApp_ip(const std::string& app_ip);
				int getImageCount()const;
				void setImageCount(int imageCount);
				long getCallerParentId()const;
				void setCallerParentId(long callerParentId);
				std::string getActionPoint()const;
				void setActionPoint(const std::string& actionPoint);
				std::string getLogoImagePath()const;
				void setLogoImagePath(const std::string& logoImagePath);
				int getType()const;
				void setType(int type);
				std::string getCallerType()const;
				void setCallerType(const std::string& callerType);
				bool getAk_mfa_present()const;
				void setAk_mfa_present(bool ak_mfa_present);
				bool getSecurity_transport()const;
				void setSecurity_transport(bool security_transport);
				std::vector<std::string> getMajorImagePath()const;
				void setMajorImagePath(const std::vector<std::string>& majorImagePath);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getRequestId()const;
				void setRequestId(const std::string& requestId);
				int getWidth()const;
				void setWidth(int width);
				std::vector<std::string> getCopyWrite()const;
				void setCopyWrite(const std::vector<std::string>& copyWrite);
				std::vector<long> getPropertyId()const;
				void setPropertyId(const std::vector<long>& propertyId);
				long getCallerUid()const;
				void setCallerUid(long callerUid);
				int getHeight()const;
				void setHeight(int height);

            private:
				std::string app_ip_;
				int imageCount_;
				long callerParentId_;
				std::string actionPoint_;
				std::string logoImagePath_;
				int type_;
				std::string callerType_;
				bool ak_mfa_present_;
				bool security_transport_;
				std::vector<std::string> majorImagePath_;
				std::string regionId_;
				std::string requestId_;
				int width_;
				std::vector<std::string> copyWrite_;
				std::vector<long> propertyId_;
				long callerUid_;
				int height_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LUBANCLOUD_MODEL_SUBMITGENERATETASKREQUEST_H_