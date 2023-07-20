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

#ifndef ALIBABACLOUD_SAS_MODEL_GETCLIENTRATIOSTATISTICRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_GETCLIENTRATIOSTATISTICRESULT_H_

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
			class ALIBABACLOUD_SAS_EXPORT GetClientRatioStatisticResult : public ServiceResult
			{
			public:
				struct ClientInstallRatio
				{
					struct HistoryItemsItem
					{
						struct HistoryItem
						{
							int installedAssetCount;
							long calculateTime;
							double installRatio;
							int assetTotalCount;
						};
						std::vector<HistoryItemsItem::HistoryItem> items;
						long vendor;
					};
					struct CurrentItemsItem
					{
						struct ItemsItem
						{
							int installedAssetCount;
							long calculateTime;
							double installRatio;
							int assetTotalCount;
						};
						std::vector<CurrentItemsItem::ItemsItem> items1;
						long vendor;
					};
					std::vector<CurrentItemsItem> currentItems;
					std::vector<HistoryItemsItem> historyItems;
				};
				struct ClientOnlineRatio
				{
					struct HistoryItemsItem4
					{
						struct HistoryItem6
						{
							int onlineAssetCount;
							long calculateTime;
							int assetInstallCount;
							double onlineRatio;
						};
						std::vector<HistoryItemsItem4::HistoryItem6> items5;
						long vendor;
					};
					struct CurrentItemsItem7
					{
						struct ItemsItem9
						{
							int onlineAssetCount;
							long calculateTime;
							int assetInstallCount;
							double onlineRatio;
						};
						std::vector<CurrentItemsItem7::ItemsItem9> items8;
						long vendor;
					};
					std::vector<CurrentItemsItem7> currentItems3;
					std::vector<HistoryItemsItem4> historyItems2;
				};


				GetClientRatioStatisticResult();
				explicit GetClientRatioStatisticResult(const std::string &payload);
				~GetClientRatioStatisticResult();
				ClientOnlineRatio getClientOnlineRatio()const;
				std::vector<std::string> getDates()const;
				ClientInstallRatio getClientInstallRatio()const;

			protected:
				void parse(const std::string &payload);
			private:
				ClientOnlineRatio clientOnlineRatio_;
				std::vector<std::string> dates_;
				ClientInstallRatio clientInstallRatio_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_GETCLIENTRATIOSTATISTICRESULT_H_