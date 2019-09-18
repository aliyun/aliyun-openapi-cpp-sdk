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

				int getImageCount()const;
				void setImageCount(int imageCount);
				std::string getActionPoint()const;
				void setActionPoint(const std::string& actionPoint);
				std::string getLogoImagePath()const;
				void setLogoImagePath(const std::string& logoImagePath);
				int getType()const;
				void setType(int type);
				std::vector<std::string> getMajorImagePath()const;
				void setMajorImagePath(const std::vector<std::string>& majorImagePath);
				int getWidth()const;
				void setWidth(int width);
				std::vector<std::string> getCopyWrite()const;
				void setCopyWrite(const std::vector<std::string>& copyWrite);
				std::vector<long> getPropertyId()const;
				void setPropertyId(const std::vector<long>& propertyId);
				int getHeight()const;
				void setHeight(int height);

            private:
				int imageCount_;
				std::string actionPoint_;
				std::string logoImagePath_;
				int type_;
				std::vector<std::string> majorImagePath_;
				int width_;
				std::vector<std::string> copyWrite_;
				std::vector<long> propertyId_;
				int height_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LUBANCLOUD_MODEL_SUBMITGENERATETASKREQUEST_H_