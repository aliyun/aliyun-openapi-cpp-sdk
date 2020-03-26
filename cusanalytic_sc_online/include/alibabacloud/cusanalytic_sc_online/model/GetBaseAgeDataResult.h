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

#ifndef ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_GETBASEAGEDATARESULT_H_
#define ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_GETBASEAGEDATARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cusanalytic_sc_online/Cusanalytic_sc_onlineExport.h>

namespace AlibabaCloud
{
	namespace Cusanalytic_sc_online
	{
		namespace Model
		{
			class ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_EXPORT GetBaseAgeDataResult : public ServiceResult
			{
			public:
				struct AgeItem
				{
					int count;
					std::string name;
				};


				GetBaseAgeDataResult();
				explicit GetBaseAgeDataResult(const std::string &payload);
				~GetBaseAgeDataResult();
				std::string getSummaryType()const;
				std::vector<AgeItem> getfemaleAgeItems()const;
				long getStoreId()const;
				std::string getHour()const;
				std::vector<AgeItem> getmaleAgeItems()const;
				std::string getErrorMsg()const;
				long getLocationId()const;
				std::vector<AgeItem> getageItems()const;
				std::string getDay()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string summaryType_;
				std::vector<AgeItem> femaleAgeItems_;
				long storeId_;
				std::string hour_;
				std::vector<AgeItem> maleAgeItems_;
				std::string errorMsg_;
				long locationId_;
				std::vector<AgeItem> ageItems_;
				std::string day_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_GETBASEAGEDATARESULT_H_