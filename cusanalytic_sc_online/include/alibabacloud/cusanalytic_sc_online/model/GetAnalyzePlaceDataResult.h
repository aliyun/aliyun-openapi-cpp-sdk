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

#ifndef ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_GETANALYZEPLACEDATARESULT_H_
#define ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_GETANALYZEPLACEDATARESULT_H_

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
			class ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_EXPORT GetAnalyzePlaceDataResult : public ServiceResult
			{
			public:
				struct AnalyzePlaceItem
				{
					struct AgeItem
					{
						int count;
						int age;
					};
					std::vector<AnalyzePlaceItem::AgeItem> ageItems;
					long storeId;
					int maleCount;
					float percent;
					int femaleCount;
					long locationId;
					std::string parentLocationIds;
					long count;
					std::string locationName;
				};


				GetAnalyzePlaceDataResult();
				explicit GetAnalyzePlaceDataResult(const std::string &payload);
				~GetAnalyzePlaceDataResult();
				std::vector<AnalyzePlaceItem> getAnalyzePlaceItems()const;
				long getStoreId()const;
				float getPercent()const;
				std::string getParentLocationIds()const;
				long getLocationId()const;
				long getCount()const;
				std::string getLocationName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<AnalyzePlaceItem> analyzePlaceItems_;
				long storeId_;
				float percent_;
				std::string parentLocationIds_;
				long locationId_;
				long count_;
				std::string locationName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_GETANALYZEPLACEDATARESULT_H_