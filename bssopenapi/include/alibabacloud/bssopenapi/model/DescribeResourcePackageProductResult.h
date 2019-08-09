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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBERESOURCEPACKAGEPRODUCTRESULT_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBERESOURCEPACKAGEPRODUCTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/bssopenapi/BssOpenApiExport.h>

namespace AlibabaCloud
{
	namespace BssOpenApi
	{
		namespace Model
		{
			class ALIBABACLOUD_BSSOPENAPI_EXPORT DescribeResourcePackageProductResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct ResourcePackage
					{
						struct PackageType
						{
							struct Property
							{
								std::string value;
								std::string name;
							};
							struct Specification
							{
								struct AvailableDuration
								{
									int value;
									std::string unit;
									std::string name;
								};
								std::vector<Specification::AvailableDuration> availableDurations;
								std::string value;
								std::string name;
							};
							std::vector<PackageType::Specification> specifications;
							std::vector<PackageType::Property> properties;
							std::string code;
							std::string name;
						};
						std::vector<ResourcePackage::PackageType> packageTypes;
						std::string productCode;
						std::string productType;
						std::string name;
					};
					std::vector<ResourcePackage> resourcePackages;
				};


				DescribeResourcePackageProductResult();
				explicit DescribeResourcePackageProductResult(const std::string &payload);
				~DescribeResourcePackageProductResult();
				std::string getMessage()const;
				Data getData()const;
				long getOrderId()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				long orderId_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBERESOURCEPACKAGEPRODUCTRESULT_H_