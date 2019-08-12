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

#ifndef ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_DESCRIBEACTIONDATARESULT_H_
#define ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_DESCRIBEACTIONDATARESULT_H_

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
			class ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_EXPORT DescribeActionDataResult : public ServiceResult
			{
			public:
				struct ActionsMsgItem
				{
					struct ActionInfosItem
					{
						struct Point
						{
							float x;
							float y;
						};
						struct SenseRectEntityItem
						{
							float left;
							float top;
							float right;
							float bottom;
						};
						SenseRectEntityItem senseRectEntityItem;
						long rawId;
						long stayPeriod;
						long maxts;
						Point point;
						long stayValid;
						long mints;
					};
					struct AttributesMsgItem
					{
						long score;
						int ageNum;
						std::string imgType;
						std::string gender;
						std::string imgUrl;
						long isClerk;
					};
					long status;
					ActionInfosItem actionInfosItem;
					std::string gmtCreate;
					long storeId;
					AttributesMsgItem attributesMsgItem;
					std::string locationLayerType;
					long locationId;
					std::string gmtModified;
					long ukId;
					std::string tag;
					long id;
				};


				DescribeActionDataResult();
				explicit DescribeActionDataResult(const std::string &payload);
				~DescribeActionDataResult();
				bool getIsSuccess()const;
				long getTsStart()const;
				int getPageCount()const;
				std::string getStoreId()const;
				std::string getErrorMsg()const;
				long getTsEnd()const;
				int getPageNo()const;
				int getPageLimit()const;
				std::vector<ActionsMsgItem> getActionsMsgItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool isSuccess_;
				long tsStart_;
				int pageCount_;
				std::string storeId_;
				std::string errorMsg_;
				long tsEnd_;
				int pageNo_;
				int pageLimit_;
				std::vector<ActionsMsgItem> actionsMsgItems_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_DESCRIBEACTIONDATARESULT_H_