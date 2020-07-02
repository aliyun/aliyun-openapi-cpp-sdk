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

#ifndef ALIBABACLOUD_REID_MODEL_PULLTRYONSHOESEVENTRESULT_H_
#define ALIBABACLOUD_REID_MODEL_PULLTRYONSHOESEVENTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/reid/ReidExport.h>

namespace AlibabaCloud
{
	namespace Reid
	{
		namespace Model
		{
			class ALIBABACLOUD_REID_EXPORT PullTryOnShoesEventResult : public ServiceResult
			{
			public:


				PullTryOnShoesEventResult();
				explicit PullTryOnShoesEventResult(const std::string &payload);
				~PullTryOnShoesEventResult();
				long getStartTs()const;
				std::string getMessage()const;
				int getPageSize()const;
				std::string getDynamicMessage()const;
				std::string getCode()const;
				bool getSuccess()const;
				long getTotalCount()const;
				long getStoreId()const;
				int getTryOnShoesEventCount()const;
				int getPageNumber()const;
				std::string getDynamicCode()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				std::string getSkuId()const;

			protected:
				void parse(const std::string &payload);
			private:
				long startTs_;
				std::string message_;
				int pageSize_;
				std::string dynamicMessage_;
				std::string code_;
				bool success_;
				long totalCount_;
				long storeId_;
				int tryOnShoesEventCount_;
				int pageNumber_;
				std::string dynamicCode_;
				std::string errorCode_;
				std::string errorMessage_;
				std::string skuId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_REID_MODEL_PULLTRYONSHOESEVENTRESULT_H_