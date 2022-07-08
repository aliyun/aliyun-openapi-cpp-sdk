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

#ifndef ALIBABACLOUD_ACTIONTRAIL_MODEL_GETDELIVERYHISTORYJOBRESULT_H_
#define ALIBABACLOUD_ACTIONTRAIL_MODEL_GETDELIVERYHISTORYJOBRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/actiontrail/ActiontrailExport.h>

namespace AlibabaCloud
{
	namespace Actiontrail
	{
		namespace Model
		{
			class ALIBABACLOUD_ACTIONTRAIL_EXPORT GetDeliveryHistoryJobResult : public ServiceResult
			{
			public:
				struct StatusItem
				{
					int status;
					std::string region;
				};


				GetDeliveryHistoryJobResult();
				explicit GetDeliveryHistoryJobResult(const std::string &payload);
				~GetDeliveryHistoryJobResult();
				std::vector<StatusItem> getStatus()const;
				int getJobStatus()const;
				std::string getCreatedTime()const;
				std::string getEndTime()const;
				std::string getHomeRegion()const;
				std::string getStartTime()const;
				std::string getTrailName()const;
				std::string getUpdatedTime()const;
				long getJobId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<StatusItem> status_;
				int jobStatus_;
				std::string createdTime_;
				std::string endTime_;
				std::string homeRegion_;
				std::string startTime_;
				std::string trailName_;
				std::string updatedTime_;
				long jobId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ACTIONTRAIL_MODEL_GETDELIVERYHISTORYJOBRESULT_H_