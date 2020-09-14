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

#ifndef ALIBABACLOUD_VCS_MODEL_SEARCHOBJECTREQUEST_H_
#define ALIBABACLOUD_VCS_MODEL_SEARCHOBJECTREQUEST_H_

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
			class ALIBABACLOUD_VCS_EXPORT SearchObjectRequest : public RpcServiceRequest
			{

			public:
				SearchObjectRequest();
				~SearchObjectRequest();

				std::string getCorpId()const;
				void setCorpId(const std::string& corpId);
				long getStartTime()const;
				void setStartTime(long startTime);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getPicContent()const;
				void setPicContent(const std::string& picContent);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getObjectType()const;
				void setObjectType(const std::string& objectType);
				std::string getAlgorithmType()const;
				void setAlgorithmType(const std::string& algorithmType);
				long getEndTime()const;
				void setEndTime(long endTime);
				std::map<std::string, std::string> getDeviceList()const;
				void setDeviceList(const std::map<std::string, std::string>& deviceList);
				std::string getPicUrl()const;
				void setPicUrl(const std::string& picUrl);
				std::string getImagePath()const;
				void setImagePath(const std::string& imagePath);
				std::string getConditions()const;
				void setConditions(const std::string& conditions);

            private:
				std::string corpId_;
				long startTime_;
				int pageNumber_;
				std::string picContent_;
				int pageSize_;
				std::string objectType_;
				std::string algorithmType_;
				long endTime_;
				std::map<std::string, std::string> deviceList_;
				std::string picUrl_;
				std::string imagePath_;
				std::string conditions_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_SEARCHOBJECTREQUEST_H_