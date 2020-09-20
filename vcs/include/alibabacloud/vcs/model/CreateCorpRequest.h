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

#ifndef ALIBABACLOUD_VCS_MODEL_CREATECORPREQUEST_H_
#define ALIBABACLOUD_VCS_MODEL_CREATECORPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vcs/VcsExport.h>

namespace AlibabaCloud
{
	namespace Vcs
	{
		namespace Model
		{
			class ALIBABACLOUD_VCS_EXPORT CreateCorpRequest : public RpcServiceRequest
			{

			public:
				CreateCorpRequest();
				~CreateCorpRequest();

				std::string getAlgorithmType()const;
				void setAlgorithmType(const std::string& algorithmType);
				std::string getIsvSubId()const;
				void setIsvSubId(const std::string& isvSubId);
				std::string getParentCorpId()const;
				void setParentCorpId(const std::string& parentCorpId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getIconPath()const;
				void setIconPath(const std::string& iconPath);
				std::string getAppName()const;
				void setAppName(const std::string& appName);
				std::string getCorpName()const;
				void setCorpName(const std::string& corpName);

            private:
				std::string algorithmType_;
				std::string isvSubId_;
				std::string parentCorpId_;
				std::string description_;
				std::string iconPath_;
				std::string appName_;
				std::string corpName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_CREATECORPREQUEST_H_