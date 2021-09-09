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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_GETTYPELISTRESULT_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_GETTYPELISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/companyreg/CompanyregExport.h>

namespace AlibabaCloud
{
	namespace Companyreg
	{
		namespace Model
		{
			class ALIBABACLOUD_COMPANYREG_EXPORT GetTypeListResult : public ServiceResult
			{
			public:
				struct Fee
				{
					struct KindEnum
					{
						std::string value;
						std::string key;
					};
					struct PayMethodEnum
					{
						std::string value;
						std::string key;
					};
					struct UseEnum
					{
						std::string value;
						std::string key;
					};
					std::vector<UseEnum> use;
					std::vector<KindEnum> kind;
					std::vector<PayMethodEnum> payMethod;
				};
				struct InInvoice
				{
					struct BuyMethodEnum
					{
						std::string value;
						std::string key;
					};
					struct FixedAssetTypeEnum
					{
						std::string value;
						std::string key;
					};
					struct BuyTargetEnum
					{
						std::string value;
						std::string key;
					};
					std::vector<BuyTargetEnum> buyTarget;
					std::vector<BuyMethodEnum> buyMethod;
					std::vector<FixedAssetTypeEnum> fixedAssetType;
				};
				struct OutInvoice
				{
					struct ShellMethodEnum
					{
						std::string value;
						std::string key;
					};
					std::vector<ShellMethodEnum> shellMethod;
				};


				GetTypeListResult();
				explicit GetTypeListResult(const std::string &payload);
				~GetTypeListResult();
				Fee getFee()const;
				OutInvoice getOutInvoice()const;
				InInvoice getInInvoice()const;

			protected:
				void parse(const std::string &payload);
			private:
				Fee fee_;
				OutInvoice outInvoice_;
				InInvoice inInvoice_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_GETTYPELISTRESULT_H_