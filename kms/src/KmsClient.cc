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

#include <alibabacloud/kms/KmsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Kms;
using namespace AlibabaCloud::Kms::Model;

namespace
{
	const std::string SERVICE_NAME = "Kms";
}

KmsClient::KmsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "kms");
}

KmsClient::KmsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "kms");
}

KmsClient::KmsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "kms");
}

KmsClient::~KmsClient()
{}

KmsClient::AdvanceEncryptOutcome KmsClient::advanceEncrypt(const AdvanceEncryptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AdvanceEncryptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AdvanceEncryptOutcome(AdvanceEncryptResult(outcome.result()));
	else
		return AdvanceEncryptOutcome(outcome.error());
}

void KmsClient::advanceEncryptAsync(const AdvanceEncryptRequest& request, const AdvanceEncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, advanceEncrypt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::AdvanceEncryptOutcomeCallable KmsClient::advanceEncryptCallable(const AdvanceEncryptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AdvanceEncryptOutcome()>>(
			[this, request]()
			{
			return this->advanceEncrypt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::AsymmetricDecryptOutcome KmsClient::asymmetricDecrypt(const AsymmetricDecryptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AsymmetricDecryptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AsymmetricDecryptOutcome(AsymmetricDecryptResult(outcome.result()));
	else
		return AsymmetricDecryptOutcome(outcome.error());
}

void KmsClient::asymmetricDecryptAsync(const AsymmetricDecryptRequest& request, const AsymmetricDecryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, asymmetricDecrypt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::AsymmetricDecryptOutcomeCallable KmsClient::asymmetricDecryptCallable(const AsymmetricDecryptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AsymmetricDecryptOutcome()>>(
			[this, request]()
			{
			return this->asymmetricDecrypt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::AsymmetricEncryptOutcome KmsClient::asymmetricEncrypt(const AsymmetricEncryptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AsymmetricEncryptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AsymmetricEncryptOutcome(AsymmetricEncryptResult(outcome.result()));
	else
		return AsymmetricEncryptOutcome(outcome.error());
}

void KmsClient::asymmetricEncryptAsync(const AsymmetricEncryptRequest& request, const AsymmetricEncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, asymmetricEncrypt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::AsymmetricEncryptOutcomeCallable KmsClient::asymmetricEncryptCallable(const AsymmetricEncryptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AsymmetricEncryptOutcome()>>(
			[this, request]()
			{
			return this->asymmetricEncrypt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::AsymmetricSignOutcome KmsClient::asymmetricSign(const AsymmetricSignRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AsymmetricSignOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AsymmetricSignOutcome(AsymmetricSignResult(outcome.result()));
	else
		return AsymmetricSignOutcome(outcome.error());
}

void KmsClient::asymmetricSignAsync(const AsymmetricSignRequest& request, const AsymmetricSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, asymmetricSign(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::AsymmetricSignOutcomeCallable KmsClient::asymmetricSignCallable(const AsymmetricSignRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AsymmetricSignOutcome()>>(
			[this, request]()
			{
			return this->asymmetricSign(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::AsymmetricVerifyOutcome KmsClient::asymmetricVerify(const AsymmetricVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AsymmetricVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AsymmetricVerifyOutcome(AsymmetricVerifyResult(outcome.result()));
	else
		return AsymmetricVerifyOutcome(outcome.error());
}

void KmsClient::asymmetricVerifyAsync(const AsymmetricVerifyRequest& request, const AsymmetricVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, asymmetricVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::AsymmetricVerifyOutcomeCallable KmsClient::asymmetricVerifyCallable(const AsymmetricVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AsymmetricVerifyOutcome()>>(
			[this, request]()
			{
			return this->asymmetricVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::CancelKeyDeletionOutcome KmsClient::cancelKeyDeletion(const CancelKeyDeletionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CancelKeyDeletionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CancelKeyDeletionOutcome(CancelKeyDeletionResult(outcome.result()));
	else
		return CancelKeyDeletionOutcome(outcome.error());
}

void KmsClient::cancelKeyDeletionAsync(const CancelKeyDeletionRequest& request, const CancelKeyDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, cancelKeyDeletion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::CancelKeyDeletionOutcomeCallable KmsClient::cancelKeyDeletionCallable(const CancelKeyDeletionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CancelKeyDeletionOutcome()>>(
			[this, request]()
			{
			return this->cancelKeyDeletion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::CertificatePrivateKeyDecryptOutcome KmsClient::certificatePrivateKeyDecrypt(const CertificatePrivateKeyDecryptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CertificatePrivateKeyDecryptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CertificatePrivateKeyDecryptOutcome(CertificatePrivateKeyDecryptResult(outcome.result()));
	else
		return CertificatePrivateKeyDecryptOutcome(outcome.error());
}

void KmsClient::certificatePrivateKeyDecryptAsync(const CertificatePrivateKeyDecryptRequest& request, const CertificatePrivateKeyDecryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, certificatePrivateKeyDecrypt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::CertificatePrivateKeyDecryptOutcomeCallable KmsClient::certificatePrivateKeyDecryptCallable(const CertificatePrivateKeyDecryptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CertificatePrivateKeyDecryptOutcome()>>(
			[this, request]()
			{
			return this->certificatePrivateKeyDecrypt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::CertificatePrivateKeySignOutcome KmsClient::certificatePrivateKeySign(const CertificatePrivateKeySignRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CertificatePrivateKeySignOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CertificatePrivateKeySignOutcome(CertificatePrivateKeySignResult(outcome.result()));
	else
		return CertificatePrivateKeySignOutcome(outcome.error());
}

void KmsClient::certificatePrivateKeySignAsync(const CertificatePrivateKeySignRequest& request, const CertificatePrivateKeySignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, certificatePrivateKeySign(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::CertificatePrivateKeySignOutcomeCallable KmsClient::certificatePrivateKeySignCallable(const CertificatePrivateKeySignRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CertificatePrivateKeySignOutcome()>>(
			[this, request]()
			{
			return this->certificatePrivateKeySign(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::CertificatePublicKeyEncryptOutcome KmsClient::certificatePublicKeyEncrypt(const CertificatePublicKeyEncryptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CertificatePublicKeyEncryptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CertificatePublicKeyEncryptOutcome(CertificatePublicKeyEncryptResult(outcome.result()));
	else
		return CertificatePublicKeyEncryptOutcome(outcome.error());
}

void KmsClient::certificatePublicKeyEncryptAsync(const CertificatePublicKeyEncryptRequest& request, const CertificatePublicKeyEncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, certificatePublicKeyEncrypt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::CertificatePublicKeyEncryptOutcomeCallable KmsClient::certificatePublicKeyEncryptCallable(const CertificatePublicKeyEncryptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CertificatePublicKeyEncryptOutcome()>>(
			[this, request]()
			{
			return this->certificatePublicKeyEncrypt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::CertificatePublicKeyVerifyOutcome KmsClient::certificatePublicKeyVerify(const CertificatePublicKeyVerifyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CertificatePublicKeyVerifyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CertificatePublicKeyVerifyOutcome(CertificatePublicKeyVerifyResult(outcome.result()));
	else
		return CertificatePublicKeyVerifyOutcome(outcome.error());
}

void KmsClient::certificatePublicKeyVerifyAsync(const CertificatePublicKeyVerifyRequest& request, const CertificatePublicKeyVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, certificatePublicKeyVerify(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::CertificatePublicKeyVerifyOutcomeCallable KmsClient::certificatePublicKeyVerifyCallable(const CertificatePublicKeyVerifyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CertificatePublicKeyVerifyOutcome()>>(
			[this, request]()
			{
			return this->certificatePublicKeyVerify(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ConnectKmsInstanceOutcome KmsClient::connectKmsInstance(const ConnectKmsInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConnectKmsInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConnectKmsInstanceOutcome(ConnectKmsInstanceResult(outcome.result()));
	else
		return ConnectKmsInstanceOutcome(outcome.error());
}

void KmsClient::connectKmsInstanceAsync(const ConnectKmsInstanceRequest& request, const ConnectKmsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, connectKmsInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ConnectKmsInstanceOutcomeCallable KmsClient::connectKmsInstanceCallable(const ConnectKmsInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConnectKmsInstanceOutcome()>>(
			[this, request]()
			{
			return this->connectKmsInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::CreateAliasOutcome KmsClient::createAlias(const CreateAliasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAliasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAliasOutcome(CreateAliasResult(outcome.result()));
	else
		return CreateAliasOutcome(outcome.error());
}

void KmsClient::createAliasAsync(const CreateAliasRequest& request, const CreateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAlias(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::CreateAliasOutcomeCallable KmsClient::createAliasCallable(const CreateAliasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAliasOutcome()>>(
			[this, request]()
			{
			return this->createAlias(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::CreateApplicationAccessPointOutcome KmsClient::createApplicationAccessPoint(const CreateApplicationAccessPointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateApplicationAccessPointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateApplicationAccessPointOutcome(CreateApplicationAccessPointResult(outcome.result()));
	else
		return CreateApplicationAccessPointOutcome(outcome.error());
}

void KmsClient::createApplicationAccessPointAsync(const CreateApplicationAccessPointRequest& request, const CreateApplicationAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createApplicationAccessPoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::CreateApplicationAccessPointOutcomeCallable KmsClient::createApplicationAccessPointCallable(const CreateApplicationAccessPointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateApplicationAccessPointOutcome()>>(
			[this, request]()
			{
			return this->createApplicationAccessPoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::CreateCertificateOutcome KmsClient::createCertificate(const CreateCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateCertificateOutcome(CreateCertificateResult(outcome.result()));
	else
		return CreateCertificateOutcome(outcome.error());
}

void KmsClient::createCertificateAsync(const CreateCertificateRequest& request, const CreateCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::CreateCertificateOutcomeCallable KmsClient::createCertificateCallable(const CreateCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateCertificateOutcome()>>(
			[this, request]()
			{
			return this->createCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::CreateClientKeyOutcome KmsClient::createClientKey(const CreateClientKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateClientKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateClientKeyOutcome(CreateClientKeyResult(outcome.result()));
	else
		return CreateClientKeyOutcome(outcome.error());
}

void KmsClient::createClientKeyAsync(const CreateClientKeyRequest& request, const CreateClientKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createClientKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::CreateClientKeyOutcomeCallable KmsClient::createClientKeyCallable(const CreateClientKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateClientKeyOutcome()>>(
			[this, request]()
			{
			return this->createClientKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::CreateKeyOutcome KmsClient::createKey(const CreateKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateKeyOutcome(CreateKeyResult(outcome.result()));
	else
		return CreateKeyOutcome(outcome.error());
}

void KmsClient::createKeyAsync(const CreateKeyRequest& request, const CreateKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::CreateKeyOutcomeCallable KmsClient::createKeyCallable(const CreateKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateKeyOutcome()>>(
			[this, request]()
			{
			return this->createKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::CreateKeyVersionOutcome KmsClient::createKeyVersion(const CreateKeyVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateKeyVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateKeyVersionOutcome(CreateKeyVersionResult(outcome.result()));
	else
		return CreateKeyVersionOutcome(outcome.error());
}

void KmsClient::createKeyVersionAsync(const CreateKeyVersionRequest& request, const CreateKeyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createKeyVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::CreateKeyVersionOutcomeCallable KmsClient::createKeyVersionCallable(const CreateKeyVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateKeyVersionOutcome()>>(
			[this, request]()
			{
			return this->createKeyVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::CreateNetworkRuleOutcome KmsClient::createNetworkRule(const CreateNetworkRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNetworkRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNetworkRuleOutcome(CreateNetworkRuleResult(outcome.result()));
	else
		return CreateNetworkRuleOutcome(outcome.error());
}

void KmsClient::createNetworkRuleAsync(const CreateNetworkRuleRequest& request, const CreateNetworkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNetworkRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::CreateNetworkRuleOutcomeCallable KmsClient::createNetworkRuleCallable(const CreateNetworkRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNetworkRuleOutcome()>>(
			[this, request]()
			{
			return this->createNetworkRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::CreatePolicyOutcome KmsClient::createPolicy(const CreatePolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreatePolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreatePolicyOutcome(CreatePolicyResult(outcome.result()));
	else
		return CreatePolicyOutcome(outcome.error());
}

void KmsClient::createPolicyAsync(const CreatePolicyRequest& request, const CreatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::CreatePolicyOutcomeCallable KmsClient::createPolicyCallable(const CreatePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreatePolicyOutcome()>>(
			[this, request]()
			{
			return this->createPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::CreateSecretOutcome KmsClient::createSecret(const CreateSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateSecretOutcome(CreateSecretResult(outcome.result()));
	else
		return CreateSecretOutcome(outcome.error());
}

void KmsClient::createSecretAsync(const CreateSecretRequest& request, const CreateSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::CreateSecretOutcomeCallable KmsClient::createSecretCallable(const CreateSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateSecretOutcome()>>(
			[this, request]()
			{
			return this->createSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DecryptOutcome KmsClient::decrypt(const DecryptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DecryptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DecryptOutcome(DecryptResult(outcome.result()));
	else
		return DecryptOutcome(outcome.error());
}

void KmsClient::decryptAsync(const DecryptRequest& request, const DecryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, decrypt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DecryptOutcomeCallable KmsClient::decryptCallable(const DecryptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DecryptOutcome()>>(
			[this, request]()
			{
			return this->decrypt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DeleteAliasOutcome KmsClient::deleteAlias(const DeleteAliasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAliasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAliasOutcome(DeleteAliasResult(outcome.result()));
	else
		return DeleteAliasOutcome(outcome.error());
}

void KmsClient::deleteAliasAsync(const DeleteAliasRequest& request, const DeleteAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAlias(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DeleteAliasOutcomeCallable KmsClient::deleteAliasCallable(const DeleteAliasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAliasOutcome()>>(
			[this, request]()
			{
			return this->deleteAlias(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DeleteApplicationAccessPointOutcome KmsClient::deleteApplicationAccessPoint(const DeleteApplicationAccessPointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteApplicationAccessPointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteApplicationAccessPointOutcome(DeleteApplicationAccessPointResult(outcome.result()));
	else
		return DeleteApplicationAccessPointOutcome(outcome.error());
}

void KmsClient::deleteApplicationAccessPointAsync(const DeleteApplicationAccessPointRequest& request, const DeleteApplicationAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApplicationAccessPoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DeleteApplicationAccessPointOutcomeCallable KmsClient::deleteApplicationAccessPointCallable(const DeleteApplicationAccessPointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApplicationAccessPointOutcome()>>(
			[this, request]()
			{
			return this->deleteApplicationAccessPoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DeleteCertificateOutcome KmsClient::deleteCertificate(const DeleteCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteCertificateOutcome(DeleteCertificateResult(outcome.result()));
	else
		return DeleteCertificateOutcome(outcome.error());
}

void KmsClient::deleteCertificateAsync(const DeleteCertificateRequest& request, const DeleteCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DeleteCertificateOutcomeCallable KmsClient::deleteCertificateCallable(const DeleteCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteCertificateOutcome()>>(
			[this, request]()
			{
			return this->deleteCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DeleteClientKeyOutcome KmsClient::deleteClientKey(const DeleteClientKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteClientKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteClientKeyOutcome(DeleteClientKeyResult(outcome.result()));
	else
		return DeleteClientKeyOutcome(outcome.error());
}

void KmsClient::deleteClientKeyAsync(const DeleteClientKeyRequest& request, const DeleteClientKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteClientKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DeleteClientKeyOutcomeCallable KmsClient::deleteClientKeyCallable(const DeleteClientKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteClientKeyOutcome()>>(
			[this, request]()
			{
			return this->deleteClientKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DeleteKeyMaterialOutcome KmsClient::deleteKeyMaterial(const DeleteKeyMaterialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteKeyMaterialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteKeyMaterialOutcome(DeleteKeyMaterialResult(outcome.result()));
	else
		return DeleteKeyMaterialOutcome(outcome.error());
}

void KmsClient::deleteKeyMaterialAsync(const DeleteKeyMaterialRequest& request, const DeleteKeyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteKeyMaterial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DeleteKeyMaterialOutcomeCallable KmsClient::deleteKeyMaterialCallable(const DeleteKeyMaterialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteKeyMaterialOutcome()>>(
			[this, request]()
			{
			return this->deleteKeyMaterial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DeleteNetworkRuleOutcome KmsClient::deleteNetworkRule(const DeleteNetworkRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNetworkRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNetworkRuleOutcome(DeleteNetworkRuleResult(outcome.result()));
	else
		return DeleteNetworkRuleOutcome(outcome.error());
}

void KmsClient::deleteNetworkRuleAsync(const DeleteNetworkRuleRequest& request, const DeleteNetworkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNetworkRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DeleteNetworkRuleOutcomeCallable KmsClient::deleteNetworkRuleCallable(const DeleteNetworkRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNetworkRuleOutcome()>>(
			[this, request]()
			{
			return this->deleteNetworkRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DeletePolicyOutcome KmsClient::deletePolicy(const DeletePolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeletePolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeletePolicyOutcome(DeletePolicyResult(outcome.result()));
	else
		return DeletePolicyOutcome(outcome.error());
}

void KmsClient::deletePolicyAsync(const DeletePolicyRequest& request, const DeletePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deletePolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DeletePolicyOutcomeCallable KmsClient::deletePolicyCallable(const DeletePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeletePolicyOutcome()>>(
			[this, request]()
			{
			return this->deletePolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DeleteSecretOutcome KmsClient::deleteSecret(const DeleteSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteSecretOutcome(DeleteSecretResult(outcome.result()));
	else
		return DeleteSecretOutcome(outcome.error());
}

void KmsClient::deleteSecretAsync(const DeleteSecretRequest& request, const DeleteSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DeleteSecretOutcomeCallable KmsClient::deleteSecretCallable(const DeleteSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteSecretOutcome()>>(
			[this, request]()
			{
			return this->deleteSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DescribeAccountKmsStatusOutcome KmsClient::describeAccountKmsStatus(const DescribeAccountKmsStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeAccountKmsStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeAccountKmsStatusOutcome(DescribeAccountKmsStatusResult(outcome.result()));
	else
		return DescribeAccountKmsStatusOutcome(outcome.error());
}

void KmsClient::describeAccountKmsStatusAsync(const DescribeAccountKmsStatusRequest& request, const DescribeAccountKmsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeAccountKmsStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DescribeAccountKmsStatusOutcomeCallable KmsClient::describeAccountKmsStatusCallable(const DescribeAccountKmsStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeAccountKmsStatusOutcome()>>(
			[this, request]()
			{
			return this->describeAccountKmsStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DescribeApplicationAccessPointOutcome KmsClient::describeApplicationAccessPoint(const DescribeApplicationAccessPointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApplicationAccessPointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApplicationAccessPointOutcome(DescribeApplicationAccessPointResult(outcome.result()));
	else
		return DescribeApplicationAccessPointOutcome(outcome.error());
}

void KmsClient::describeApplicationAccessPointAsync(const DescribeApplicationAccessPointRequest& request, const DescribeApplicationAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApplicationAccessPoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DescribeApplicationAccessPointOutcomeCallable KmsClient::describeApplicationAccessPointCallable(const DescribeApplicationAccessPointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApplicationAccessPointOutcome()>>(
			[this, request]()
			{
			return this->describeApplicationAccessPoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DescribeCertificateOutcome KmsClient::describeCertificate(const DescribeCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCertificateOutcome(DescribeCertificateResult(outcome.result()));
	else
		return DescribeCertificateOutcome(outcome.error());
}

void KmsClient::describeCertificateAsync(const DescribeCertificateRequest& request, const DescribeCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DescribeCertificateOutcomeCallable KmsClient::describeCertificateCallable(const DescribeCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCertificateOutcome()>>(
			[this, request]()
			{
			return this->describeCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DescribeKeyOutcome KmsClient::describeKey(const DescribeKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeKeyOutcome(DescribeKeyResult(outcome.result()));
	else
		return DescribeKeyOutcome(outcome.error());
}

void KmsClient::describeKeyAsync(const DescribeKeyRequest& request, const DescribeKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DescribeKeyOutcomeCallable KmsClient::describeKeyCallable(const DescribeKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeKeyOutcome()>>(
			[this, request]()
			{
			return this->describeKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DescribeKeyVersionOutcome KmsClient::describeKeyVersion(const DescribeKeyVersionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeKeyVersionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeKeyVersionOutcome(DescribeKeyVersionResult(outcome.result()));
	else
		return DescribeKeyVersionOutcome(outcome.error());
}

void KmsClient::describeKeyVersionAsync(const DescribeKeyVersionRequest& request, const DescribeKeyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeKeyVersion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DescribeKeyVersionOutcomeCallable KmsClient::describeKeyVersionCallable(const DescribeKeyVersionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeKeyVersionOutcome()>>(
			[this, request]()
			{
			return this->describeKeyVersion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DescribeNetworkRuleOutcome KmsClient::describeNetworkRule(const DescribeNetworkRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNetworkRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNetworkRuleOutcome(DescribeNetworkRuleResult(outcome.result()));
	else
		return DescribeNetworkRuleOutcome(outcome.error());
}

void KmsClient::describeNetworkRuleAsync(const DescribeNetworkRuleRequest& request, const DescribeNetworkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNetworkRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DescribeNetworkRuleOutcomeCallable KmsClient::describeNetworkRuleCallable(const DescribeNetworkRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNetworkRuleOutcome()>>(
			[this, request]()
			{
			return this->describeNetworkRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DescribePolicyOutcome KmsClient::describePolicy(const DescribePolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribePolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribePolicyOutcome(DescribePolicyResult(outcome.result()));
	else
		return DescribePolicyOutcome(outcome.error());
}

void KmsClient::describePolicyAsync(const DescribePolicyRequest& request, const DescribePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describePolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DescribePolicyOutcomeCallable KmsClient::describePolicyCallable(const DescribePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribePolicyOutcome()>>(
			[this, request]()
			{
			return this->describePolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DescribeRegionsOutcome KmsClient::describeRegions(const DescribeRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionsOutcome(DescribeRegionsResult(outcome.result()));
	else
		return DescribeRegionsOutcome(outcome.error());
}

void KmsClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DescribeRegionsOutcomeCallable KmsClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DescribeSecretOutcome KmsClient::describeSecret(const DescribeSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeSecretOutcome(DescribeSecretResult(outcome.result()));
	else
		return DescribeSecretOutcome(outcome.error());
}

void KmsClient::describeSecretAsync(const DescribeSecretRequest& request, const DescribeSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DescribeSecretOutcomeCallable KmsClient::describeSecretCallable(const DescribeSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeSecretOutcome()>>(
			[this, request]()
			{
			return this->describeSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::DisableKeyOutcome KmsClient::disableKey(const DisableKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableKeyOutcome(DisableKeyResult(outcome.result()));
	else
		return DisableKeyOutcome(outcome.error());
}

void KmsClient::disableKeyAsync(const DisableKeyRequest& request, const DisableKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::DisableKeyOutcomeCallable KmsClient::disableKeyCallable(const DisableKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableKeyOutcome()>>(
			[this, request]()
			{
			return this->disableKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::EnableKeyOutcome KmsClient::enableKey(const EnableKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableKeyOutcome(EnableKeyResult(outcome.result()));
	else
		return EnableKeyOutcome(outcome.error());
}

void KmsClient::enableKeyAsync(const EnableKeyRequest& request, const EnableKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::EnableKeyOutcomeCallable KmsClient::enableKeyCallable(const EnableKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableKeyOutcome()>>(
			[this, request]()
			{
			return this->enableKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::EncryptOutcome KmsClient::encrypt(const EncryptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EncryptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EncryptOutcome(EncryptResult(outcome.result()));
	else
		return EncryptOutcome(outcome.error());
}

void KmsClient::encryptAsync(const EncryptRequest& request, const EncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, encrypt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::EncryptOutcomeCallable KmsClient::encryptCallable(const EncryptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EncryptOutcome()>>(
			[this, request]()
			{
			return this->encrypt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ExportDataKeyOutcome KmsClient::exportDataKey(const ExportDataKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExportDataKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExportDataKeyOutcome(ExportDataKeyResult(outcome.result()));
	else
		return ExportDataKeyOutcome(outcome.error());
}

void KmsClient::exportDataKeyAsync(const ExportDataKeyRequest& request, const ExportDataKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, exportDataKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ExportDataKeyOutcomeCallable KmsClient::exportDataKeyCallable(const ExportDataKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExportDataKeyOutcome()>>(
			[this, request]()
			{
			return this->exportDataKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::GenerateAndExportDataKeyOutcome KmsClient::generateAndExportDataKey(const GenerateAndExportDataKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateAndExportDataKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateAndExportDataKeyOutcome(GenerateAndExportDataKeyResult(outcome.result()));
	else
		return GenerateAndExportDataKeyOutcome(outcome.error());
}

void KmsClient::generateAndExportDataKeyAsync(const GenerateAndExportDataKeyRequest& request, const GenerateAndExportDataKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateAndExportDataKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::GenerateAndExportDataKeyOutcomeCallable KmsClient::generateAndExportDataKeyCallable(const GenerateAndExportDataKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateAndExportDataKeyOutcome()>>(
			[this, request]()
			{
			return this->generateAndExportDataKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::GenerateDataKeyOutcome KmsClient::generateDataKey(const GenerateDataKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateDataKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateDataKeyOutcome(GenerateDataKeyResult(outcome.result()));
	else
		return GenerateDataKeyOutcome(outcome.error());
}

void KmsClient::generateDataKeyAsync(const GenerateDataKeyRequest& request, const GenerateDataKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateDataKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::GenerateDataKeyOutcomeCallable KmsClient::generateDataKeyCallable(const GenerateDataKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateDataKeyOutcome()>>(
			[this, request]()
			{
			return this->generateDataKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::GenerateDataKeyWithoutPlaintextOutcome KmsClient::generateDataKeyWithoutPlaintext(const GenerateDataKeyWithoutPlaintextRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GenerateDataKeyWithoutPlaintextOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GenerateDataKeyWithoutPlaintextOutcome(GenerateDataKeyWithoutPlaintextResult(outcome.result()));
	else
		return GenerateDataKeyWithoutPlaintextOutcome(outcome.error());
}

void KmsClient::generateDataKeyWithoutPlaintextAsync(const GenerateDataKeyWithoutPlaintextRequest& request, const GenerateDataKeyWithoutPlaintextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, generateDataKeyWithoutPlaintext(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::GenerateDataKeyWithoutPlaintextOutcomeCallable KmsClient::generateDataKeyWithoutPlaintextCallable(const GenerateDataKeyWithoutPlaintextRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GenerateDataKeyWithoutPlaintextOutcome()>>(
			[this, request]()
			{
			return this->generateDataKeyWithoutPlaintext(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::GetCertificateOutcome KmsClient::getCertificate(const GetCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCertificateOutcome(GetCertificateResult(outcome.result()));
	else
		return GetCertificateOutcome(outcome.error());
}

void KmsClient::getCertificateAsync(const GetCertificateRequest& request, const GetCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::GetCertificateOutcomeCallable KmsClient::getCertificateCallable(const GetCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCertificateOutcome()>>(
			[this, request]()
			{
			return this->getCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::GetClientKeyOutcome KmsClient::getClientKey(const GetClientKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetClientKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetClientKeyOutcome(GetClientKeyResult(outcome.result()));
	else
		return GetClientKeyOutcome(outcome.error());
}

void KmsClient::getClientKeyAsync(const GetClientKeyRequest& request, const GetClientKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getClientKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::GetClientKeyOutcomeCallable KmsClient::getClientKeyCallable(const GetClientKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetClientKeyOutcome()>>(
			[this, request]()
			{
			return this->getClientKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::GetKeyPolicyOutcome KmsClient::getKeyPolicy(const GetKeyPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetKeyPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetKeyPolicyOutcome(GetKeyPolicyResult(outcome.result()));
	else
		return GetKeyPolicyOutcome(outcome.error());
}

void KmsClient::getKeyPolicyAsync(const GetKeyPolicyRequest& request, const GetKeyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getKeyPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::GetKeyPolicyOutcomeCallable KmsClient::getKeyPolicyCallable(const GetKeyPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetKeyPolicyOutcome()>>(
			[this, request]()
			{
			return this->getKeyPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::GetKmsInstanceOutcome KmsClient::getKmsInstance(const GetKmsInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetKmsInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetKmsInstanceOutcome(GetKmsInstanceResult(outcome.result()));
	else
		return GetKmsInstanceOutcome(outcome.error());
}

void KmsClient::getKmsInstanceAsync(const GetKmsInstanceRequest& request, const GetKmsInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getKmsInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::GetKmsInstanceOutcomeCallable KmsClient::getKmsInstanceCallable(const GetKmsInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetKmsInstanceOutcome()>>(
			[this, request]()
			{
			return this->getKmsInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::GetParametersForImportOutcome KmsClient::getParametersForImport(const GetParametersForImportRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetParametersForImportOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetParametersForImportOutcome(GetParametersForImportResult(outcome.result()));
	else
		return GetParametersForImportOutcome(outcome.error());
}

void KmsClient::getParametersForImportAsync(const GetParametersForImportRequest& request, const GetParametersForImportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getParametersForImport(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::GetParametersForImportOutcomeCallable KmsClient::getParametersForImportCallable(const GetParametersForImportRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetParametersForImportOutcome()>>(
			[this, request]()
			{
			return this->getParametersForImport(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::GetPublicKeyOutcome KmsClient::getPublicKey(const GetPublicKeyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPublicKeyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPublicKeyOutcome(GetPublicKeyResult(outcome.result()));
	else
		return GetPublicKeyOutcome(outcome.error());
}

void KmsClient::getPublicKeyAsync(const GetPublicKeyRequest& request, const GetPublicKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPublicKey(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::GetPublicKeyOutcomeCallable KmsClient::getPublicKeyCallable(const GetPublicKeyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPublicKeyOutcome()>>(
			[this, request]()
			{
			return this->getPublicKey(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::GetRandomPasswordOutcome KmsClient::getRandomPassword(const GetRandomPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRandomPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRandomPasswordOutcome(GetRandomPasswordResult(outcome.result()));
	else
		return GetRandomPasswordOutcome(outcome.error());
}

void KmsClient::getRandomPasswordAsync(const GetRandomPasswordRequest& request, const GetRandomPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRandomPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::GetRandomPasswordOutcomeCallable KmsClient::getRandomPasswordCallable(const GetRandomPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRandomPasswordOutcome()>>(
			[this, request]()
			{
			return this->getRandomPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::GetSecretPolicyOutcome KmsClient::getSecretPolicy(const GetSecretPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSecretPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSecretPolicyOutcome(GetSecretPolicyResult(outcome.result()));
	else
		return GetSecretPolicyOutcome(outcome.error());
}

void KmsClient::getSecretPolicyAsync(const GetSecretPolicyRequest& request, const GetSecretPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSecretPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::GetSecretPolicyOutcomeCallable KmsClient::getSecretPolicyCallable(const GetSecretPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSecretPolicyOutcome()>>(
			[this, request]()
			{
			return this->getSecretPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::GetSecretValueOutcome KmsClient::getSecretValue(const GetSecretValueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetSecretValueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetSecretValueOutcome(GetSecretValueResult(outcome.result()));
	else
		return GetSecretValueOutcome(outcome.error());
}

void KmsClient::getSecretValueAsync(const GetSecretValueRequest& request, const GetSecretValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getSecretValue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::GetSecretValueOutcomeCallable KmsClient::getSecretValueCallable(const GetSecretValueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetSecretValueOutcome()>>(
			[this, request]()
			{
			return this->getSecretValue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ImportKeyMaterialOutcome KmsClient::importKeyMaterial(const ImportKeyMaterialRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ImportKeyMaterialOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ImportKeyMaterialOutcome(ImportKeyMaterialResult(outcome.result()));
	else
		return ImportKeyMaterialOutcome(outcome.error());
}

void KmsClient::importKeyMaterialAsync(const ImportKeyMaterialRequest& request, const ImportKeyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, importKeyMaterial(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ImportKeyMaterialOutcomeCallable KmsClient::importKeyMaterialCallable(const ImportKeyMaterialRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ImportKeyMaterialOutcome()>>(
			[this, request]()
			{
			return this->importKeyMaterial(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ListAliasesOutcome KmsClient::listAliases(const ListAliasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAliasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAliasesOutcome(ListAliasesResult(outcome.result()));
	else
		return ListAliasesOutcome(outcome.error());
}

void KmsClient::listAliasesAsync(const ListAliasesRequest& request, const ListAliasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAliases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ListAliasesOutcomeCallable KmsClient::listAliasesCallable(const ListAliasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAliasesOutcome()>>(
			[this, request]()
			{
			return this->listAliases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ListAliasesByKeyIdOutcome KmsClient::listAliasesByKeyId(const ListAliasesByKeyIdRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAliasesByKeyIdOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAliasesByKeyIdOutcome(ListAliasesByKeyIdResult(outcome.result()));
	else
		return ListAliasesByKeyIdOutcome(outcome.error());
}

void KmsClient::listAliasesByKeyIdAsync(const ListAliasesByKeyIdRequest& request, const ListAliasesByKeyIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAliasesByKeyId(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ListAliasesByKeyIdOutcomeCallable KmsClient::listAliasesByKeyIdCallable(const ListAliasesByKeyIdRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAliasesByKeyIdOutcome()>>(
			[this, request]()
			{
			return this->listAliasesByKeyId(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ListApplicationAccessPointsOutcome KmsClient::listApplicationAccessPoints(const ListApplicationAccessPointsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListApplicationAccessPointsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListApplicationAccessPointsOutcome(ListApplicationAccessPointsResult(outcome.result()));
	else
		return ListApplicationAccessPointsOutcome(outcome.error());
}

void KmsClient::listApplicationAccessPointsAsync(const ListApplicationAccessPointsRequest& request, const ListApplicationAccessPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listApplicationAccessPoints(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ListApplicationAccessPointsOutcomeCallable KmsClient::listApplicationAccessPointsCallable(const ListApplicationAccessPointsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListApplicationAccessPointsOutcome()>>(
			[this, request]()
			{
			return this->listApplicationAccessPoints(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ListClientKeysOutcome KmsClient::listClientKeys(const ListClientKeysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListClientKeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListClientKeysOutcome(ListClientKeysResult(outcome.result()));
	else
		return ListClientKeysOutcome(outcome.error());
}

void KmsClient::listClientKeysAsync(const ListClientKeysRequest& request, const ListClientKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listClientKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ListClientKeysOutcomeCallable KmsClient::listClientKeysCallable(const ListClientKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListClientKeysOutcome()>>(
			[this, request]()
			{
			return this->listClientKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ListKeyVersionsOutcome KmsClient::listKeyVersions(const ListKeyVersionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListKeyVersionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListKeyVersionsOutcome(ListKeyVersionsResult(outcome.result()));
	else
		return ListKeyVersionsOutcome(outcome.error());
}

void KmsClient::listKeyVersionsAsync(const ListKeyVersionsRequest& request, const ListKeyVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listKeyVersions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ListKeyVersionsOutcomeCallable KmsClient::listKeyVersionsCallable(const ListKeyVersionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListKeyVersionsOutcome()>>(
			[this, request]()
			{
			return this->listKeyVersions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ListKeysOutcome KmsClient::listKeys(const ListKeysRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListKeysOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListKeysOutcome(ListKeysResult(outcome.result()));
	else
		return ListKeysOutcome(outcome.error());
}

void KmsClient::listKeysAsync(const ListKeysRequest& request, const ListKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listKeys(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ListKeysOutcomeCallable KmsClient::listKeysCallable(const ListKeysRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListKeysOutcome()>>(
			[this, request]()
			{
			return this->listKeys(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ListKmsInstancesOutcome KmsClient::listKmsInstances(const ListKmsInstancesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListKmsInstancesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListKmsInstancesOutcome(ListKmsInstancesResult(outcome.result()));
	else
		return ListKmsInstancesOutcome(outcome.error());
}

void KmsClient::listKmsInstancesAsync(const ListKmsInstancesRequest& request, const ListKmsInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listKmsInstances(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ListKmsInstancesOutcomeCallable KmsClient::listKmsInstancesCallable(const ListKmsInstancesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListKmsInstancesOutcome()>>(
			[this, request]()
			{
			return this->listKmsInstances(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ListNetworkRulesOutcome KmsClient::listNetworkRules(const ListNetworkRulesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNetworkRulesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNetworkRulesOutcome(ListNetworkRulesResult(outcome.result()));
	else
		return ListNetworkRulesOutcome(outcome.error());
}

void KmsClient::listNetworkRulesAsync(const ListNetworkRulesRequest& request, const ListNetworkRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNetworkRules(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ListNetworkRulesOutcomeCallable KmsClient::listNetworkRulesCallable(const ListNetworkRulesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNetworkRulesOutcome()>>(
			[this, request]()
			{
			return this->listNetworkRules(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ListPoliciesOutcome KmsClient::listPolicies(const ListPoliciesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListPoliciesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListPoliciesOutcome(ListPoliciesResult(outcome.result()));
	else
		return ListPoliciesOutcome(outcome.error());
}

void KmsClient::listPoliciesAsync(const ListPoliciesRequest& request, const ListPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listPolicies(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ListPoliciesOutcomeCallable KmsClient::listPoliciesCallable(const ListPoliciesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListPoliciesOutcome()>>(
			[this, request]()
			{
			return this->listPolicies(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ListResourceTagsOutcome KmsClient::listResourceTags(const ListResourceTagsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourceTagsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourceTagsOutcome(ListResourceTagsResult(outcome.result()));
	else
		return ListResourceTagsOutcome(outcome.error());
}

void KmsClient::listResourceTagsAsync(const ListResourceTagsRequest& request, const ListResourceTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourceTags(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ListResourceTagsOutcomeCallable KmsClient::listResourceTagsCallable(const ListResourceTagsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourceTagsOutcome()>>(
			[this, request]()
			{
			return this->listResourceTags(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ListSecretVersionIdsOutcome KmsClient::listSecretVersionIds(const ListSecretVersionIdsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSecretVersionIdsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSecretVersionIdsOutcome(ListSecretVersionIdsResult(outcome.result()));
	else
		return ListSecretVersionIdsOutcome(outcome.error());
}

void KmsClient::listSecretVersionIdsAsync(const ListSecretVersionIdsRequest& request, const ListSecretVersionIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSecretVersionIds(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ListSecretVersionIdsOutcomeCallable KmsClient::listSecretVersionIdsCallable(const ListSecretVersionIdsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSecretVersionIdsOutcome()>>(
			[this, request]()
			{
			return this->listSecretVersionIds(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ListSecretsOutcome KmsClient::listSecrets(const ListSecretsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSecretsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSecretsOutcome(ListSecretsResult(outcome.result()));
	else
		return ListSecretsOutcome(outcome.error());
}

void KmsClient::listSecretsAsync(const ListSecretsRequest& request, const ListSecretsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSecrets(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ListSecretsOutcomeCallable KmsClient::listSecretsCallable(const ListSecretsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSecretsOutcome()>>(
			[this, request]()
			{
			return this->listSecrets(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ListTagResourcesOutcome KmsClient::listTagResources(const ListTagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagResourcesOutcome(ListTagResourcesResult(outcome.result()));
	else
		return ListTagResourcesOutcome(outcome.error());
}

void KmsClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ListTagResourcesOutcomeCallable KmsClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::OpenKmsServiceOutcome KmsClient::openKmsService(const OpenKmsServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenKmsServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenKmsServiceOutcome(OpenKmsServiceResult(outcome.result()));
	else
		return OpenKmsServiceOutcome(outcome.error());
}

void KmsClient::openKmsServiceAsync(const OpenKmsServiceRequest& request, const OpenKmsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openKmsService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::OpenKmsServiceOutcomeCallable KmsClient::openKmsServiceCallable(const OpenKmsServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenKmsServiceOutcome()>>(
			[this, request]()
			{
			return this->openKmsService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::PutSecretValueOutcome KmsClient::putSecretValue(const PutSecretValueRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return PutSecretValueOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return PutSecretValueOutcome(PutSecretValueResult(outcome.result()));
	else
		return PutSecretValueOutcome(outcome.error());
}

void KmsClient::putSecretValueAsync(const PutSecretValueRequest& request, const PutSecretValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, putSecretValue(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::PutSecretValueOutcomeCallable KmsClient::putSecretValueCallable(const PutSecretValueRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<PutSecretValueOutcome()>>(
			[this, request]()
			{
			return this->putSecretValue(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ReEncryptOutcome KmsClient::reEncrypt(const ReEncryptRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReEncryptOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReEncryptOutcome(ReEncryptResult(outcome.result()));
	else
		return ReEncryptOutcome(outcome.error());
}

void KmsClient::reEncryptAsync(const ReEncryptRequest& request, const ReEncryptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, reEncrypt(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ReEncryptOutcomeCallable KmsClient::reEncryptCallable(const ReEncryptRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReEncryptOutcome()>>(
			[this, request]()
			{
			return this->reEncrypt(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::RestoreSecretOutcome KmsClient::restoreSecret(const RestoreSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RestoreSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RestoreSecretOutcome(RestoreSecretResult(outcome.result()));
	else
		return RestoreSecretOutcome(outcome.error());
}

void KmsClient::restoreSecretAsync(const RestoreSecretRequest& request, const RestoreSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, restoreSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::RestoreSecretOutcomeCallable KmsClient::restoreSecretCallable(const RestoreSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RestoreSecretOutcome()>>(
			[this, request]()
			{
			return this->restoreSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::RotateSecretOutcome KmsClient::rotateSecret(const RotateSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RotateSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RotateSecretOutcome(RotateSecretResult(outcome.result()));
	else
		return RotateSecretOutcome(outcome.error());
}

void KmsClient::rotateSecretAsync(const RotateSecretRequest& request, const RotateSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, rotateSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::RotateSecretOutcomeCallable KmsClient::rotateSecretCallable(const RotateSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RotateSecretOutcome()>>(
			[this, request]()
			{
			return this->rotateSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::ScheduleKeyDeletionOutcome KmsClient::scheduleKeyDeletion(const ScheduleKeyDeletionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ScheduleKeyDeletionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ScheduleKeyDeletionOutcome(ScheduleKeyDeletionResult(outcome.result()));
	else
		return ScheduleKeyDeletionOutcome(outcome.error());
}

void KmsClient::scheduleKeyDeletionAsync(const ScheduleKeyDeletionRequest& request, const ScheduleKeyDeletionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, scheduleKeyDeletion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::ScheduleKeyDeletionOutcomeCallable KmsClient::scheduleKeyDeletionCallable(const ScheduleKeyDeletionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ScheduleKeyDeletionOutcome()>>(
			[this, request]()
			{
			return this->scheduleKeyDeletion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::SetDeletionProtectionOutcome KmsClient::setDeletionProtection(const SetDeletionProtectionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetDeletionProtectionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetDeletionProtectionOutcome(SetDeletionProtectionResult(outcome.result()));
	else
		return SetDeletionProtectionOutcome(outcome.error());
}

void KmsClient::setDeletionProtectionAsync(const SetDeletionProtectionRequest& request, const SetDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setDeletionProtection(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::SetDeletionProtectionOutcomeCallable KmsClient::setDeletionProtectionCallable(const SetDeletionProtectionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetDeletionProtectionOutcome()>>(
			[this, request]()
			{
			return this->setDeletionProtection(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::SetKeyPolicyOutcome KmsClient::setKeyPolicy(const SetKeyPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetKeyPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetKeyPolicyOutcome(SetKeyPolicyResult(outcome.result()));
	else
		return SetKeyPolicyOutcome(outcome.error());
}

void KmsClient::setKeyPolicyAsync(const SetKeyPolicyRequest& request, const SetKeyPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setKeyPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::SetKeyPolicyOutcomeCallable KmsClient::setKeyPolicyCallable(const SetKeyPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetKeyPolicyOutcome()>>(
			[this, request]()
			{
			return this->setKeyPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::SetSecretPolicyOutcome KmsClient::setSecretPolicy(const SetSecretPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetSecretPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetSecretPolicyOutcome(SetSecretPolicyResult(outcome.result()));
	else
		return SetSecretPolicyOutcome(outcome.error());
}

void KmsClient::setSecretPolicyAsync(const SetSecretPolicyRequest& request, const SetSecretPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setSecretPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::SetSecretPolicyOutcomeCallable KmsClient::setSecretPolicyCallable(const SetSecretPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetSecretPolicyOutcome()>>(
			[this, request]()
			{
			return this->setSecretPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::TagResourceOutcome KmsClient::tagResource(const TagResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TagResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TagResourceOutcome(TagResourceResult(outcome.result()));
	else
		return TagResourceOutcome(outcome.error());
}

void KmsClient::tagResourceAsync(const TagResourceRequest& request, const TagResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::TagResourceOutcomeCallable KmsClient::tagResourceCallable(const TagResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourceOutcome()>>(
			[this, request]()
			{
			return this->tagResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::TagResourcesOutcome KmsClient::tagResources(const TagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TagResourcesOutcome(TagResourcesResult(outcome.result()));
	else
		return TagResourcesOutcome(outcome.error());
}

void KmsClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::TagResourcesOutcomeCallable KmsClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::UntagResourceOutcome KmsClient::untagResource(const UntagResourceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UntagResourceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UntagResourceOutcome(UntagResourceResult(outcome.result()));
	else
		return UntagResourceOutcome(outcome.error());
}

void KmsClient::untagResourceAsync(const UntagResourceRequest& request, const UntagResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResource(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::UntagResourceOutcomeCallable KmsClient::untagResourceCallable(const UntagResourceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourceOutcome()>>(
			[this, request]()
			{
			return this->untagResource(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::UntagResourcesOutcome KmsClient::untagResources(const UntagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UntagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UntagResourcesOutcome(UntagResourcesResult(outcome.result()));
	else
		return UntagResourcesOutcome(outcome.error());
}

void KmsClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::UntagResourcesOutcomeCallable KmsClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::UpdateAliasOutcome KmsClient::updateAlias(const UpdateAliasRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAliasOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAliasOutcome(UpdateAliasResult(outcome.result()));
	else
		return UpdateAliasOutcome(outcome.error());
}

void KmsClient::updateAliasAsync(const UpdateAliasRequest& request, const UpdateAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAlias(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::UpdateAliasOutcomeCallable KmsClient::updateAliasCallable(const UpdateAliasRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAliasOutcome()>>(
			[this, request]()
			{
			return this->updateAlias(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::UpdateApplicationAccessPointOutcome KmsClient::updateApplicationAccessPoint(const UpdateApplicationAccessPointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateApplicationAccessPointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateApplicationAccessPointOutcome(UpdateApplicationAccessPointResult(outcome.result()));
	else
		return UpdateApplicationAccessPointOutcome(outcome.error());
}

void KmsClient::updateApplicationAccessPointAsync(const UpdateApplicationAccessPointRequest& request, const UpdateApplicationAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateApplicationAccessPoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::UpdateApplicationAccessPointOutcomeCallable KmsClient::updateApplicationAccessPointCallable(const UpdateApplicationAccessPointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateApplicationAccessPointOutcome()>>(
			[this, request]()
			{
			return this->updateApplicationAccessPoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::UpdateCertificateStatusOutcome KmsClient::updateCertificateStatus(const UpdateCertificateStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateCertificateStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateCertificateStatusOutcome(UpdateCertificateStatusResult(outcome.result()));
	else
		return UpdateCertificateStatusOutcome(outcome.error());
}

void KmsClient::updateCertificateStatusAsync(const UpdateCertificateStatusRequest& request, const UpdateCertificateStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateCertificateStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::UpdateCertificateStatusOutcomeCallable KmsClient::updateCertificateStatusCallable(const UpdateCertificateStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateCertificateStatusOutcome()>>(
			[this, request]()
			{
			return this->updateCertificateStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::UpdateKeyDescriptionOutcome KmsClient::updateKeyDescription(const UpdateKeyDescriptionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateKeyDescriptionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateKeyDescriptionOutcome(UpdateKeyDescriptionResult(outcome.result()));
	else
		return UpdateKeyDescriptionOutcome(outcome.error());
}

void KmsClient::updateKeyDescriptionAsync(const UpdateKeyDescriptionRequest& request, const UpdateKeyDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateKeyDescription(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::UpdateKeyDescriptionOutcomeCallable KmsClient::updateKeyDescriptionCallable(const UpdateKeyDescriptionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateKeyDescriptionOutcome()>>(
			[this, request]()
			{
			return this->updateKeyDescription(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::UpdateKmsInstanceBindVpcOutcome KmsClient::updateKmsInstanceBindVpc(const UpdateKmsInstanceBindVpcRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateKmsInstanceBindVpcOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateKmsInstanceBindVpcOutcome(UpdateKmsInstanceBindVpcResult(outcome.result()));
	else
		return UpdateKmsInstanceBindVpcOutcome(outcome.error());
}

void KmsClient::updateKmsInstanceBindVpcAsync(const UpdateKmsInstanceBindVpcRequest& request, const UpdateKmsInstanceBindVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateKmsInstanceBindVpc(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::UpdateKmsInstanceBindVpcOutcomeCallable KmsClient::updateKmsInstanceBindVpcCallable(const UpdateKmsInstanceBindVpcRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateKmsInstanceBindVpcOutcome()>>(
			[this, request]()
			{
			return this->updateKmsInstanceBindVpc(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::UpdateNetworkRuleOutcome KmsClient::updateNetworkRule(const UpdateNetworkRuleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNetworkRuleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNetworkRuleOutcome(UpdateNetworkRuleResult(outcome.result()));
	else
		return UpdateNetworkRuleOutcome(outcome.error());
}

void KmsClient::updateNetworkRuleAsync(const UpdateNetworkRuleRequest& request, const UpdateNetworkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNetworkRule(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::UpdateNetworkRuleOutcomeCallable KmsClient::updateNetworkRuleCallable(const UpdateNetworkRuleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNetworkRuleOutcome()>>(
			[this, request]()
			{
			return this->updateNetworkRule(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::UpdatePolicyOutcome KmsClient::updatePolicy(const UpdatePolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdatePolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdatePolicyOutcome(UpdatePolicyResult(outcome.result()));
	else
		return UpdatePolicyOutcome(outcome.error());
}

void KmsClient::updatePolicyAsync(const UpdatePolicyRequest& request, const UpdatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updatePolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::UpdatePolicyOutcomeCallable KmsClient::updatePolicyCallable(const UpdatePolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdatePolicyOutcome()>>(
			[this, request]()
			{
			return this->updatePolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::UpdateRotationPolicyOutcome KmsClient::updateRotationPolicy(const UpdateRotationPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateRotationPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateRotationPolicyOutcome(UpdateRotationPolicyResult(outcome.result()));
	else
		return UpdateRotationPolicyOutcome(outcome.error());
}

void KmsClient::updateRotationPolicyAsync(const UpdateRotationPolicyRequest& request, const UpdateRotationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateRotationPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::UpdateRotationPolicyOutcomeCallable KmsClient::updateRotationPolicyCallable(const UpdateRotationPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateRotationPolicyOutcome()>>(
			[this, request]()
			{
			return this->updateRotationPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::UpdateSecretOutcome KmsClient::updateSecret(const UpdateSecretRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSecretOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSecretOutcome(UpdateSecretResult(outcome.result()));
	else
		return UpdateSecretOutcome(outcome.error());
}

void KmsClient::updateSecretAsync(const UpdateSecretRequest& request, const UpdateSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSecret(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::UpdateSecretOutcomeCallable KmsClient::updateSecretCallable(const UpdateSecretRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSecretOutcome()>>(
			[this, request]()
			{
			return this->updateSecret(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::UpdateSecretRotationPolicyOutcome KmsClient::updateSecretRotationPolicy(const UpdateSecretRotationPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSecretRotationPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSecretRotationPolicyOutcome(UpdateSecretRotationPolicyResult(outcome.result()));
	else
		return UpdateSecretRotationPolicyOutcome(outcome.error());
}

void KmsClient::updateSecretRotationPolicyAsync(const UpdateSecretRotationPolicyRequest& request, const UpdateSecretRotationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSecretRotationPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::UpdateSecretRotationPolicyOutcomeCallable KmsClient::updateSecretRotationPolicyCallable(const UpdateSecretRotationPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSecretRotationPolicyOutcome()>>(
			[this, request]()
			{
			return this->updateSecretRotationPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::UpdateSecretVersionStageOutcome KmsClient::updateSecretVersionStage(const UpdateSecretVersionStageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateSecretVersionStageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateSecretVersionStageOutcome(UpdateSecretVersionStageResult(outcome.result()));
	else
		return UpdateSecretVersionStageOutcome(outcome.error());
}

void KmsClient::updateSecretVersionStageAsync(const UpdateSecretVersionStageRequest& request, const UpdateSecretVersionStageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateSecretVersionStage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::UpdateSecretVersionStageOutcomeCallable KmsClient::updateSecretVersionStageCallable(const UpdateSecretVersionStageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateSecretVersionStageOutcome()>>(
			[this, request]()
			{
			return this->updateSecretVersionStage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

KmsClient::UploadCertificateOutcome KmsClient::uploadCertificate(const UploadCertificateRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UploadCertificateOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UploadCertificateOutcome(UploadCertificateResult(outcome.result()));
	else
		return UploadCertificateOutcome(outcome.error());
}

void KmsClient::uploadCertificateAsync(const UploadCertificateRequest& request, const UploadCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, uploadCertificate(request), context);
	};

	asyncExecute(new Runnable(fn));
}

KmsClient::UploadCertificateOutcomeCallable KmsClient::uploadCertificateCallable(const UploadCertificateRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UploadCertificateOutcome()>>(
			[this, request]()
			{
			return this->uploadCertificate(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

