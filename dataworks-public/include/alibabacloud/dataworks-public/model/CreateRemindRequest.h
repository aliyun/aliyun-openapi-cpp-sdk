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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEREMINDREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEREMINDREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT CreateRemindRequest : public RpcServiceRequest
			{

			public:
				CreateRemindRequest();
				~CreateRemindRequest();

				std::string getDndEnd()const;
				void setDndEnd(const std::string& dndEnd);
				std::string getAlertUnit()const;
				void setAlertUnit(const std::string& alertUnit);
				std::string getRemindUnit()const;
				void setRemindUnit(const std::string& remindUnit);
				int getAlertInterval()const;
				void setAlertInterval(int alertInterval);
				std::string getAlertMethods()const;
				void setAlertMethods(const std::string& alertMethods);
				std::string getRobotUrls()const;
				void setRobotUrls(const std::string& robotUrls);
				int getMaxAlertTimes()const;
				void setMaxAlertTimes(int maxAlertTimes);
				std::string getBizProcessIds()const;
				void setBizProcessIds(const std::string& bizProcessIds);
				std::string getRemindType()const;
				void setRemindType(const std::string& remindType);
				std::string getAlertTargets()const;
				void setAlertTargets(const std::string& alertTargets);
				std::string getBaselineIds()const;
				void setBaselineIds(const std::string& baselineIds);
				std::string getDetail()const;
				void setDetail(const std::string& detail);
				std::string getRemindName()const;
				void setRemindName(const std::string& remindName);
				long getProjectId()const;
				void setProjectId(long projectId);
				std::string getNodeIds()const;
				void setNodeIds(const std::string& nodeIds);

            private:
				std::string dndEnd_;
				std::string alertUnit_;
				std::string remindUnit_;
				int alertInterval_;
				std::string alertMethods_;
				std::string robotUrls_;
				int maxAlertTimes_;
				std::string bizProcessIds_;
				std::string remindType_;
				std::string alertTargets_;
				std::string baselineIds_;
				std::string detail_;
				std::string remindName_;
				long projectId_;
				std::string nodeIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_CREATEREMINDREQUEST_H_