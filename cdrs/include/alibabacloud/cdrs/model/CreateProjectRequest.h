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

#ifndef ALIBABACLOUD_CDRS_MODEL_CREATEPROJECTREQUEST_H_
#define ALIBABACLOUD_CDRS_MODEL_CREATEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cdrs/CDRSExport.h>

namespace AlibabaCloud
{
	namespace CDRS
	{
		namespace Model
		{
			class ALIBABACLOUD_CDRS_EXPORT CreateProjectRequest : public RpcServiceRequest
			{

			public:
				CreateProjectRequest();
				~CreateProjectRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getIcon()const;
				void setIcon(const std::string& icon);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getAppName()const;
				void setAppName(const std::string& appName);
				std::string get_NameSpace()const;
				void set_NameSpace(const std::string& _nameSpace);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getAggregateSceneCode()const;
				void setAggregateSceneCode(const std::string& aggregateSceneCode);

            private:
				std::string clientToken_;
				std::string icon_;
				std::string description_;
				std::string appName_;
				std::string _nameSpace_;
				std::string name_;
				std::string aggregateSceneCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDRS_MODEL_CREATEPROJECTREQUEST_H_