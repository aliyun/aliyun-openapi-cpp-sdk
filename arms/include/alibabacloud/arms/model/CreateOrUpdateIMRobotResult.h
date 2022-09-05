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

#ifndef ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATEIMROBOTRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATEIMROBOTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT CreateOrUpdateIMRobotResult : public ServiceResult
			{
			public:
				struct AlertRobot
				{
					std::string cardTemplate;
					std::string type;
					float robotId;
					std::string robotName;
					std::string robotAddress;
					std::string dailyNocTime;
					bool dailyNoc;
					std::string token;
					bool enableOutgoing;
				};


				CreateOrUpdateIMRobotResult();
				explicit CreateOrUpdateIMRobotResult(const std::string &payload);
				~CreateOrUpdateIMRobotResult();
				AlertRobot getAlertRobot()const;

			protected:
				void parse(const std::string &payload);
			private:
				AlertRobot alertRobot_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_CREATEORUPDATEIMROBOTRESULT_H_