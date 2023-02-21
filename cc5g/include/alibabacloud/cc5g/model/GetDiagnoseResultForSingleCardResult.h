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

#ifndef ALIBABACLOUD_CC5G_MODEL_GETDIAGNOSERESULTFORSINGLECARDRESULT_H_
#define ALIBABACLOUD_CC5G_MODEL_GETDIAGNOSERESULTFORSINGLECARDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cc5g/CC5GExport.h>

namespace AlibabaCloud
{
	namespace CC5G
	{
		namespace Model
		{
			class ALIBABACLOUD_CC5G_EXPORT GetDiagnoseResultForSingleCardResult : public ServiceResult
			{
			public:
				struct DiagnoseResult
				{
					std::string errorDesc;
					std::string errorSuggestion;
					std::string errorLevel;
					std::string errorItem;
					std::string errorPart;
				};
				struct DiagnoseItemItem
				{
					struct SubItemsItem
					{
						std::string subItem;
						std::string subItemStatus;
						std::string subItemInfo;
					};
					std::vector<DiagnoseItemItem::SubItemsItem> subItems;
					std::string status;
					std::string part;
				};


				GetDiagnoseResultForSingleCardResult();
				explicit GetDiagnoseResultForSingleCardResult(const std::string &payload);
				~GetDiagnoseResultForSingleCardResult();
				std::string getStatus()const;
				std::string getDestination()const;
				std::string getWirelessCloudConnectorId()const;
				long getEndTime()const;
				std::string getCardIp()const;
				std::string getIccId()const;
				std::vector<DiagnoseResult> getErrorResult()const;
				long getBeginTime()const;
				std::string getDestinationType()const;
				std::vector<DiagnoseItemItem> getDiagnoseItem()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string destination_;
				std::string wirelessCloudConnectorId_;
				long endTime_;
				std::string cardIp_;
				std::string iccId_;
				std::vector<DiagnoseResult> errorResult_;
				long beginTime_;
				std::string destinationType_;
				std::vector<DiagnoseItemItem> diagnoseItem_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CC5G_MODEL_GETDIAGNOSERESULTFORSINGLECARDRESULT_H_