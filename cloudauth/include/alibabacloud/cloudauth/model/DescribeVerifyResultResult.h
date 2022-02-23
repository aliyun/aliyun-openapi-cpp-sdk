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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEVERIFYRESULTRESULT_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEVERIFYRESULTRESULT_H_

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
			class ALIBABACLOUD_CLOUDAUTH_EXPORT DescribeVerifyResultResult : public ServiceResult
			{
			public:
				struct Material
				{
					struct IdCardInfo
					{
						std::string startDate;
						std::string address;
						std::string number;
						std::string authority;
						std::string sex;
						std::string backImageUrl;
						std::string frontImageUrl;
						std::string birth;
						std::string endDate;
						std::string nationality;
						std::string name;
					};
					std::string faceGlobalUrl;
					std::string idCardName;
					std::string faceQuality;
					std::string idCardNumber;
					std::vector<std::string> videoUrls;
					bool faceMask;
					IdCardInfo idCardInfo;
					std::string faceImageUrl;
				};


				DescribeVerifyResultResult();
				explicit DescribeVerifyResultResult(const std::string &payload);
				~DescribeVerifyResultResult();
				int getVerifyStatus()const;
				Material getMaterial()const;
				float getAuthorityComparisionScore()const;
				float getFaceComparisonScore()const;
				float getIdCardFaceComparisonScore()const;

			protected:
				void parse(const std::string &payload);
			private:
				int verifyStatus_;
				Material material_;
				float authorityComparisionScore_;
				float faceComparisonScore_;
				float idCardFaceComparisonScore_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEVERIFYRESULTRESULT_H_