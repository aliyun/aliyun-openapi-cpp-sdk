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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEESLDEVICESRESULT_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEESLDEVICESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloudesl/CloudeslExport.h>

namespace AlibabaCloud
{
	namespace Cloudesl
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDESL_EXPORT DescribeEslDevicesResult : public ServiceResult
			{
			public:
				struct EslDeviceInfo
				{
					int itemActionPrice;
					int batteryLevel;
					std::string itemPriceUnit;
					std::string companyId;
					std::string itemBarCode;
					std::string vendor;
					std::string screenHeight;
					std::string lastCommunicateTime;
					long itemId;
					std::string mac;
					std::string beBind;
					std::string eslBarCode;
					std::string type;
					std::string storeId;
					std::string connectAp;
					std::string itemTitle;
					std::string model;
					std::string screenWidth;
					std::string eslStatus;
					std::string positionCode;
					std::string shelfCode;
				};


				DescribeEslDevicesResult();
				explicit DescribeEslDevicesResult(const std::string &payload);
				~DescribeEslDevicesResult();
				int getTotalCount()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<EslDeviceInfo> getEslDevices()const;
				std::string getErrorCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string message_;
				int pageSize_;
				int pageNumber_;
				std::vector<EslDeviceInfo> eslDevices_;
				std::string errorCode_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEESLDEVICESRESULT_H_