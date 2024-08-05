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

#ifndef ALIBABACLOUD_ARMS_MODEL_GETSYNTHETICMONITORSRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_GETSYNTHETICMONITORSRESULT_H_

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
			class ALIBABACLOUD_ARMS_EXPORT GetSyntheticMonitorsResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					std::string cityCode;
					bool canBeSelected;
					int clientType;
					int ipv6;
					std::string country;
					std::string region;
					std::string operatorCode;
					std::string _operator;
					std::string available;
					std::string city;
				};


				GetSyntheticMonitorsResult();
				explicit GetSyntheticMonitorsResult(const std::string &payload);
				~GetSyntheticMonitorsResult();
				std::string getMessage()const;
				std::vector<DataItem> getData()const;
				long getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<DataItem> data_;
				long code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_GETSYNTHETICMONITORSRESULT_H_