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

#ifndef ALIBABACLOUD_IOT_MODEL_BATCHGETEDGEDRIVERRESULT_H_
#define ALIBABACLOUD_IOT_MODEL_BATCHGETEDGEDRIVERRESULT_H_

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
			class ALIBABACLOUD_IOT_EXPORT BatchGetEdgeDriverResult : public ServiceResult
			{
			public:
				struct Driver
				{
					std::string driverProtocol;
					std::string driverId;
					std::string runtime;
					int type;
					long gmtCreateTimestamp;
					std::string driverName;
					long gmtModifiedTimestamp;
					int useOfficialConfig;
					std::string cpuArch;
					bool isBuiltIn;
				};


				BatchGetEdgeDriverResult();
				explicit BatchGetEdgeDriverResult(const std::string &payload);
				~BatchGetEdgeDriverResult();
				std::vector<Driver> getDriverList()const;
				std::string getErrorMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Driver> driverList_;
				std::string errorMessage_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IOT_MODEL_BATCHGETEDGEDRIVERRESULT_H_