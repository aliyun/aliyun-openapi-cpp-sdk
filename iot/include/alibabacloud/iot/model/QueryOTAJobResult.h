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

#ifndef ALIBABACLOUD_IOT_MODEL_QUERYOTAJOBRESULT_H_
#define ALIBABACLOUD_IOT_MODEL_QUERYOTAJOBRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/iot/IotExport.h>

namespace AlibabaCloud
{
	namespace Iot
	{
		namespace Model
		{
			class ALIBABACLOUD_IOT_EXPORT QueryOTAJobResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct OtaTagDTO
					{
						std::string value;
						std::string key;
					};
					std::string groupName;
					std::string utcEndTime;
					bool needPush;
					int overwriteMode;
					std::string firmwareId;
					bool multiModuleMode;
					std::string name;
					std::string jobStatus;
					int retryCount;
					std::string selectionType;
					int dynamicMode;
					std::string destVersion;
					std::string targetSelection;
					std::vector<OtaTagDTO> tags;
					std::string jobId;
					std::string productKey;
					std::string utcStartTime;
					std::string utcScheduleFinishTime;
					std::vector<std::string> srcVersions;
					bool needConfirm;
					std::string groupId;
					std::string jobDesc;
					std::string jobType;
					std::string utcCreate;
					int maximumPerMinute;
					std::string downloadProtocol;
					std::string utcModified;
					int retryInterval;
					std::string utcScheduleTime;
					std::string grayPercent;
					int timeoutInMinutes;
				};


				QueryOTAJobResult();
				explicit QueryOTAJobResult(const std::string &payload);
				~QueryOTAJobResult();
				Data getData()const;
				std::string getErrorMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;
				std::string errorMessage_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_QUERYOTAJOBRESULT_H_