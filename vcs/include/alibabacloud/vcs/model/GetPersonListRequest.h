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

#ifndef ALIBABACLOUD_VCS_MODEL_GETPERSONLISTREQUEST_H_
#define ALIBABACLOUD_VCS_MODEL_GETPERSONLISTREQUEST_H_

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
			class ALIBABACLOUD_VCS_EXPORT GetPersonListRequest : public RpcServiceRequest
			{

			public:
				GetPersonListRequest();
				~GetPersonListRequest();

				std::string getCorpId()const;
				void setCorpId(const std::string& corpId);
				std::string getFaceMatchingRateThreshold()const;
				void setFaceMatchingRateThreshold(const std::string& faceMatchingRateThreshold);
				long getPageNumber()const;
				void setPageNumber(long pageNumber);
				std::map<std::string, std::string> getCorpIdList()const;
				void setCorpIdList(const std::map<std::string, std::string>& corpIdList);
				std::string getFaceUrl()const;
				void setFaceUrl(const std::string& faceUrl);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::map<std::string, std::string> getPersonIdList()const;
				void setPersonIdList(const std::map<std::string, std::string>& personIdList);

            private:
				std::string corpId_;
				std::string faceMatchingRateThreshold_;
				long pageNumber_;
				std::map<std::string, std::string> corpIdList_;
				std::string faceUrl_;
				long pageSize_;
				std::map<std::string, std::string> personIdList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_GETPERSONLISTREQUEST_H_