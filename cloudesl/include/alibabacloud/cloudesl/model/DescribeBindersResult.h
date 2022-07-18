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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEBINDERSRESULT_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEBINDERSRESULT_H_

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
			class ALIBABACLOUD_CLOUDESL_EXPORT DescribeBindersResult : public ServiceResult
			{
			public:
				struct EslItemBindInfo
				{
					std::string bindId;
					std::string originalPrice;
					std::string actionPrice;
					std::string gmtModified;
					std::string eslPic;
					std::string promotionStart;
					std::string itemBarCode;
					std::string templateSceneId;
					std::string itemId;
					std::string promotionText;
					std::string promotionEnd;
					std::string eslModel;
					std::string eslBarCode;
					std::string priceUnit;
					std::string itemShortTitle;
					std::string storeId;
					std::string containerName;
					std::string itemTitle;
					std::string skuId;
					std::string eslStatus;
					bool bePromotion;
					std::string eslConnectAp;
					std::string templateId;
				};


				DescribeBindersResult();
				explicit DescribeBindersResult(const std::string &payload);
				~DescribeBindersResult();
				int getTotalCount()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::string getDynamicCode()const;
				std::string getErrorCode()const;
				std::string getDynamicMessage()const;
				std::string getErrorMessage()const;
				std::string getCode()const;
				bool getSuccess()const;
				std::vector<EslItemBindInfo> getEslItemBindInfos()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string message_;
				int pageSize_;
				int pageNumber_;
				std::string dynamicCode_;
				std::string errorCode_;
				std::string dynamicMessage_;
				std::string errorMessage_;
				std::string code_;
				bool success_;
				std::vector<EslItemBindInfo> eslItemBindInfos_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEBINDERSRESULT_H_