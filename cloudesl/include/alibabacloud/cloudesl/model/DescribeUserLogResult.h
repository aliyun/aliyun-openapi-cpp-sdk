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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEUSERLOGRESULT_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEUSERLOGRESULT_H_

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
			class ALIBABACLOUD_CLOUDESL_EXPORT DescribeUserLogResult : public ServiceResult
			{
			public:
				struct UserLogInfo
				{
					std::string operationResponseTime;
					std::string actionPrice;
					std::string gmtModified;
					std::string operationSendTime;
					std::string itemBarCode;
					std::string spendTime;
					std::string itemId;
					std::string eslBarCode;
					std::string gmtCreate;
					int eslSignal;
					std::string priceUnit;
					std::string itemShortTitle;
					std::string storeId;
					std::string i18nResultKey;
					std::string userId;
					std::string operationStatus;
					std::string operationType;
					std::string logId;
					std::string resultCode;
					bool bePromotion;
				};


				DescribeUserLogResult();
				explicit DescribeUserLogResult(const std::string &payload);
				~DescribeUserLogResult();
				int getTotalCount()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::string getDynamicCode()const;
				std::string getErrorCode()const;
				std::string getDynamicMessage()const;
				std::string getErrorMessage()const;
				std::string getCode()const;
				std::vector<UserLogInfo> getUserLogs()const;
				bool getSuccess()const;

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
				std::vector<UserLogInfo> userLogs_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEUSERLOGRESULT_H_