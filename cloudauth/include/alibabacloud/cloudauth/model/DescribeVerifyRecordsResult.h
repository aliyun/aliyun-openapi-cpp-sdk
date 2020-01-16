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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEVERIFYRECORDSRESULT_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEVERIFYRECORDSRESULT_H_

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
			class ALIBABACLOUD_CLOUDAUTH_EXPORT DescribeVerifyRecordsResult : public ServiceResult
			{
			public:
				struct Records
				{
					struct Material
					{
						struct IdCardInfo
						{
							std::string startDate;
							std::string number;
							std::string address;
							std::string authority;
							std::string sex;
							std::string backImageUrl;
							std::string frontImageUrl;
							std::string birth;
							std::string endDate;
							std::string nationality;
							std::string name;
						};
						std::string idCardName;
						std::string idCardNumber;
						IdCardInfo idCardInfo;
						std::string faceImageUrl;
					};
					int status;
					long finishTime;
					float authorityComparisonScore;
					Material material;
					std::string bizType;
					std::string bizId;
					std::string verifyId;
					float idCardFaceComparisonScore;
				};


				DescribeVerifyRecordsResult();
				explicit DescribeVerifyRecordsResult(const std::string &payload);
				~DescribeVerifyRecordsResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getCurrentPage()const;
				std::vector<Records> getRecordsList()const;
				std::string getQueryId()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int currentPage_;
				std::vector<Records> recordsList_;
				std::string queryId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEVERIFYRECORDSRESULT_H_