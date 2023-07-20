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

#ifndef ALIBABACLOUD_SAS_MODEL_GETCHECKCONFIGRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_GETCHECKCONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT GetCheckConfigResult : public ServiceResult
			{
			public:
				struct Standard
				{
					std::string status;
					std::string type;
					long id;
					std::string showName;
				};
				struct SelectedCheck
				{
					long checkId;
					long sectionId;
				};


				GetCheckConfigResult();
				explicit GetCheckConfigResult(const std::string &payload);
				~GetCheckConfigResult();
				std::vector<SelectedCheck> getSelectedChecks()const;
				int getEndTime()const;
				bool getEnableAutoCheck()const;
				std::vector<std::string> getCycleDays()const;
				bool getEnableAddCheck()const;
				int getStartTime()const;
				std::string getData()const;
				std::vector<Standard> getStandards()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<SelectedCheck> selectedChecks_;
				int endTime_;
				bool enableAutoCheck_;
				std::vector<std::string> cycleDays_;
				bool enableAddCheck_;
				int startTime_;
				std::string data_;
				std::vector<Standard> standards_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_GETCHECKCONFIGRESULT_H_