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

#ifndef ALIBABACLOUD_FOAS_MODEL_UPDATEPACKAGEREQUEST_H_
#define ALIBABACLOUD_FOAS_MODEL_UPDATEPACKAGEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/foas/FoasExport.h>

namespace AlibabaCloud
{
	namespace Foas
	{
		namespace Model
		{
			class ALIBABACLOUD_FOAS_EXPORT UpdatePackageRequest : public RoaServiceRequest
			{

			public:
				UpdatePackageRequest();
				~UpdatePackageRequest();

				std::string getProjectName()const;
				void setProjectName(const std::string& projectName);
				std::string getOssBucket()const;
				void setOssBucket(const std::string& ossBucket);
				std::string getOssOwner()const;
				void setOssOwner(const std::string& ossOwner);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getPackageName()const;
				void setPackageName(const std::string& packageName);
				std::string getOssEndpoint()const;
				void setOssEndpoint(const std::string& ossEndpoint);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getTag()const;
				void setTag(const std::string& tag);
				std::string getOriginName()const;
				void setOriginName(const std::string& originName);
				std::string getOssPath()const;
				void setOssPath(const std::string& ossPath);
				std::string getMd5()const;
				void setMd5(const std::string& md5);

            private:
				std::string projectName_;
				std::string ossBucket_;
				std::string ossOwner_;
				std::string regionId_;
				std::string packageName_;
				std::string ossEndpoint_;
				std::string description_;
				std::string tag_;
				std::string originName_;
				std::string ossPath_;
				std::string md5_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FOAS_MODEL_UPDATEPACKAGEREQUEST_H_