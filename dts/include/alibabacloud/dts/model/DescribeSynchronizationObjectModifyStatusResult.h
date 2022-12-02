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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBESYNCHRONIZATIONOBJECTMODIFYSTATUSRESULT_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBESYNCHRONIZATIONOBJECTMODIFYSTATUSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT DescribeSynchronizationObjectModifyStatusResult : public ServiceResult
			{
			public:
				struct DataInitializationStatus
				{
					std::string status;
					std::string progress;
					std::string percent;
					std::string errorMessage;
				};
				struct DataSynchronizationStatus
				{
					std::string status;
					std::string percent;
					std::string errorMessage;
					std::string delay;
				};
				struct PrecheckStatus
				{
					struct CheckItem
					{
						std::string repairMethod;
						std::string checkStatus;
						std::string itemName;
						std::string errorMessage;
					};
					std::string status;
					std::string percent;
					std::vector<CheckItem> detail;
				};
				struct StructureInitializationStatus
				{
					std::string status;
					std::string progress;
					std::string percent;
					std::string errorMessage;
				};


				DescribeSynchronizationObjectModifyStatusResult();
				explicit DescribeSynchronizationObjectModifyStatusResult(const std::string &payload);
				~DescribeSynchronizationObjectModifyStatusResult();
				std::string getStatus()const;
				PrecheckStatus getPrecheckStatus()const;
				DataInitializationStatus getDataInitializationStatus()const;
				std::string getErrorMessage()const;
				std::string getErrMessage()const;
				std::string getSuccess()const;
				DataSynchronizationStatus getDataSynchronizationStatus()const;
				StructureInitializationStatus getStructureInitializationStatus()const;
				std::string getErrCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				PrecheckStatus precheckStatus_;
				DataInitializationStatus dataInitializationStatus_;
				std::string errorMessage_;
				std::string errMessage_;
				std::string success_;
				DataSynchronizationStatus dataSynchronizationStatus_;
				StructureInitializationStatus structureInitializationStatus_;
				std::string errCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBESYNCHRONIZATIONOBJECTMODIFYSTATUSRESULT_H_