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

#ifndef ALIBABACLOUD_VCS_MODEL_LISTCORPGROUPMETRICSREQUEST_H_
#define ALIBABACLOUD_VCS_MODEL_LISTCORPGROUPMETRICSREQUEST_H_

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
			class ALIBABACLOUD_VCS_EXPORT ListCorpGroupMetricsRequest : public RpcServiceRequest
			{

			public:
				ListCorpGroupMetricsRequest();
				~ListCorpGroupMetricsRequest();

				std::string getCorpId()const;
				void setCorpId(const std::string& corpId);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getDeviceId()const;
				void setDeviceId(const std::string& deviceId);
				std::string getPageNumber()const;
				void setPageNumber(const std::string& pageNumber);
				std::string getDeviceGroup()const;
				void setDeviceGroup(const std::string& deviceGroup);
				std::string getTagCode()const;
				void setTagCode(const std::string& tagCode);
				std::string getPageSize()const;
				void setPageSize(const std::string& pageSize);
				std::string getUserGroup()const;
				void setUserGroup(const std::string& userGroup);

            private:
				std::string corpId_;
				std::string groupId_;
				std::string endTime_;
				std::string startTime_;
				std::string deviceId_;
				std::string pageNumber_;
				std::string deviceGroup_;
				std::string tagCode_;
				std::string pageSize_;
				std::string userGroup_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_LISTCORPGROUPMETRICSREQUEST_H_