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

#ifndef ALIBABACLOUD_CLOUDAPI_MODEL_CREATEAPIGROUPRESULT_H_
#define ALIBABACLOUD_CLOUDAPI_MODEL_CREATEAPIGROUPRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloudapi/CloudAPIExport.h>

namespace AlibabaCloud
{
	namespace CloudAPI
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAPI_EXPORT CreateApiGroupResult : public ServiceResult
			{
			public:


				CreateApiGroupResult();
				explicit CreateApiGroupResult(const std::string &payload);
				~CreateApiGroupResult();
				std::string getGroupName()const;
				std::string getSubDomain()const;
				std::string getDescription()const;
				std::string getInstanceId()const;
				bool getTagStatus()const;
				std::string getBasePath()const;
				std::string getInstanceType()const;
				std::string getGroupId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string groupName_;
				std::string subDomain_;
				std::string description_;
				std::string instanceId_;
				bool tagStatus_;
				std::string basePath_;
				std::string instanceType_;
				std::string groupId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAPI_MODEL_CREATEAPIGROUPRESULT_H_