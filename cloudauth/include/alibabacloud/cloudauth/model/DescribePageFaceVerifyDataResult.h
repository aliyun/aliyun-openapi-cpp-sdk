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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEPAGEFACEVERIFYDATARESULT_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEPAGEFACEVERIFYDATARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloudauth/CloudauthExport.h>

namespace AlibabaCloud
{
	namespace Cloudauth
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAUTH_EXPORT DescribePageFaceVerifyDataResult : public ServiceResult
			{
			public:
				struct ItemsItem
				{
					std::string sceneId;
					std::string totalCount;
					std::string sceneName;
					std::string productCode;
					std::string successCount;
					std::string date;
				};


				DescribePageFaceVerifyDataResult();
				explicit DescribePageFaceVerifyDataResult(const std::string &payload);
				~DescribePageFaceVerifyDataResult();
				std::string getTotalCount()const;
				std::string getMessage()const;
				std::string getPageSize()const;
				std::string getTotalPage()const;
				std::string getCurrentPage()const;
				std::vector<ItemsItem> getItems()const;
				std::string getCode()const;
				std::string getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string totalCount_;
				std::string message_;
				std::string pageSize_;
				std::string totalPage_;
				std::string currentPage_;
				std::vector<ItemsItem> items_;
				std::string code_;
				std::string success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEPAGEFACEVERIFYDATARESULT_H_