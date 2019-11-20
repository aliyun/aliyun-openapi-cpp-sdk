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

#ifndef ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_DESCRIBEHISTORYACTIONDATARESULT_H_
#define ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_DESCRIBEHISTORYACTIONDATARESULT_H_

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
			class ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_EXPORT DescribeHistoryActionDataResult : public ServiceResult
			{
			public:
				struct ActionsMsgItem
				{
					struct Infos
					{
						struct MapImagePoint
						{
							float x;
							float y;
						};
						struct FaceImgRect
						{
							float left;
							float top;
							float right;
							float bottom;
						};
						long rawId;
						long stayPeriod;
						MapImagePoint mapImagePoint;
						FaceImgRect faceImgRect;
						long inStay;
						long maxts;
						long stayValid;
						long mints;
					};
					struct Attributes
					{
						std::string imgObjectKey;
						long score;
						int ageNum;
						std::string imgType;
						std::string gender;
						std::string imgUrl;
						long isClerk;
					};
					long status;
					std::string gmtCreate;
					long storeId;
					std::string locationLayerType;
					Attributes attributes;
					long locationId;
					std::string gmtModified;
					long ukId;
					std::string tag;
					long id;
					Infos infos;
				};


				DescribeHistoryActionDataResult();
				explicit DescribeHistoryActionDataResult(const std::string &payload);
				~DescribeHistoryActionDataResult();
				bool getIsSuccess()const;
				long getTotalCount()const;
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
				long totalCount_;
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
#endif // !ALIBABACLOUD_CUSANALYTIC_SC_ONLINE_MODEL_DESCRIBEHISTORYACTIONDATARESULT_H_